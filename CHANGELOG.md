<!-- Version: 2.7.0 -->

# LiteLoader Release Note

**Adapted to BDS-1.19.30 | ProtocolVersion 554**

## Bug Fixes

- Fix ParticleSpawner bugs in LLSE (#780) @OEOTYAN
- Fix player join server client lag (#825) @dreamguxiang
- Fix player join server crash (#825,#827,#828,#829) @dreamguxiang

## New Features

- Support BDS 1.19.30 (#819) @dreamguxiang
- Add setScale API for LLSE (#762) @shishkevichd
- Add PlayerUseBucket Event (#746) @quizhizhe
- Add LLSE ItemAPI::setDisplayName (#766) @shishkevichd
- Add DeviceAPI::getInputMode for LLSE (#772) @shishkevichd
- Add distanceToPos API for PlayerAPI & EntityAPI for LLSE (#775) @shishkevichd
- Add PlayerOpenInventory event (#767) @Jasonzyt
- Add LL settings command @RimuruChan
- Add PlayerSwingEvent (#797) @OEOTYAN
- Add stopFire API for PlayerAPI & EntityAPI for LLSE (#801) @shishkevichd
- Add more properties in BlockAPI in LLSE (#816) @shishkevichd

## APIs / ABIs Breaking Change list (for developer)

**Note that APIs marked as deprecated will be removed in the next few releases.**

| Location        | Changes                        | Description                                                                                                                                                  |
|-----------------|--------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|
| *llapi/LLAPI.h* | All item with namespace `LL`.  | Move to namespace `ll`. You should **recompile** your plugin with latest SDK as soon as possible due to the removal of deprecated API and ABI in the future. |
| *llapi/mc/*     | All enum defined in *llapi/mc* | Use enum class instead of enum. You should **recompile** your plugin with latest SDK as soon as possible due to the removal of deprecated API.               |
