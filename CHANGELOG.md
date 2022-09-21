<!-- Version: 2.6.3 in progress -->
# LiteLoader Release Note

## Bug Fixes

## APIs Changed list (for developer)
**Note that APIs marked as deprecated will be removed in the next few releases.**

### File
llapi/LLAPI.h

#### Item
All item with namespace LL

#### Note
Move to namespace ll. You should recompile your plugin with latest SDK as soon as possible due to the removal of deprecated API and ABI in the future.

### File
All files in llapi/mc

#### Item
All enum defined in llapi/mc

#### Note
Use enum class instead of enum. You should recompile your plugin with latest SDK as soon as possible due to the removal of deprecated API.
