# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Released]

## [1.0.0] - 2025-01-25

### Added

- Added uncheck hook option and fix test @RimuruChan
- Added Sentry support @dreamguxiang @Dofes @OEOTYAN @ShrBox

### Changed

- Release function when event cancelled @OEOTYAN

### Fixed

- Fixed hook origin type check @RimuruChan
- Reorganized CompoundTagVariant member layout @Dofes
- Fixed default copyers generator @OEOTYAN @RimuruChan

## [Unreleased]

## [1.0.0-rc.3] - 2025-01-11

### Added

- Added more nbt operator @OEOTYAN
- Added some api to logger @OEOTYAN
- Added itemstack ctor default param @Dofes
- Added some mc class members [#1611]
- Added an issue template for requesting complementary mc class member variables @Lovelylavender4

### Fixed

- Fixed [#1610] @Dofes
- Fixed command @OEOTYAN
- Fixed version prelease parse @OEOTYAN

## [1.0.0-rc.2] - 2025-01-06

### Added

- Add block state setter and getter @Dofes

### Changed

- Remove some internal functions from api header @OEOTYAN
- Add member functions for some template @OEOTYAN
- Change some weird concept @OEOTYAN
- Remove some explicit @OEOTYAN

### Fixed

- Fix Player::sendMessage broadcast @OEOTYAN
- Fix MolangScriptArg @OEOTYAN

## [1.0.0-rc.1] - 2025-01-04

### Added

- **Adapted to BDS version *1.21.50*** @OEOTYAN @ddf8196 @Dofes @dreamguxiang @futrime @KawaiiNahida @Lovelylavender4 @PA733 @Pd233 @RimuruChan @ShrBox @wu-vincent
- Added the missing field to CommandRegistry::Overload @wu-vincent
- Added StdoutRedirector @OEOTYAN
- Added imgui and some relate codes @ddf8196 @OEOTYAN
- Added function definitions for ItemStackBase::getTypeName, ItemStackBase::getDescriptionName, ItemStackBase::getDamageValue to the source file @Dofes
- Added some headers for ui @Dofes
- Added clang/gcc virtualDetector @OEOTYAN
- Added hints for double enable/disable @OEOTYAN
- Added new signature resolver @OEOTYAN
- Added ll::memory::IndirectValue @OEOTYAN
- Added tight pair @OEOTYAN
- Added pl config to formatter @OEOTYAN
- Added default tick pool  @OEOTYAN
- Added TypeTraits, AnyFunction @OEOTYAN
- Added ConcurrentPriorityQueue and try_pop_if @OEOTYAN
- Added addTaskAfter to Executer @OEOTYAN
- Added coroutine support @OEOTYAN
- Added keepThis keep lambda lifetime @OEOTYAN
- Added getNonOwnerRef to EnableNonOwnerReferences @OEOTYAN
- Added param traits to custom command param @OEOTYAN
- Added thunk to all types @OEOTYAN
- Added LoggerRegistry [#1582] @OEOTYAN
- Added UntypedStorage @OEOTYAN
- Added TypedStorage @OEOTYAN
- Added initializer_list for CompoundTagVariant @OEOTYAN
- Adaptted to new preloader @OEOTYAN
- Completes some class member @Lovelylavender4 @zimuya4153 @KobeBryant114514 @OEOTYAN
- Moved concepts to internal @OEOTYAN
- Filled sim::LookDuration @ShrBox
- Resolved [#1519] @OEOTYAN
- Initially drafted the EULA and user guidelines @Lovelylavender4

### Changed

- Refactorred splitByPattern @OEOTYAN
- Refactorred mc header file format and location, etc @OEOTYAN
- Refactorred Logger system @OEOTYAN
- Refactorred stacktrace @OEOTYAN
- Refactorred i18n @OEOTYAN
- Refactorred StdoutRedirector @OEOTYAN
- Refactorred filehandle/expected @OEOTYAN
- Refactorred virtual memory alloc @OEOTYAN
- Refactorred event system @OEOTYAN
- Refactorred literals @OEOTYAN
- Refactorred TaskPool @OEOTYAN
- Refactorred Scheduler @OEOTYAN
- Refactorred Closure @OEOTYAN
- Removed some function deps @OEOTYAN
- Removed useless convert @OEOTYAN
- Removed Logger player output @OEOTYAN
- Removed some internal deps @OEOTYAN
- Removed function jump in queue @OEOTYAN
- Removed crypto utils @OEOTYAN
- Replaced some containers @OEOTYAN
- Rewrited log info @OEOTYAN
- Reseted enum parser to keep reload dll working @OEOTYAN
- Changed some api file locations @OEOTYAN
- Changed locale code name @OEOTYAN
- Changed param to string_view @OEOTYAN
- Updated quickstart.zh.md docs @ShrBox
- Outputed demangle symbol @OEOTYAN
- Made command param checker into compile time @OEOTYAN
- Made param option and praser into traits @OEOTYAN
- Finished [#1172] @OEOTYAN
- Made mod manager auto release @OEOTYAN
- Used dual mapping replace virtual protect @OEOTYAN
- Relaxed virtual clone requires @OEOTYAN

### Fixed

- Fixed Dispatcher::operator= @OEOTYAN
- Fixed FixedBiomeSource::getBiomeArea @OEOTYAN
- Fixed quickstart docs @ShrBox
- Fixed SubChunk define bugs @OEOTYAN
- Fixed linux self maps reader @OEOTYAN
- Fixed NativeModManager::load wrong error type @OEOTYAN
- Fixed [#1574] @OEOTYAN
- Fixed dll reload @OEOTYAN
- Fixed libhat compile @OEOTYAN
- Fixed custom form empty dropdown crash @Dofes
- Fixed dataitem constexpr @OEOTYAN
- Fixed AllExperiments enum missed @Dofes
- Removed optional_ref wrong static cast @OEOTYAN
- Replaced invoke tag with elide for latest msstl @OEOTYAN

## [0.13.5] - 2024-08-04

### Added

- Completes the member variables of the ItemStackRequestActionTransferBase class

### Changed

- Remove cstring error

### Fixed

- Fix mod dependency [#1559]
- Ensure valid reference return in FeatureRegistry

## [0.13.4] - 2024-07-23

### Added

- Adapted to BDS version 1.21.3 @Lovelylavender4
- Added abi compatibility to mods  @OEOTYAN
- Completes the member variables of ISurfaceBuilder::BuildParameters,BiomeArea,SpikeFeature @Lovelylavender4
- Completes the member variables of ClimateParameters,BiomeDecorationFeature,ScatterParams::CoordinateRange @killcerr

### Changed

- Move levilamina to standard folder @OEOTYAN
- Rename plugin to mod @OEOTYAN
- Refactored nbt @OEOTYAN
- Make the naming of Bounds and GridArea member variables more standardized @Lovelylavender4

### Fixed

- Fixed a bug where optional would not compile under C++20 @OEOTYAN
- Fixed the size of HardcodedSpawnAreaRegistry @Lovelylavender4
- Fixed hash with size_t @OEOTYAN
- Fixed the parent class of MultidimensionalArray @Lovelylavender4

## [0.13.3] - 2024-06-24

### Added

- Adapted to BDS version 1.21.1 @Lovelylavender4

### Changed

- Adjusted the position of UpdateSubChunkBlocksChangedInfo and UpdateSubChunkNetworkBlockInfo. @Lovelylavender4

### Fixed

- Fixed missing include in memory.h @ShrBox
- Fixed UpdateSubChunkBlocksPacket. @Lovelylavender4

## [0.13.2] - 2024-06-23

### Changed

- Remove PatchHelper
- Use libhat search signature
- Update header to 1.21.1.03
- Refactoring list snbt parse

### Fixed

- Fix optional_ref at c++20
- Fix unload
- Fix empty numarray parse [#1552]
- Fix initializer_list invoke

## [0.13.1] - 2024-06-19

### Fixed

- Fix exception while shutting down

## [0.13.0] - 2024-06-19

### Added

- Adapted to BDS version 1.21.0x @Lovelylavender4

### Changed

- Fix Concepts (#1547)
- Add vector helper operators

## [0.12.4] - 2024-05-31

### Changed

- Allow copy SpawnParticleEffectPacket
- Update MaterialType.h (#1529)
- Remove useless check in plugin manager
- Refactoring winapis
- Fill LogArea (#1535)
- Fix Dimension vtable (#1538)

## [0.12.3] - 2024-05-03

### Added

- Add helper function for optional_ref
- Add convertion in Pos2d
- Update header to 1.20.81.

### Changed

- Forward bad_expected_access

### Fixed

- Fix number range of CompoundTag::fromSnbt

## [0.12.2] - 2024-05-01

### Changed

- Remove biome accessor

### Fixed

- Fix fake Intellisense error
- Fix [#1520]
- Fix StructureTemplate

## [0.12.1] - 2024-04-29

### Added

- Add i18n getter

### Changed

- Refactoring resolveSymbol

### Fixed

- Fix serialize_to return value
- Remove constexpr to fix clang-tidy
- Fix plugin dependency

## [0.12.0] - 2024-04-28

### Added

- Adapted to BDS version 1.20.8x @Lovelylavender4

### Changed

- Refactoring Expected
- Refactoring Command system
- Refactoring Plugin system
- Refactoring Closure
- Refactoring Nbt
- Refactoring Reflection

## [0.11.1] - 2024-04-13

### Fixed

- Fix getEnderChestContainer
- Add missing export for ServiceManager::getInstance (#1506)

## [0.11.0] - 2024-04-13

### Added

- Add ll::concepts::is_in_types
- Add ItemLockMode struct
- Add peers structure
- Add event::getId
- Add CompoundTagVariant::emplace
- Rewrite snbt to add error message
- Add param names from 1.16.201

### Changed

- Refactoring HookRegistrar
- A more standard way of naming member variables has been adopted
- Refactoring forEachPos
- Update enum ContainerEnumName (#1503)
- Update enum ContainerType (#1504)
- Refactoring multilistener
- Refactoring TickSyncTaskPool
- Update ActorDataIDs
- Refactoring printDependencyError
- Refactoring bedrock service
- Add static_assert message in serialize associative container
- Refactoring MemoryAllocator
- Remove to_underlying in DataItem

### Fixed

- Fix LoopbackPacketSender member
- Fix the member order of PlayerAuthInputPacket
- Fix RakNetNetworkPeer
- Fix Bedrock::Threading namespace
- Fix PlayerActionType enum
- Fix wrong packet send logic
- Move PlayerInfoEntry to public
- Fix StructureTemplate::create

## [0.10.5] - 2024-04-01

### Fixed

- Fix CustomFormHandler [#1502]

## [0.10.4] - 2024-03-31

### Added

- Complete `DividedPos2d`
- Add memory operator detect
- Add optional to form result and add cancel result

### Changed

- Refactoring Core::Path

### Fixed

- Fix Dimension, BiomeSource, Generator vtable
- Fix uname enum bugs
- Fix allocator bugs
- Fix plugin ptr bugs
- Fix soft enum register
- Fix send packet

## [0.10.2] - 2024-03-28

### Changed

- Make event diagnostic clear

### Fixed

- Fix IConstBlockSource [#1499]

## [0.10.1] - 2024-03-26

### Added

- Add member to GenerateMessageResult

### Fixed

- Fix vec3 bugs

## [0.10.0] - 2024-03-26

### Added

- **Adapted to BDS version `1.20.7x`** @Lovelylavender4

### Changed

- Make NativeClosure safer @OEOTYAN
- Refactored visitIndex @OEOTYAN

### Fixed

- Fixed [#1492] @OEOTYAN

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

[#1172]: https://github.com/LiteLDev/LeviLamina/issues/1172
[#1481]: https://github.com/LiteLDev/LeviLamina/issues/1481
[#1483]: https://github.com/LiteLDev/LeviLamina/issues/1483
[#1492]: https://github.com/LiteLDev/LeviLamina/issues/1492
[#1499]: https://github.com/LiteLDev/LeviLamina/issues/1499
[#1502]: https://github.com/LiteLDev/LeviLamina/issues/1502
[#1519]: https://github.com/LiteLDev/LeviLamina/issues/1519
[#1520]: https://github.com/LiteLDev/LeviLamina/issues/1520
[#1552]: https://github.com/LiteLDev/LeviLamina/issues/1552
[#1559]: https://github.com/LiteLDev/LeviLamina/issues/1559
[#1574]: https://github.com/LiteLDev/LeviLamina/issues/1574
[#1582]: https://github.com/LiteLDev/LeviLamina/issues/1582
[#1610]: https://github.com/LiteLDev/LeviLamina/issues/1610
[#1611]: https://github.com/LiteLDev/LeviLamina/issues/1611

[Released]:
https://github.com/LiteLDev/LeviLamina/compare/v1.0.0...HEAD
[1.0.0]: https://github.com/LiteLDev/LeviLamina/compare/v1.0.0-rc.3...v1.0.0

[Unreleased]:
[1.0.0-rc.3]: https://github.com/LiteLDev/LeviLamina/compare/v1.0.0-rc.2...v1.0.0-rc.3
[1.0.0-rc.2]: https://github.com/LiteLDev/LeviLamina/compare/v1.0.0-rc.1...v1.0.0-rc.2
[1.0.0-rc.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.5...v1.0.0-rc.1
[0.13.5]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.4...v0.13.5
[0.13.4]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.3...v0.13.4
[0.13.3]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.2...v0.13.3
[0.13.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.1...v0.13.2
[0.13.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.13.0...v0.13.1
[0.13.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.12.4...v0.13.0
[0.12.4]: https://github.com/LiteLDev/LeviLamina/compare/v0.12.3...v0.12.4
[0.12.3]: https://github.com/LiteLDev/LeviLamina/compare/v0.12.2...v0.12.3
[0.12.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.12.1...v0.12.2
[0.12.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.12.0...v0.12.1
[0.12.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.11.1...v0.12.0
[0.11.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.11.0...v0.11.1
[0.11.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.10.5...v0.11.0
[0.10.5]: https://github.com/LiteLDev/LeviLamina/compare/v0.10.4...v0.10.5
[0.10.4]: https://github.com/LiteLDev/LeviLamina/compare/v0.10.2...v0.10.4
[0.10.2]: https://github.com/LiteLDev/LeviLamina/compare/v0.10.1...v0.10.2
[0.10.1]: https://github.com/LiteLDev/LeviLamina/compare/v0.10.0...v0.10.1
[0.10.0]: https://github.com/LiteLDev/LeviLamina/compare/v0.9.5...v0.10.0
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
