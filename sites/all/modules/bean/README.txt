Bean (Block Entities Aren't Nodes)
==================================

The bean module was created to have the flexibility of
Block Nodes without adding to the node space.

Bean Types
----------

A Bean Type (or Block Type) is a bundle of beans (blocks).
Each Bean type is defined by a ctools plugin and are fieldable.
Currently Bean Types are only defined in hook_bean_plugins().

If you enable beans_admin_ui you can add/edit bean types at
admin/structure/block_types

Beans
-----

Beans can be added at block/add