# COPYRIGHT Dassault Systemes 2015
#======================================================================
# Imakefile for module ProcessNotesMdl.m
#======================================================================
#
#  Oct 2015  Creation: Code generated by the CAA wizard  WANGJIAPENG
#======================================================================
#
# SHARED LIBRARY 
#
BUILT_OBJECT_TYPE=SHARED LIBRARY 
 
# DO NOT EDIT :: THE CAA2 WIZARDS WILL ADD CODE HERE
WIZARD_LINK_MODULES = JS0GROUP \
ObjectBaseMdl 
# END WIZARD EDITION ZONE

LINK_WITH = $(WIZARD_LINK_MODULES)

# System dependant variables
#
OS = AIX
#
OS = HP-UX
#
OS = IRIX
#
OS = SunOS
#
OS = Windows_NT
