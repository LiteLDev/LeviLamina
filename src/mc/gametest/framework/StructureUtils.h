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
MCAPI void
AddCommandBlockAndButtonToStartTest(::BlockPos const& structureBlockPos, ::Rotation commandBlockPosRelativeToTestPos, ::BlockPos const& testName, ::std::string const& region, ::BlockSource&);

MCAPI void ClearSpaceForStructure(::BoundingBox const& structureBoundingBox, int structureYPos, ::BlockSource& region);

MCAPI void CreateNewEmptyStructureBlock(
    ::std::string const& testName,
    ::BlockPos const&    structurePos,
    ::BlockPos const&    size,
    ::Rotation           region,
    ::BlockSource&       rotation
);

MCAPI ::std::optional<::BlockPos>
FindStructureBlockContainingPos(::BlockPos const& pos, int searchRadius, ::BlockSource& region);

MCAPI ::std::vector<::BlockPos>
FindStructureBlocks(::BlockPos const& centerPos, int searchRadius, ::BlockSource& region);

MCAPI ::BoundingBox GetStructureBoundingBox(::StructureBlockActor const& structureBlockActor);

MCAPI ::StructureEditorData GetStructureEditorData(::StructureTemplate const& structure, ::Rotation const& rotation);

MCAPI ::StructureTemplate* GetStructureTemplate(::std::string const& structureName, ::Level& level);

MCAPI ::StructureBlockActor*
SpawnStructure(::std::string const& structureName, ::BlockPos const& northWestCorner, ::Rotation rotation, int region, ::BlockSource&);
// NOLINTEND

} // namespace gametest::StructureUtils
