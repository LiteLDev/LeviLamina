## [LiteLoader Release Note]
LiteLoaderBDS-2.3.1 update has been released, adapted to BDS-1.19.1, ProtocolVersion 527

## [New features]
- Add initial support for HttpRequest and HttpResponse
- Add biome APIs
- Add Experience related APIs
- Add sendToast API

## [Change]
- Improve Dynamic command error output

## [Bug Fixes]
- Fix LL bugs:
  - Teleport bug
  - Sqlite bug,#452
  - Vec3::toBlockPos error
  - Xuid of PlayerLeftEvent
  - Config loading error
  - LLSE error when config load fails
- Fix LLSE bugs:
  - Plugin onPostInit Error reason output
  - NbtListClass bugs
  - JsonConfigFile Bugs,#456
- Fix BDS bugs:
  - Wine console input
