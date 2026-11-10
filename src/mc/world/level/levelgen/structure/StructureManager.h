#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/chunk/QueueRequestResult.h"
#include "mc/world/level/levelgen/structure/IStructureTemplateManager.h"
#include "mc/world/level/levelgen/structure/StructureDeleteResult.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CommandArea;
class Dimension;
class IUnknownBlockTypeRegistry;
class LegacyStructureTemplate;
class Level;
class LevelStorage;
class ResourcePackManager;
class ServerLevel;
class StructureAnimationData;
class StructurePoolElement;
class StructureSettings;
class StructureTemplate;
namespace Core { class Path; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class StructureManager : public ::IStructureTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mRepositoryMutex;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LegacyStructureTemplate>>>
        mLegacyStructureRepository;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplate>>>
                                                                                          mStructureRepository;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructureAnimationData>>> mStructurePlacementQueue;
    ::ll::TypedStorage<4, 4, uint>                                                     mStructurePlacementSaveCounter;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager> const> mPackManager;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<uint64, ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>>>
                                                                         mMetadataRegistry;
    ::ll::TypedStorage<8, 80, ::std::mutex>                              mMetadataRegistryMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureManager() /*override*/ = default;

    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const& structureName) /*override*/;

    virtual ::StructureTemplate& getOrCreate(::std::string const& structureName) /*override*/;

    virtual ::StructureTemplate* getStructure(::std::string const& structureName) const /*override*/;

    virtual bool readStructure(::StructureTemplate& structureTemplate) /*override*/;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StructureManager(::ResourcePackManager& packManager);

    MCNAPI ::StructureTemplate* _createAndLoadStructure(
        ::std::string const&         structureName,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCNAPI ::std::string _createLevelStorageId(::std::string const& dimensionPrefix, ::std::string const& saveId);

#ifdef LL_PLAT_C
    MCNAPI ::LegacyStructureTemplate* _readLegacyStructure(::std::string const& name);
#endif

    MCNAPI ::StructureTemplate&
    cloneStructure(::StructureTemplate const& structureTemplate, ::std::string const& structureName);

    MCAPI ::StructureDeleteResult deleteStructure(::std::string const& structureName, ::LevelStorage& levelStorage);

    MCNAPI ::std::vector<::std::string> getPackStructureNames(::mce::UUID const& packUUID);

    MCAPI ::std::vector<::std::string> getStructureNames(::LevelStorage& levelStorage, bool includeUnremovable) const;

#ifdef LL_PLAT_C
    MCNAPI ::StructureTemplate* importStructure(::std::string const& structureName, ::Core::Path const& filePath);
#endif

    MCNAPI void importStructureFromTemplate(::std::string name, ::StructureTemplate const& temp);

    MCAPI bool load(
        ::StructureTemplate&         structureTemplate,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCNAPI void loadMetadataRegistries();

    MCNAPI void loadPlacementQueue(::LevelStorage& storage, ::Level& level, ::Dimension& dimension);

    MCNAPI void reset();

    MCAPI void saveToLevel(::StructureTemplate const& structureTemplate, ::LevelStorage& levelStorage);

    MCNAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCNAPI void tick(::Dimension const& dimension);

    MCNAPI ::QueueRequestResult tryPlaceStructureInWorld(
        ::std::unique_ptr<::CommandArea>            cmdArea,
        ::ServerLevel&                              level,
        ::Dimension&                                dimension,
        ::BoundingBox const&                        bounds,
        ::BlockPos const&                           loadPosition,
        ::StructureSettings const&                  settings,
        ::StructureTemplate const&                  structureTemplate,
        ::std::unique_ptr<::StructureAnimationData> structureAnimationData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _removePlacementQueueItem(::std::string const& dimensionPrefix, ::StructureAnimationData& structureAnimationData);

#ifdef LL_PLAT_C
    MCAPI static bool exportStructure(::StructureTemplate const& structureTemplate, ::Core::Path const& filePath);
#endif

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureFullName);

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureNamespace, ::std::string_view structureName);

#ifdef LL_PLAT_S
    MCNAPI static bool loadLegacy(::LegacyStructureTemplate& structure, ::std::string& data);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager& packManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::LegacyStructureTemplate& $getOrCreateLegacy(::std::string const& structureName);

    MCAPI ::StructureTemplate& $getOrCreate(::std::string const& structureName);

    MCNAPI ::StructureTemplate* $getStructure(::std::string const& structureName) const;

    MCNAPI bool $readStructure(::StructureTemplate& structureTemplate);

    MCNAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    $getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement);


    // NOLINTEND
};
