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
MCNAPI void AddCommandBlockAndButtonToStartTest(
    ::BlockPos const&    structureBlockPos,
    ::Rotation           commandBlockPosRelativeToTestPos,
    ::BlockPos const&    testName,
    ::std::string const& region,
    ::BlockSource&
);

MCNAPI void ClearSpaceForStructure(::BoundingBox const& structureBoundingBox, int structureYPos, ::BlockSource& region);

MCNAPI void CreateNewEmptyStructureBlock(
    ::std::string const& testName,
    ::BlockPos const&    structurePos,
    ::BlockPos const&    size,
    ::Rotation           region,
    ::BlockSource&       rotation
);

MCNAPI ::std::optional<::BlockPos>
FindStructureBlockContainingPos(::BlockPos const& pos, int searchRadius, ::BlockSource& region);

MCNAPI ::std::vector<::BlockPos>
FindStructureBlocks(::BlockPos const& centerPos, int searchRadius, ::BlockSource& region);

MCNAPI ::BoundingBox GetStructureBoundingBox(::StructureBlockActor const& structureBlockActor);

MCNAPI ::StructureEditorData GetStructureEditorData(::StructureTemplate const& structure, ::Rotation const& rotation);

MCNAPI ::StructureTemplate* GetStructureTemplate(::std::string const& structureName, ::Level& level);

MCNAPI ::StructureBlockActor* SpawnStructure(
    ::std::string const& structureName,
    ::BlockPos const&    northWestCorner,
    ::Rotation           rotation,
    int                  region,
    ::BlockSource&
);
// NOLINTEND

} // namespace gametest::StructureUtils
