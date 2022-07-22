-- ---------------------
-- For require
-- ---------------------
package.path = "plugins/lib/?.lua;"..package.path


-- ---------------------
-- For Compatibility
-- ---------------------
file = File
lxl = ll;
-- DirectionAngle.valueOf = DirectionAngle.toFacing
LXL_Block = LLSE_Block
LXL_BlockEntity = LLSE_BlockEntity
LXL_Container = LLSE_Container
LXL_Device = LLSE_Device
LXL_Entity = LLSE_Entity
LXL_SimpleForm = LLSE_SimpleForm
LXL_CustomForm = LLSE_CustomForm
LXL_Item = LLSE_Item
LXL_Player = LLSE_Player
LXL_Objective = LLSE_Objective

