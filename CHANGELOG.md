## [New Forum]
[https://forum.litebds.com/](https://forum.litebds.com/)

## [LiteLoader Release Note]
LiteLoaderBDS-2.4.0 update has been released, adapted to BDS-1.19.10, ProtocolVersion 534

## [New features]
- Support BDS 1.19.10
- New I18N api
- Config add enableTpdimCommand, enableForceUtf8Input
- Better PlayerPlaceBlockEvent
- Add Vec3 for onUseItemOn event, #523 by @OEOTYAN

## [Bug Fixes]
- Fix LL bugs:
  - Don't load plugins with the same file name as a registered plugin, #510
  - Molang API(MC/ExpressionNode.hpp) syntax error, #524 by @LazuliKao

- Fix LLSE bugs:
  - The default value of parameter `perm` in `mc.newCommand` is not correct, #517 by @StarsDream00