#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
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
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>               mMetadataRegistryMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureManager() /*override*/ = default;

    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const&) /*override*/;

    virtual ::StructureTemplate& getOrCreate(::std::string const&) /*override*/;

    virtual ::StructureTemplate* getStructure(::std::string const&) const /*override*/;

    virtual bool readStructure(::StructureTemplate&) /*override*/;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureManager(::ResourcePackManager& packManager);

    MCAPI ::StructureTemplate* _createAndLoadStructure(
        ::std::string const&         structureName,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCAPI ::StructureTemplate&
    cloneStructure(::StructureTemplate const& structureTemplate, ::std::string const& structureName);

    MCAPI ::StructureDeleteResult deleteStructure(::std::string const& structureName, ::LevelStorage& levelStorage);

    MCAPI ::std::vector<::std::string> getPackStructureNames(::mce::UUID const& packUUID);

    MCAPI ::std::vector<::std::string> getStructureNames(::LevelStorage& levelStorage, bool includeUnremovable) const;

#ifdef LL_PLAT_C
    MCAPI ::StructureTemplate* importStructure(::std::string const& structureName, ::Core::Path const& filePath);
#endif

    MCAPI void importStructureFromTemplate(::std::string name, ::StructureTemplate const& temp);

    MCAPI bool load(
        ::StructureTemplate&         structureTemplate,
        ::ResourcePackManager const* packManager,
        ::LevelStorage*              levelStorage
    );

    MCAPI void loadMetadataRegistries();

    MCAPI void loadPlacementQueue(::LevelStorage& storage, ::Level& level, ::Dimension& dimension);

    MCAPI void reset();

    MCAPI void saveToLevel(::StructureTemplate const& structureTemplate, ::LevelStorage& levelStorage);

    MCAPI void setUnknownBlockRegistry(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void tick(::Dimension const& dimension);

    MCAPI ::QueueRequestResult tryPlaceStructureInWorld(
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
#ifdef LL_PLAT_C
    MCAPI static bool exportStructure(::StructureTemplate const& structureTemplate, ::Core::Path const& filePath);
#endif

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureFullName);

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getStructurePath(::std::string_view structureNamespace, ::std::string_view structureName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager& packManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
