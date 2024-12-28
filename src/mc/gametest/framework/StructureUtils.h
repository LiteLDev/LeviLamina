#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class Level;
class StructureBlockActor;
class StructureEditorData;
class StructureTemplate;
// clang-format on

namespace gametest::StructureUtils {
// functions
// NOLINTBEGIN
MCAPI void AddCommandBlockAndButtonToStartTest(
    ::BlockPos const& structureBlockPos,
    ::Rotation,
    ::BlockPos const&    commandBlockPosRelativeToTestPos,
    ::std::string const& testName,
    ::BlockSource&       region
);

MCAPI void ClearSpaceForStructure(::BoundingBox const& structureBoundingBox, int structureYPos, ::BlockSource& region);

MCAPI void CreateNewEmptyStructureBlock(
    ::std::string const& testName,
    ::BlockPos const&    structurePos,
    ::BlockPos const&    size,
    ::Rotation           rotation,
    ::BlockSource&       region
);

MCAPI ::StructureBlockActor*
FindNearestStructureBlock(::BlockPos const& origin, int searchRadius, ::BlockSource& region);

MCAPI ::std::optional<::BlockPos>
FindStructureBlockContainingPos(::BlockPos const& pos, int searchRadius, ::BlockSource& region);

MCAPI ::std::vector<::BlockPos>
FindStructureBlocks(::BlockPos const& centerPos, int searchRadius, ::BlockSource& region);

MCAPI ::Rotation GetRotationForRotationSteps(int rotationSteps);

MCAPI ::BoundingBox GetStructureBoundingBox(::StructureBlockActor const& structureBlockActor);

MCAPI ::StructureEditorData GetStructureEditorData(::StructureTemplate const& structure, ::Rotation const& rotation);

MCAPI ::BlockPos GetStructureRelativePos(::StructureBlockActor const& structureBlockActor, ::BlockPos const& worldPos);

MCAPI ::StructureTemplate* GetStructureTemplate(::std::string const& structureName, ::Level& level);

MCAPI ::StructureBlockActor* SpawnStructure(
    ::std::string const& structureName,
    ::BlockPos const&    northWestCorner,
    ::Rotation           rotation,
    int,
    ::BlockSource& region
);
// NOLINTEND

} // namespace gametest::StructureUtils
