# inputs
FEATURES_OPTIONAL :=
FEATURES_REQUIRED := a c
FEATURES_REQUIRED_ANY :=
FEATURES_PROVIDED := a b c d
FEATURES_BLACKLIST :=
FEATURES_CONFLICT := a:b c:d

# expected results
EXPECTED_FEATURES_USED := a c
EXPECTED_FEATURES_MISSING :=
EXPECTED_FEATURES_USED_BLACKLISTED :=
EXPECTED_FEATURES_CONFLICTING :=

include Makefile.test
