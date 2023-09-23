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
MCAPI void
AddCommandBlockAndButtonToStartTest(class BlockPos const&, ::Rotation, class BlockPos const&, std::string const&, class BlockSource&);

// symbol: ?ClearSpaceForStructure@StructureUtils@gametest@@YAXAEBVBoundingBox@@HAEAVBlockSource@@@Z
MCAPI void ClearSpaceForStructure(class BoundingBox const&, int, class BlockSource&);

// symbol:
// ?CreateNewEmptyStructureBlock@StructureUtils@gametest@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@1W4Rotation@@AEAVBlockSource@@@Z
MCAPI void
CreateNewEmptyStructureBlock(std::string const&, class BlockPos const&, class BlockPos const&, ::Rotation, class BlockSource&);

// symbol:
// ?FindNearestStructureBlock@StructureUtils@gametest@@YAPEAVStructureBlockActor@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI class StructureBlockActor* FindNearestStructureBlock(class BlockPos const&, int, class BlockSource&);

// symbol:
// ?FindStructureBlockContainingPos@StructureUtils@gametest@@YA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI std::optional<class BlockPos> FindStructureBlockContainingPos(class BlockPos const&, int, class BlockSource&);

// symbol:
// ?FindStructureBlocks@StructureUtils@gametest@@YA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@HAEAVBlockSource@@@Z
MCAPI std::vector<class BlockPos> FindStructureBlocks(class BlockPos const&, int, class BlockSource&);

// symbol: ?GetRotationForRotationSteps@StructureUtils@gametest@@YA?AW4Rotation@@H@Z
MCAPI ::Rotation GetRotationForRotationSteps(int);

// symbol: ?GetStructureBoundingBox@StructureUtils@gametest@@YA?AVBoundingBox@@AEBVStructureBlockActor@@@Z
MCAPI class BoundingBox GetStructureBoundingBox(class StructureBlockActor const&);

// symbol: ?GetStructureBounds@StructureUtils@gametest@@YA?AVAABB@@AEBVStructureBlockActor@@@Z
MCAPI class AABB GetStructureBounds(class StructureBlockActor const&);

// symbol:
// ?GetStructureEditorData@StructureUtils@gametest@@YA?AVStructureEditorData@@AEBVStructureTemplate@@AEBW4Rotation@@@Z
MCAPI class StructureEditorData GetStructureEditorData(class StructureTemplate const&, ::Rotation const&);

// symbol: ?GetStructureRelativePos@StructureUtils@gametest@@YA?AVBlockPos@@AEBVStructureBlockActor@@AEBV3@@Z
MCAPI class BlockPos GetStructureRelativePos(class StructureBlockActor const&, class BlockPos const&);

// symbol:
// ?GetStructureTemplate@StructureUtils@gametest@@YAPEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevel@@@Z
MCAPI class StructureTemplate* GetStructureTemplate(std::string const&, class Level&);

// symbol:
// ?SpawnStructure@StructureUtils@gametest@@YAPEAVStructureBlockActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@W4Rotation@@HAEAVBlockSource@@@Z
MCAPI class StructureBlockActor*
SpawnStructure(std::string const&, class BlockPos const&, ::Rotation, int, class BlockSource&);

// symbol: ?transform@StructureUtils@gametest@@YA?AVVec3@@AEBV3@W4Mirror@@W4Rotation@@0@Z
MCAPI class Vec3 transform(class Vec3 const&, ::Mirror, ::Rotation, class Vec3 const&);
// NOLINTEND

}; // namespace gametest::StructureUtils
