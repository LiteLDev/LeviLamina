#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FaceDirectionalBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FaceDirectionalBlock& operator=(FaceDirectionalBlock const&);
    FaceDirectionalBlock(FaceDirectionalBlock const&);
    FaceDirectionalBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FaceDirectionalBlock@@UEAA@XZ
    virtual ~FaceDirectionalBlock();

    // vIndex: 49, symbol: ?isValidAuxValue@FaceDirectionalBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 97, symbol:
    // ?getPlacementBlock@FaceDirectionalBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 130, symbol: ?getRenderBlock@FaceDirectionalBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@FaceDirectionalBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@FaceDirectionalBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // symbol:
    // ??0FaceDirectionalBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_NM@Z
    MCAPI FaceDirectionalBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  horizontalOnly,
        float                 yRotOffset
    );

    // symbol: ?getFaceFlipStatic@FaceDirectionalBlock@@SA?AW4Flip@@EAEBVBlock@@_N@Z
    MCAPI static ::Flip getFaceFlipStatic(uchar face, class Block const& block, bool horizontalOnly);

    // symbol: ?getFacingDirection@FaceDirectionalBlock@@SAEAEBVBlock@@_N@Z
    MCAPI static uchar getFacingDirection(class Block const& block, bool horizontalOnly);

    // symbol: ?getMappedFaceStatic@FaceDirectionalBlock@@SAEEAEBVBlock@@_N@Z
    MCAPI static uchar getMappedFaceStatic(uchar face, class Block const& block, bool horizontalOnly);

    // NOLINTEND
};
