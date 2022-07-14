BUILDDIR = gen_docs
CMD      = doxygen
CUSTOM_CFG = mesh4all.cfg

# Put it first so that "make" without argument is like "make help".
help:
	@$(CMD) --help $(O)

.PHONY: help Makefile

# Catch-all target: route all unknown targets to Sphinx using the new
# "make mode" option.  $(O) is meant as a shortcut for $(SPHINXOPTS).
clean: Makefile
	$(RM) -r $(BUILDDIR) $(O)

all: Makefile
	@$(CMD) $(CUSTOM_CFG) $(0) 