#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class BlockSource;
class BoundingBox;
class Level;
class StructureBlockActor;
class StructureEditorData;
class StructureTemplate;
class Vec3;
// clang-format on

namespace gametest::StructureUtils {
// NOLINTBEGIN
MCAPI void AddCommandBlockAndButtonToStartTest(
    class BlockPos const& structureBlockPos,
    ::Rotation,
    class BlockPos const& commandBlockPosRelativeToTestPos,
    std::string const&    testName,
    class BlockSource&    region
);

MCAPI void
ClearSpaceForStructure(class BoundingBox const& structureBoundingBox, int structureYPos, class BlockSource& region);

MCAPI void CreateNewEmptyStructureBlock(
    std::string const&    testName,
    class BlockPos const& structurePos,
    class BlockPos const& size,
    ::Rotation            rotation,
    class BlockSource&    region
);

MCAPI class StructureBlockActor*
FindNearestStructureBlock(class BlockPos const& origin, int searchRadius, class BlockSource& region);

MCAPI std::optional<class BlockPos>
      FindStructureBlockContainingPos(class BlockPos const& pos, int searchRadius, class BlockSource& region);

MCAPI std::vector<class BlockPos>
      FindStructureBlocks(class BlockPos const& centerPos, int searchRadius, class BlockSource& region);

MCAPI ::Rotation GetRotationForRotationSteps(int rotationSteps);

MCAPI class BoundingBox GetStructureBoundingBox(class StructureBlockActor const& structureBlockActor);

MCAPI class AABB GetStructureBounds(class StructureBlockActor const& structureBlockActor);

MCAPI class StructureEditorData
GetStructureEditorData(class StructureTemplate const& structure, ::Rotation const& rotation);

MCAPI class BlockPos
GetStructureRelativePos(class StructureBlockActor const& structureBlockActor, class BlockPos const& pos);

MCAPI class StructureTemplate* GetStructureTemplate(std::string const& structureName, class Level& level);

MCAPI class StructureBlockActor* SpawnStructure(
    std::string const&    structureName,
    class BlockPos const& northWestCorner,
    ::Rotation            rotation,
    int,
    class BlockSource& region
);

MCAPI class Vec3 transform(class Vec3 const& position, ::Mirror mirror, ::Rotation rotation, class Vec3 const& pivot);
// NOLINTEND

}; // namespace gametest::StructureUtils
