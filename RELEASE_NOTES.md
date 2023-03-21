# Release 2.12.0-beta.1

![BDS 1.19.63.01](https://img.shields.io/badge/BDS-1.19.71.02-blue?style=for-the-badge)&emsp;![Protocol 568](https://img.shields.io/badge/Protocol-575-orange?style=for-the-badge)

## New Feature

- ⭐LLSE Support Python plugins (by @yqs112358 @twoone-3)
- More docs to see: [📋 Multi Development Language Support (litebds.com)](https://docs.litebds.com/en/#/LLSEPluginDevelopment/LanguageSupport?id=python-language-support-description)

## Adaptation

- feat: adapt to 1.19.70/71 (#1126) (by @dreamguxiang)
- fix: fix crash #1130 (by @dreamguxiang)
- fix: fix OwnerStorageEntity::tryUnwrap crash (by @dreamguxiang)
- fix: fix some packet api bugs (by @dreamguxiang)
- fix: fix ItemActor::getItemStack crash (by @dreamguxiang)

## Added

- feat: add templates and update StaticVanillaBlocks (#1116) (by @OEOTYAN)
- feat: #1112 (#1118) (by 3 people)
- feat: complete Ref.hpp & EntityId (by @OEOTYAN)
- feat: add some common functions (#1138)  (by @OEOTYAN)

## Changed

- feat: refactor: replace some direct offset with dAccess (by @ShrBox)
- refactor: replace PacketId which is using int with MinecraftPacketIds  (by @ShrBox)
- refactor: remove built-in packet filter  (by @ShrBox)
- refactor: update MinecraftPacketIds (by @dreamguxiang)

## Fixed

- fix: fix queryEntities (#1123)  (by @OEOTYAN)
- fix: fix missing tick address  (by @ShrBox)
- fix: fix crash caused by autoGenerate  (by @ShrBox)
- fix: sendTextPacket, sendRawFormPacket and so on  (by @ShrBox)

**Full Changelog**: https://github.com/LiteLDev/LiteLoaderBDS/compare/2.11.1...2.12.0-beta.1