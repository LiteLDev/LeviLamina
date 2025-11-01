#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/Loader.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/levelgen/structure/IStructureTemplateManager.h"
#include "mc/world/level/levelgen/structure/StructureDeleteResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class ChunkLoadActionList;
class CommandArea;
class CompoundTag;
class Dimension;
class IUnknownBlockTypeRegistry;
class LegacyStructureTemplate;
class Level;
class LevelStorage;
class PackInstance;
class ResourcePackManager;
class ServerLevel;
class StructureAnimationData;
class StructurePoolElement;
class StructureSettings;
class StructureTemplate;
struct Tick;
namespace Core { class Path; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataFile; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataRegistry; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StructureManager : public ::IStructureTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mRepositoryMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LegacyStructureTemplate>>> mLegacyStructureRepository;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplate>>> mStructureRepository;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureAnimationData>>> mStructurePlacementQueue;
    ::ll::TypedStorage<4, 4, uint> mStructurePlacementSaveCounter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager> const> mPackManager;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>>> mMetadataRegistry;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMetadataRegistryMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureManager() /*override*/;

    // vIndex: 4
    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const& structureName) /*override*/;

    // vIndex: 2
    virtual ::StructureTemplate& getOrCreate(::std::string const& structureName) /*override*/;

    // vIndex: 3
    virtual ::StructureTemplate* getStructure(::std::string const& structureName) const /*override*/;

    // vIndex: 5
    virtual bool readStructure(::StructureTemplate& structureTemplate) /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureManager(::ResourcePackManager& packManager);

    MCAPI ::StructureTemplate* _createAndLoadStructure(::std::string const& structureName, ::ResourcePackManager const* packManager, ::LevelStorage* levelStorage);

    MCAPI ::std::string _createLevelStorageId(::std::string const& dimensionPrefix, ::std::string const& saveId);

    MCAPI bool _findResource(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& structurePath, ::PackInstance const& pack, ::std::string& resourceStream);

    MCAPI bool _findResource(::std::string_view structureNamespace, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& structurePath, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& rootStructurePath, ::PackInstance const& pack, ::std::string& resourceStream);

    MCAPI bool _placeSegment(::StructureAnimationData& structureAnimationData);

    MCAPI bool _placeSegment(::Dimension& dimension, ::StructureAnimationData& structureAnimationData, ::ChunkLoadActionList& chunkLoadActionList, ::BoundingBox const& boundingBox, ::std::function<::ChunksLoadedStatus(::Tick)> const& areChunksLoaded);

    MCAPI ::LegacyStructureTemplate* _readLegacyStructure(::std::string const& name);

    MCAPI void _removePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);

    MCAPI void _savePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);

    MCAPI ::StructureTemplate& cloneStructure(::StructureTemplate const& structureTemplate, ::std::string const& structureName);

    MCAPI ::StructureDeleteResult deleteStructure(::std::string const& structureName, ::LevelStorage& levelStorage);

    MCAPI ::std::vector<::std::string> getStructureNames(::LevelStorage& levelStorage, bool includeUnremovable) const;

    MCAPI void importStructureFromTemplate(::std::string name, ::StructureTemplate const& temp);

    MCAPI bool load(::StructureTemplate& structureTemplate, ::ResourcePackManager const* packManager, ::LevelStorage* levelStorage);

    MCAPI bool loadLegacy(::LegacyStructureTemplate& structure, ::std::string& data);

    MCAPI void loadMetadataRegistries();

    MCAPI void loadPlacementQueue(::LevelStorage& storage, ::Level& level, ::Dimension& dimension);

    MCAPI void loadPlacementQueueItem(::std::string const& key, ::CompoundTag const& tag, ::Level& level, ::Dimension& dimension);

    MCAPI void queueLoad(::std::unique_ptr<::StructureAnimationData> structureAnimationData);

    MCAPI void saveToLevel(::StructureTemplate const& structureTemplate, ::LevelStorage& levelStorage);

    MCAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void tick(::Dimension const& dimension);

    MCAPI ::QueueRequestResult tryPlaceStructureInWorld(::std::unique_ptr<::CommandArea> cmdArea, ::ServerLevel& level, ::Dimension& dimension, ::BoundingBox const& bounds, ::BlockPos const& loadPosition, ::StructureSettings const& settings, ::StructureTemplate const& structureTemplate, ::std::unique_ptr<::StructureAnimationData> structureAnimationData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadataRegistry> _loadMetadataRegistries(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& packManager, bool excludeLatest);

    MCAPI static void _metadataPackForEachCallback(::SharedTypes::v1_21_80::JigsawStructureMetadataRegistry& registry, ::Puv::Loader<::SharedTypes::v1_21_80::JigsawStructureMetadataFile>& loader, ::PackInstance const& pack, ::std::string& fileData, ::Core::Path const& filenameWithExtension);

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> getStructurePath(::std::string_view structureNamespace, ::std::string_view structureName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& BEHAVIOR_PACK_STRUCTURES_FOLDER();

    MCAPI static char const*& LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& packManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::LegacyStructureTemplate& $getOrCreateLegacy(::std::string const& structureName);

    MCAPI ::StructureTemplate& $getOrCreate(::std::string const& structureName);

    MCAPI ::StructureTemplate* $getStructure(::std::string const& structureName) const;

    MCAPI bool $readStructure(::StructureTemplate& structureTemplate);

    MCAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> $getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
