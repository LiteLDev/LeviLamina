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
class Material;
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
    // vIndex: 120
    virtual ::Block const& getRenderBlock() const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 122
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 92
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    // vIndex: 48
    virtual bool isValidAuxValue(int value) const /*override*/;

    // vIndex: 0
    virtual ~FaceDirectionalBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FaceDirectionalBlock(
        ::std::string const& nameId,
        int                  id,
        ::Material const&    material,
        bool                 horizontalOnly,
        float                yRotOffset
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uchar getFacingDirection(::Block const& block, bool horizontalOnly);

    MCAPI static uchar getMappedFaceStatic(uchar face, ::Block const& block, bool horizontalOnly);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& nameId, int id, ::Material const& material, bool horizontalOnly, float yRotOffset);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Block const& $getRenderBlock() const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue)
        const;

    MCAPI bool $isValidAuxValue(int value) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
