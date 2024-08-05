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
    // vIndex: 0
    virtual ~FaceDirectionalActorBlock();

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    MCAPI FaceDirectionalActorBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  horizontalOnly,
        float                 yRotOffset
    );

    // NOLINTEND
};
