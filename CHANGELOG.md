<!-- Version: 2.8.0 -->

# LiteLoader Release Note

**Adapted to BDS-1.19.40 | ProtocolVersion 557**

## New features

- Support 1.19.40 @dreamguxiang
- Add DeviceAPI::getPlayMode for LLSE @shishkevichd
- Add `EntityAPI::distanceToSqr` @shishkevichd
- Add property lore for ItemAPI @shishkevichd
- Add setHealth, setMaxHealth for ActorAPI @shishkevichd

## Changes

- Drop item when add is failed (in `Player::giveItem`) @Redbeanw44602
- Add amount parameter to `Container.addItem` @Redbeanw44602
- Add WanderingTrader spawn to MobSpawnEvent @Redbeanw44602
- `EntityAPI::distanceToPos` -> `EntityAPI::distanceTo` @shishkevichd
- Now `EntityAPI::distanceTo` accepts an Entity @shishkevichd

## Bug Fixes

- Fix `Player::giveItem` bug #834,#850 @Redbeanw44602
- Fix PlayerInfo api error #856 @ShrBox
- Fix PlayerUseBucketEvent fails to listen in some cases #855(#865) @quizhizhe
- Fix `Actor::teleport` @dreamguxiang
- Fix some ios players join server and server lag #863 @dreamguxiang
- Fix `runcmd/runcmdEx` some commands cannot be executed #858,#859,#715,#553 @dreamguxiang
- Fix `mc.cloneMob` pos error #861 @dreamguxiang