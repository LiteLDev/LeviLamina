#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Material;
class Vec3;
// clang-format on

class FaceDirectionalBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mHorizontalOnly;
    ::ll::TypedStorage<4, 4, float> mYRotOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    FaceDirectionalBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const& getRenderBlock() const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getRenderBlock() const;

    MCFOLD uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCFOLD ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCFOLD ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI bool $isValidAuxValue(int auxValue) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
