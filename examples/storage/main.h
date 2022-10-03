/*
 * Copyright (c) 2022 Mesh4all <mesh4all.org>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdint.h>
#ifndef MAIN_H
#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

// PAGE 0
// page index
// byte[0 ~  3]    -> config[ 0 ] (forExp: 0x11223344)
// byte[4 ~  7]    -> config[ 1 ] (  ""    0x....... )
// byte[8 ~ 11]    -> config[ 2 ] (  ""    0x....... )
// byte[n ~ n + 3] -> config[n/4] (  ""    0x........)

// all -> union
#define RPL_ROLE_UNDEF 0x00
#define RPL_ROLE_DAG 0x01
#define RPL_ROLE_DODAG 0x02

// storing & nstoring -> union
// p2p                -> struct, uint8_t, int8_t, etc
#define RPL_MODE_UNDEF 0x00       /*!< Not defined */
#define RPL_MODE_STORING 0x02     /*!< Storing mode */
#define RPL_MODE_NON_STORING 0x01 /*!< Non storing mode */
#define RPL_MODE_P2P 0x03         /*!< Allow other modes as storing or non storing */

// PAGE 1
typedef struct {
    uint8_t role;         // allow: UNDEF, DAG, DODAG
    uint8_t storing_mode; // allow: UNDEF, STORING, NON_STORING
    uint8_t p2p_mode;     // allow: UNDEF, P2P
} rpl_conf_t;



typedef struct {
    int8_t tx_power;
    int16_t frequency;
    uint8_t channel;
} if_conf_t;

static if_conf_t if_config[] = {
    {
        .tx_power = 4,
        .frequency = 2400,
        .channel = 11,
    },
    {
        .tx_power = 2,
        .frequency = 868,
        .channel = 1,
    },
};

#define IF_NUMOF ARRAY_SIZE(if_config)

#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */
       /** @} */