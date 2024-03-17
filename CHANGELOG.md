# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

## [0.9.5] - 2024-03-18

### Added

- Support runtime command registration

### Fixed

- Fix plugin disable callback is not called

## [0.9.4] - 2024-03-14

### Fixed

- Fix logic error in TickSyncSleep
- Fix Actor::traceRay [#1481]

## [0.9.3] - 2024-03-11

### Added

- Add Randomize and VariableMaxAutoStepComponent struct
- Add mvs
- Add visitIndex
- Add plugin register helper
- Add `PostprocessingManager::LockedChunk`,`buffer_span` , `DividedPos2d`add some member (#1484)

### Changed

- Add catch in TickSyncTaskPool
- Refactoring TickSyncTaskPool
- Refactoring CommandHandle
- Refactoring TickSyncSleep

### Fixed

- Fix missing dllexport in `SimpleForm::appendButton`
- Fix missing include in file_utils
- Fix string utils
- Fix [#1483]

## [0.9.2] - 2024-03-01

### Fixed

- Fix command problem caused by plugin manage command
- Fix BossBarColor enum values

## [0.9.1] - 2024-02-29

### Added

- Add new BossBarColor enum value
- Add BlockVolume::block
- Add statistics service
- Add `ll reactivate` command

### Changed

- Optimize `ll show` command output

## [0.9.0] - 2024-02-24

### Added

- **Adapted to BDS version `1.20.62`**

## [0.8.4] - 2024-02-23

### Added

- Add plugin manage command `/levilamina` `/ll`

## [0.8.3] - 2024-02-21

### Added

- Added dependencies and updated internal types in BlockTickingQueue
- Completed the member variables of HeightmapWrapper, LevelChunkPacket, StructureFeatureRegistry, ChunkGeneratorStructureState, ResourceDrops, and StructureSetRegistry

### Changed

- BlockUpdateFlag has been updated
- Used latest version of dependencies
- Added exception handling for member functions in the Plugin class

### Fixed

- `Fixed the errors related to CrashLogger`
- `Fixed potential update issues caused by the 'post_uninstall' command in tooth.json`
- `Fixed issue caused by incorrectly formatted dependency versions in tooth.json`
- Fixed the size of EndCityFeature and StructureCache::StructurePair
- Corrected offset comments for certain class member variables
- Corrected symbol comment for Minecraft::earlyShutdownMainThread

## [0.8.1] - 2024-02-13

### Added

- Added a built-in command 'crash' to simulate server crash

### Changed

- Removed the restriction on a maximum of 255 buttons in the form
- Refactored FormAPI

### Fixed

- Fixed the issue of getDefaultAllocator not being exported
- Fixed the ServerScriptManager structure

## [0.8.0] - 2024-02-13

### Added

- **Adapted to BDS version `1.20.61`**
- Added a method to allow OPs to use cheat commands when cheats are disabled in the server properties
- Added built-in command 'memstatus' to query memory status
- Added new memory allocator
- Added more color conversion functions

### Changed

- Refactored BuiltinCommands
- Allow instantiation of FlatWorldGeneratorOptions and BlockVolume without parameters
- Modify the installation details of Levilamina
- Complete the pure virtual class IMemoryAllocator

### Fixed

- Fixed bugs in Molang and HashedString

## [0.7.2] - 2024-02-05

### Added

- Add reflection offset getter
- Add some struct for ScriptAPI
- Add dark mode to docs
- Add dimension enum to command
- Support molang registery
- Add formid manager to resolve potential conflicts
- Add tpdim command

### Changed

- Refactor the command registration system
- Support for const member function hook
- Add overload support to hook
- Reuse function pointer hook with overload
- Move native API docs
- Refactoring tr strings
- Refactoring i18n
- Replace logDebugResult into std::visit
- Refactor form api
- Bypass preloader plugins

### Fixed

- Remove extra include
- Fix all clang&msvc warnings
- Fix bedrock service multi-threaded access conficts
- Fix a fatal bug in 0.6.3 that causes crashes

## [0.6.3] - 2024-01-30

### Changed

- Remove constructor of ScorePacketInfo
- Disable DynamicTypeList

### Fixed

- Fix scheduler remove id
- Make clang-cl compilable

## [0.6.2] - 2024-01-29

### Changed

- Add move to parseSnbt
- Refactoring FileWatcher
- Remove useless output

### Fixed

- Fix scheduler remove
- Export PluginManager virtual function

## [0.6.1] - 2024-01-29

### Changed

- Add check to fromNetworkNbt

### Fixed

- Fix commandOutput bugs
- add type to CommandOutputMessageType
- Fix CommandOutput success&error

## [0.6.0] - 2024-01-28

### Added

- Add initializer list to CompoundTag
- Complete the size of RenderParams and VanillaTreeFeature, as well as VillageFeature, add their respective member variables to WorldBlockTarget and WorldGenContext
- Add a virtual destructor to IBlockWorldGenAPI to ensure its size is correct
- Add member variables to ChunkSource
- Filler DistanceSortedActor struct
- Dependency diagnostic for NativePlugin
- Complete the member variables for Pos2d, the size for Block, and the parent class list for DividedPos2d
- Revise the construction of buffer_span_mut and ActorBlockSyncMessage, and complete the member variables for ChunkLocalNoiseCache
- Add member variables to Aquifer::FluidSample and Aquifer
- Move fakeChangeDimension to api

### Changed

- Compress dim nbt data
- Logger switch to format_string for compile time instantiate
- Refactoring format string
- Remove DimensionUtils

### Fixed

- Fix current_zone not working on old Windows and Wine
- Fix snbt empty list bug
- Fix CommandRegistry crash in using Symbol member
- Fix CommandRegistry::Symbol abi
- Fix the offset size error in member variable comments caused by changes in member variables.
- Logger add override for msg only print
- Fix some error in custom dimension
- Fix LevelSeed64 crash
- Fix dll deps load

## [0.5.1] - 2024-01-19

### Added

- Add registerFeature to FeatureRegistry
- Add SubChunk::BlockLayer
- Add members to XoroshiroPositionalRandomFactory and IPositionalRandomFactory
- Add various tests related to world generation

### Changed

- Refactor SharedPtr
- Create new pch file and fix some header include problem
- Update DataItemType enum to use uchar instead of byte
- Fix the omissions in Layer and added member variables to LakeFeature
- Refactor custom dimension

### Fixed

- Fix the issue with IFeature vtable and the issue with StackResultStorageFeature::tryUnwrap
- Fix Dataitem alignment erro
- Update enum classes with explicit underlying types
- Fix FlatWorldGeneratorOptions

## [0.5.0] - 2024-01-17

### Added

- Add service and refactor plugin system
- Add lang dir to plugin
- Add hash function to InventorySource
- Complete the missing parameters for the LL_SIGNATURE_CALL macro
- Complete the size of ItemStackRequestActionHandler and the parameter names of ItemStackRequestActionHandler::_handleTransfer
- Add InventoryAction and NetworkItemStackDescriptor missed constructor
- Add members to FlowerFeature,FlatWorldGeneratorOptions

### Changed

- Allow multiple implement of emitter
- Refactor print exception
- Refactor dynamic type list
- Refactor NonOwnerPointer
- Readd constructor in ScorePacketInfo

### Fixed

- Fix plugin dir cache
- Fix ansi code page
- Remove BugFix
- Fix BinaryStream writeType
- Fix plugin name with dot
- Fix TypeList::index error
- Fix WorldGenerator vftable

## [0.4.2] - 2024-01-12

### Added

- lip install support in source repo.

## [0.4.1] - 2024-01-12

### Added

- Stacktrace info struct

### Changed

- Debug stacktrace

### Fixed

- MC headers
- Msvc vftable bugs

## [0.4.0] - 2024-01-09

### Added

- Custom new dimension.

## [0.3.0] - 2024-01-04

### Changed

- Event subscription and unsubscription.
- Command registration.

## [0.2.2] - 2023-12-31

### Fixed

- Event handling.

## [0.2.1] - 2023-12-25

### Fixed

- Plugin loading.

## [0.2.0] - 2023-12-24

First preview release.

## [0.1.0] - 2023-12-01

For lip and tooth-hub test only.

[#1481]: https://github.com/LiteLDev/LeviLamina/issues/1481
[#1483]: https://github.com/LiteLDev/LeviLamina/issues/1483

[Unreleased]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.5...HEAD
[0.9.5]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.4...v0.9.5
[0.9.4]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.3...v0.9.4
[0.9.3]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.2...v0.9.3
[0.9.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.1...v0.9.2
[0.9.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.0...v0.9.1
[0.9.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.8.4...v0.9.0
[0.8.4]: https://github.com/LiteLDev/LeviLamina/compare/v0.8.3...v0.8.4
[0.8.3]: https://github.com/LiteLDev/LeviLamina/compare/v0.8.1...v0.8.3
[0.8.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.8.0...v0.8.1
[0.8.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.7.2...v0.8.0
[0.7.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.6.3...v0.7.2
[0.6.3]: https://github.com/LiteLDev/LeviLamina/compare/v0.6.2...v0.6.3
[0.6.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.6.1...v0.6.2
[0.6.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.6.0...v0.6.1
[0.6.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.5.1...v0.6.0
[0.5.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.5.0...v0.5.1
[0.5.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.4.2...v0.5.0
[0.4.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.4.1...v0.4.2
[0.4.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.4.0...v0.4.1
[0.4.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.3.0...v0.4.0
[0.3.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.2.2...v0.3.0
[0.2.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.2.1...v0.2.2
[0.2.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.2.0...v0.2.1
[0.2.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.1.0...v0.2.0
[0.1.0]: https://github.com/LiteLDev/LeviLamina/releases/tag/v0.1.0
