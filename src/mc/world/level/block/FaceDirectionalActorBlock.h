#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FaceDirectionalActorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    FaceDirectionalActorBlock& operator=(FaceDirectionalActorBlock const&);
    FaceDirectionalActorBlock(FaceDirectionalActorBlock const&);
    FaceDirectionalActorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FaceDirectionalActorBlock@@UEAA@XZ
    virtual ~FaceDirectionalActorBlock();

    // vIndex: 97, symbol:
    // ?getPlacementBlock@FaceDirectionalActorBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 130, symbol: ?getRenderBlock@FaceDirectionalActorBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@FaceDirectionalActorBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@FaceDirectionalActorBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // symbol:
    // ??0FaceDirectionalActorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_NM@Z
    MCAPI FaceDirectionalActorBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  horizontalOnly,
        float                 yRotOffset
    );

    // NOLINTEND
};
