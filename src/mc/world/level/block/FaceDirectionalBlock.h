#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    // vIndex: 0
    virtual ~FaceDirectionalBlock();

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

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

    MCAPI FaceDirectionalBlock(
        std::string const&    nameId,
        int                   id,
        class Material const& material,
        bool                  horizontalOnly,
        float                 yRotOffset
    );

    MCAPI static ::Flip getFaceFlipStatic(uchar face, class Block const& block, bool horizontalOnly);

    MCAPI static uchar getFacingDirection(class Block const& block, bool horizontalOnly);

    MCAPI static uchar getMappedFaceStatic(uchar face, class Block const& block, bool horizontalOnly);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void*
    ctor$(std::string const& nameId, int id, class Material const& material, bool horizontalOnly, float yRotOffset);

    MCAPI void dtor$();

    MCAPI ::Flip getFaceFlip$(uchar face, class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const& getPlacementBlock$(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    MCAPI class Block const& getRenderBlock$() const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    // NOLINTEND
};
