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
class Vec3;
// clang-format on

namespace gametest::StructureUtils {
// functions
// NOLINTBEGIN
MCNAPI void AddCommandBlockAndButtonToStartTest(
    ::BlockPos const& structureBlockPos,
    ::Rotation,
    ::BlockPos const&    commandBlockPosRelativeToTestPos,
    ::std::string const& testName,
    ::BlockSource&       region
);

MCNAPI void ClearSpaceForStructure(::BoundingBox const& structureBoundingBox, int structureYPos, ::BlockSource& region);

MCNAPI void CreateNewEmptyStructureBlock(
    ::std::string const& testName,
    ::BlockPos const&    structurePos,
    ::BlockPos const&    size,
    ::Rotation           rotation,
    ::BlockSource&       region
);

MCNAPI ::std::optional<::BlockPos>
FindStructureBlockContainingPos(::BlockPos const& pos, int searchRadius, ::BlockSource& region);

MCNAPI ::std::vector<::BlockPos>
FindStructureBlocks(::BlockPos const& centerPos, int searchRadius, ::BlockSource& region);

MCNAPI ::BoundingBox GetStructureBoundingBox(::StructureBlockActor const& structureBlockActor);

MCNAPI ::StructureEditorData GetStructureEditorData(::StructureTemplate const& structure, ::Rotation const& rotation);

MCNAPI ::Vec3
GetStructureRelativePos(::BlockPos const& structureBlockPos, ::Vec3 const& worldPos, ::Vec3 pivot, ::Rotation rotation);

MCNAPI ::StructureTemplate* GetStructureTemplate(::std::string const& structureName, ::Level& level);

MCNAPI ::StructureBlockActor* SpawnStructure(
    ::std::string const& structureName,
    ::BlockPos const&    northWestCorner,
    ::Rotation           rotation,
    int,
    ::BlockSource& region
);
// NOLINTEND

} // namespace gametest::StructureUtils
