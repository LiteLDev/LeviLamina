## [LiteLoader Release Note]
LiteLoaderBDS-2.5.0 update has been released, adapted to BDS-1.19.20, ProtocolVersion 544

## [Major]
- Support BDS 1.19.20 by @dreamguxiang
- New i18n API (#503)(#651) by @Jasonzyt
- NodeJs Support. by @Jasonzyt @WangYneos @yqs112358 @ShrBox @RimuruChan

## [New features]
- Add BinaryStream.writeType(mce::UUID) (#606) by @S3v3Nice 
- Add ReadOnlyBinaryStream.readType(Vec3) (#619) by @S3v3Nice
- Add PlayerInfoAPI cache&new API (#612) by @Jasonzyt
- Add Raise error when trying registering a existing command name (#604) by @Jasonzyt
- Add PlayerInteractEntityEvent (#646) by @S3v3Nice

## [Change]
- Script addons support, by @dofes
- LLSE-JS engine changed from V8 to QuickJs by @dreamguxiang @yqs112358
- Update Slider & CustomForm (#572) by @S3v3Nice
- Upgrade OpenSSL to 3.0.5 (#654) by @ShrBox

## [Bug Fixes]
- Separate jsdebug & nodedebug command (#615) by @StarsDream00 @RimuruChan
- Fix Lua table type check (#622) by @StarsDream00 @RimuruChan
- Fix LLSE File class object cannot read files with Chinese file names properly (#625) by @Jasonzyt
- Fix LLSE File class can not properly delete files with Chinese file names (#627) by @Jasonzyt
- Fix BinaryStream class is missing writeVec3 (#631) by @Jasonzyt
- Fix ob.getScore(target) does not get the corresponding score correctly (#626) by @Jasonzyt
- Fix Block::getTileData error, by @Jasonzyt
- Fix Plugin name cannot contain LiteLoader (#644) by @Jasonzyt
- Fix the event callback when listening to the player's death does not get the player's items properly (#634) by @dreamguxiang
- Fix FormUI Form StepSlider error (#642) by @Jasonzyt
