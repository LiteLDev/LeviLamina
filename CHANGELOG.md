## [New Forum]
[https://forum.litebds.com/](https://forum.litebds.com/)

## [LiteLoader Release Note]
LiteLoaderBDS-2.4.0 update has been released, adapted to BDS-1.19.10, ProtocolVersion 534

## [New features]
- Support BDS 1.19.10, by @QingYu,@WangYneos
- New I18N api(Provided for small plugins), by @Jasonzyt
  - `Please wait for the next version for large plugins`
- Config add enableTpdimCommand, enableForceUtf8Input by @QingYu
- Better PlayerPlaceBlockEvent, by @Redbeanw44602
- Add Vec3 for onUseItemOn event, #523 by @OEOTYAN

## [Change]
- PlayerMoveEvent/OnMove Will be abandoned in the future.(Please revise other programs as soon as possible)

## [Bug Fixes]
- Fix LL bugs:
  - Don't load plugins with the same file name as a registered plugin, #510 by @Jasonzyt
  - Molang API(MC/ExpressionNode.hpp) syntax error, #524 by @LazuliKao
  - PlayerMoveEvent bugs, #530 by @Redbeanw44602
  - distanceToSqr API, by @QingYu
- Fix LLSE bugs:
  - The default value of parameter `perm` in `mc.newCommand` is not correct, #517 by @StarsDream00