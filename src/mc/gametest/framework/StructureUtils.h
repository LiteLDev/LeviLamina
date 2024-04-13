#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

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
// symbol:
// ?AddCommandBlockAndButtonToStartTest@StructureUtils@gametest@@YAXAEBVBlockPos@@W4Rotation@@0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
MCAPI void AddCommandBlockAndButtonToStartTest(
    class BlockPos const&,
    ::Rotation,
    class BlockPos const&,
    std::string const&,
    class BlockSource& region
);

// symbol: ?ClearSpaceForStructure@StructureUtils@gametest@@YAXAEBVBoundingBox@@HAEAVBlockSource@@@Z
MCAPI void ClearSpaceForStructure(class BoundingBox const&, int, class BlockSource& region);

// symbol:
// ?CreateNewEmptyStructureBlock@StructureUtils@gametest@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@1W4Rotation@@AEAVBlockSource@@@Z
MCAPI void CreateNewEmptyStructureBlock(
    std::string const&,
    class BlockPos const& structurePos,
    class BlockPos const& size,
    ::Rotation            rotation,
    class BlockSource&    region
);

// symbol:
// ?FindNearestStructureBlock@StructureUtils@gametest@@YAPEAVStructureBlockActor@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI class StructureBlockActor*
FindNearestStructureBlock(class BlockPos const& origin, int searchRadius, class BlockSource& region);

// symbol:
// ?FindStructureBlockContainingPos@StructureUtils@gametest@@YA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI std::optional<class BlockPos>
      FindStructureBlockContainingPos(class BlockPos const& pos, int searchRadius, class BlockSource& region);

// symbol:
// ?FindStructureBlocks@StructureUtils@gametest@@YA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI std::vector<class BlockPos>
      FindStructureBlocks(class BlockPos const& centerPos, int searchRadius, class BlockSource& region);

// symbol: ?GetRotationForRotationSteps@StructureUtils@gametest@@YA?AW4Rotation@@H@Z
MCAPI ::Rotation GetRotationForRotationSteps(int);

// symbol: ?GetStructureBoundingBox@StructureUtils@gametest@@YA?AVBoundingBox@@AEBVStructureBlockActor@@@Z
MCAPI class BoundingBox GetStructureBoundingBox(class StructureBlockActor const& structureBlockActor);

// symbol: ?GetStructureBounds@StructureUtils@gametest@@YA?AVAABB@@AEBVStructureBlockActor@@@Z
MCAPI class AABB GetStructureBounds(class StructureBlockActor const& structureBlockActor);

// symbol:
// ?GetStructureEditorData@StructureUtils@gametest@@YA?AVStructureEditorData@@AEBVStructureTemplate@@AEBW4Rotation@@@Z
MCAPI class StructureEditorData
GetStructureEditorData(class StructureTemplate const& structure, ::Rotation const& rotation);

// symbol: ?GetStructureRelativePos@StructureUtils@gametest@@YA?AVBlockPos@@AEBVStructureBlockActor@@AEBV3@@Z
MCAPI class BlockPos
GetStructureRelativePos(class StructureBlockActor const& structureBlockActor, class BlockPos const& pos);

// symbol:
// ?GetStructureTemplate@StructureUtils@gametest@@YAPEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevel@@@Z
MCAPI class StructureTemplate* GetStructureTemplate(std::string const& structureName, class Level& level);

// symbol:
// ?SpawnStructure@StructureUtils@gametest@@YAPEAVStructureBlockActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@HAEAVBlockSource@@@Z
MCAPI class StructureBlockActor* SpawnStructure(
    std::string const& structureName,
    class BlockPos const&,
    ::Rotation rotation,
    int,
    class BlockSource& region
);

// symbol: ?transform@StructureUtils@gametest@@YA?AVVec3@@AEBV3@W4Mirror@@W4Rotation@@0@Z
MCAPI class Vec3 transform(class Vec3 const& position, ::Mirror mirror, ::Rotation rotation, class Vec3 const& pivot);
// NOLINTEND

}; // namespace gametest::StructureUtils
