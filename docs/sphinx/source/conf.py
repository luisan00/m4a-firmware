#import sys
import breathe.project
project = 'Mesh4all'
email = 'hello@mesh4all.org'
copyright = '2022 Mesh4all %s'% email
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.viewcode',
    'breathe'
]

# -- Exhale configuration ---------------------------------------------------
# Setup the breathe extension
breathe_projects = {
    "Mesh4all": "../../doxygen/gen_docs/xml"
}

breathe_default_project = "Mesh4all"

# Tell sphinx what the primary language being documented is.
primary_domain = 'c'

# Tell sphinx what the pygments highlight language should be.
highlight_language = 'c'

source_suffix = {
    '.rst': 'restructuredtext',
    '.txt': 'markdown',
    '.md': 'markdown',
}

# use the following theme
html_theme = "sphinx_book_theme"
