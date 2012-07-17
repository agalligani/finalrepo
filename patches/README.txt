It is sometimes necessary to modify or apply patches to code downloaded from
Drupal.org. However, once this code is modified, it becomes troublesome to
update it; the modifications are lost after an update. In order to keep track
of modifications so that they can be more easily re-applied after updates,
please follow the following described process.

Once a modification is made, a patch should be created containing that
modification. Patches should be created according to the Drupal conventions
outlined at http://drupal.org/patch/create in a manner that they can be
applied using Git. Specifically, patches should be made from the root of the
module, library, etc. being modified in a way that they can be applied using
"patch -p1".

The patch should be placed in the "patches" directory inside the Drupal root
with further subdirectories to indicate where the patch should be applied.
For instance, a patch created in "modules/taxonomy/" should be placed in
"patches/modules/taxonomy/".

Whenever something such as a module is updated, the appropriate patches can
be located and applied from the patches directory.

In order to help automate this process, the patch.bash script can be run after
any updates. In order to use this script, Windows users will need to install
Cygwin from http://www.cygwin.com/ .
