# LiteLoader Release Note

**Support BDS 1.19.50 & 1.19.51 | ProtocolVersion 560**

## New features
- Add despawn and remove methods into Entity Class for LLSE (by @Tsubasa6848)
- Add Event::EnderDragonDestoryEvent (by @Tsubasa6848)
- Add asEntity, asItem, asPlayer, asContainer methods for script Native Pointer class (by @killcerr)
- Add rotation para to player.teleport (by @Redbeanw44602)
- Add entity query api BlockSource::queryEntities (by @Redbeanw44602)
- Add support for version status to ll.registerPlugin (by @Redbeanw44602)
- Add Version enum in script engine (by @Redbeanw44602)
- Add `CommandBlockName` to replace `Block const*` (by @dreamguxiang)

## Bug Fixes
- Fix Event::MobSpawnEvent #930 (by @Tsubasa6848)
- Fix Recipes crash (by @dreamguxiang)
- Fix wrong dimension in events of LLSE (by @Jasonzyt and @timiya233)
- Fix wrong trigger onRespawn (by @Redbeanw44602)
- Fix `File.createDir` (by @Redbeanw44602)
- Fix logic expression in player.setPermLevel (by @Redbeanw44602)
- Fix nullptr in player.distanceTo and player.distanceToSqr (by @Redbeanw44602)
- Fix Scoreboard API #971 (by @ShrBox)
- Fix `Block.hasContainer` in LLSE #1016 (by @ShrBox)
- Fix `JsonConfigFile` in LLSE #1017 (by @ShrBox)
- Fix `File` in LLSE #1021 (by @ShrBox)
- Fix DynamicCommandAPI & LLSE CommandAPI BlockType error (by @dreamguxiang)

## Changes
- Remove enableClientChunkPreGeneration setting option (by @ShrBox)
- Split Event::MobSpawnEvent (by @Tsubasa6848)
- Change relative rotation to absolute rotation in Actor::teleport() (by @Redbeanw44602)
- Adjust offlineScoreAPI (by @kkj9333)