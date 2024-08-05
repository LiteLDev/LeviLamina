#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/QueueRequestResult.h"
#include "mc/common/wrapper/StructureDeleteResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/levelgen/structure/StructureTemplateResponseType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class StructureManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    StructureManager& operator=(StructureManager const&);
    StructureManager(StructureManager const&);
    StructureManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureManager() = default;

    MCAPI explicit StructureManager(class ResourcePackManager& packManager);

    MCAPI void clearAndShutdownStructurePlacement();

    MCAPI class StructureTemplate& cloneStructure(class StructureTemplate const&, std::string const&);

    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(
        std::string const&               structureName,
        class ResourcePackManager const* packManager,
        class LevelStorage*              levelStorage,
        ::StructureTemplateResponseType  responseType
    );

    MCAPI class StructureTemplateDataResponsePacket
    createStructureDataImportPacket(std::string const& structureName, ::StructureTemplateResponseType responseType);

    MCAPI ::StructureDeleteResult deleteStructure(std::string const& structureName, class LevelStorage& levelStorage);

    MCAPI class StructureTemplate& getOrCreate(std::string const& structureName);

    MCAPI class LegacyStructureTemplate& getOrCreateLegacy(std::string const& structureName);

    MCAPI class StructureTemplate*
    getOrLoadStructure(std::string const&, class ResourcePackManager const*, class LevelStorage*);

    MCAPI class StructureTemplate* getStructure(std::string const& structureName) const;

    MCAPI std::vector<std::string> getStructureNames(class LevelStorage&, bool) const;

    MCAPI void importStructureFromTemplate(std::string name, class StructureTemplate const& temp);

    MCAPI bool load(
        class StructureTemplate&         structureTemplate,
        class ResourcePackManager const* packManager,
        class LevelStorage*              levelStorage
    );

    MCAPI void loadPlacementQueue(class LevelStorage& storage, class Level& level, class Dimension& dimension);

    MCAPI void loadPlacementQueueItem(
        std::string const&       key,
        class CompoundTag const& tag,
        class Level&             level,
        class Dimension&         dimension
    );

    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData> structureAnimationData);

    MCAPI bool readStructure(class StructureTemplate& structureTemplate);

    MCAPI void reset();

    MCAPI void saveToLevel(class StructureTemplate const& structureTemplate, class LevelStorage& levelStorage);

    MCAPI void setUnknownBlockRegistry(class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

    MCAPI void tick(class Dimension const& dimension);

    MCAPI ::QueueRequestResult tryPlaceStructureInWorld(
        std::unique_ptr<class CommandArea>            cmdArea,
        class ServerLevel&                            level,
        class Dimension&                              dimension,
        class BoundingBox const&                      bounds,
        class BlockPos const&                         loadPosition,
        class StructureSettings const&                settings,
        class StructureTemplate const&                structureTemplate,
        std::unique_ptr<class StructureAnimationData> structureAnimationData
    );

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const&);

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getStructurePath(std::string const&, std::string const& structureName);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StructureTemplate* _createAndLoadStructure(
        std::string const&               structureName,
        class ResourcePackManager const* packManager,
        class LevelStorage*              levelStorage
    );

    MCAPI std::string _createLevelStorageId(std::string const& dimensionPrefix, std::string const& saveId);

    MCAPI bool _findResource(
        class Core::PathBuffer<class Core::StackString<char, 1024>> const& structurePath,
        class PackInstance const&                                          pack,
        std::string&                                                       resourceStream
    );

    MCAPI bool _findResource(
        std::string const&,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const& structurePath,
        class Core::PathBuffer<class Core::StackString<char, 1024>> const&,
        class PackInstance const& pack,
        std::string&              resourceStream
    );

    MCAPI bool _placeSegment(class StructureAnimationData& structureAnimationData);

    MCAPI bool
    _placeSegment(class Dimension& dimension, class StructureAnimationData& structureAnimationData, class ChunkLoadActionList&, class BoundingBox const& boundingBox, std::function<::ChunksLoadedStatus(struct Tick)> const&);

    MCAPI class LegacyStructureTemplate* _readLegacyStructure(std::string const& name);

    MCAPI void
    _removePlacementQueueItem(std::string const& dimensionPrefix, class StructureAnimationData& structureAnimationData);

    MCAPI void
    _savePlacementQueueItem(std::string const& dimensionPrefix, class StructureAnimationData& structureAnimationData);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static char const* BEHAVIOR_PACK_STRUCTURES_FOLDER;

    MCAPI static char const* LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;

    // NOLINTEND
};
