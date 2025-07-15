#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Vec3;
// clang-format on

class FaceDirectionalBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mHorizontalOnly;
    ::ll::TypedStorage<4, 4, float> mYRotOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 119
    virtual ::Block const& getRenderBlock() const /*override*/;

    // vIndex: 120
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 121
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 91
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 47
    virtual bool isValidAuxValue(int value) const /*override*/;

    // vIndex: 0
    virtual ~FaceDirectionalBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getRenderBlock() const;

    MCFOLD uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCFOLD ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI bool $isValidAuxValue(int value) const;
    // NOLINTEND
};
