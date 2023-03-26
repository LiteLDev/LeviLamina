# Release 2.12.1

![BDS 1.19.72.01](https://img.shields.io/badge/BDS-1.19.72.01-blue?style=for-the-badge)&emsp;![Protocol 575](https://img.shields.io/badge/Protocol-575-orange?style=for-the-badge)

# Warning
![BDS 1.19.70.02](https://img.shields.io/badge/NoSupport-1.19.70.02-red?style=for-the-badge)&emsp;

## Added

- feat: add patch to fix LevelChunkPacket crash (by @ShrBox)

## Changed

- refactor: remove AntiGive because it has been fixed by Mojang (by @ShrBox)
- feat: optimize error messages (#1159) (by @@StarsDream00)

## Fixed

- fix: fix NpcCmd(#1158) & Actor::isOnGround (by @OEOTYAN)
- fix: fix hot load/reload of python backend (by @yqs112358)
- fix: add some missing LLSE apis (by @yqs112358)
- fix: add SetThreadDescription to DEBUG compile mode (by @yqs112358)
- fix: update ScriptX to fix a serious Python constructor bug (by @yqs112358)
- fix: error in Schedule task will not cause the repeat stopped (by @yqs112358)
- fix: disable all python's sys.stdin to fix stdin hijack (by @yqs112358)
- fix: update data structure StringByteInput for CompoundTag::fromBinaryNBT (#1166) (by @WangYneos)
- fix: PlayerScoreChangedEvent #1165 (by @ShrBox)