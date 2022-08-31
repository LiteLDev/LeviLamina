## [LiteLoader Release Note]
LiteLoaderBDS-2.6.0 update has been released, adapted to BDS-1.19.21, ProtocolVersion 545

## [New features]
- Add ParticleAPI @OEOTYAN
- Add more properties in PlayerAPI and EntityAPI by @shishkevichd & @dreamguxiang
- Add ResourcePackRepository::setCustomResourcePackPath by @dreamguxiang
- Add AddrHook,SigHook API by @dreamguxiang
- Add some definitions(ChunkBlockPos) by @OEOTYAN
- Add PermissionAPI by @Jasonzyt
- Add StaticVanillaBlocks (#704) by @OEOTYAN
- Add PlayerInfoAPI for LLSE by @Jasonzyt
- Add links to C++ documentation (#734) by @Futrime
- Add Hot Reload for NodeJS Plugin  by @yqs112358
- New methods and properties of LLAPI for LLSE (#726) by @shishkevichd & @Jasonzyt
- Update 1.19.21 by @dreamguxiang
- Add ResourcePackInitEvent by @dreamguxiang
- Add fix BDS crashes(Beta) by @dreamguxiang
  - Default is off, please turn on `FixBDSCrash` from the configuration file

## [Change]
- Complete #716 by @dreamguxiang
- Throwing exceptions back when catching SEH exceptions in Dev mode by @yqs112358
- Add Actor::hurtEntity ActorDamageCause Parameter (#729) by @dreamguxiang
- Update PlayerAPI of LLSE (#723) by @shishkevichd
- Refine and fix NativeApi by @WangYneos & @Redbeanw44602
- Reconstruct LLSE part of codes by @yqs112358
- Now the development_xxxx_packs directory can load all packs directly and without filling out world_xxxx_packs.json by @dreamguxiang

## [Bug Fixes]
- Fix & recompile QuickJs to fix (#708) by @yqs112358
- Fix Crash when creating AttributeModifier instance (#725) by @dreamguxiang
- Fix PlayerDropItemEvent bugs by @dreamguxiang
- Fix LLSE reloading the plugin after the command re-registration will lead to registration error (#689) by @Jasonzyt
- Fix Player/CommandOutput's i18n function cannot pass fmt::named_arg by @Jasonzyt
- Fix named argument in nodejs plugin pack output by @Jasonzyt
- Fix after LiteLoader.dll is loaded  Ctrl+C forced to close the service is not valid by @Jasonzyt
- Fix date cannot parse time from string(quickJs) (#708) by @yqs112358
- Fix LLSE hot reload quickJs plugin when ScriptEngine-NodeJs error message (#701) by @yqs112358
- Fix AntiGiveCommand dynamic generate (#700) by @WangYneos
