#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class HashedString;
class IConstBlockSource;
class Material;
// clang-format on

class CopperGrateBlock : public ::CopperBlock {
public:
    // prevent constructor by default
    CopperGrateBlock& operator=(CopperGrateBlock const&);
    CopperGrateBlock(CopperGrateBlock const&);
    CopperGrateBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual bool getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const /*override*/;

    // vIndex: 0
    virtual ~CopperGrateBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperGrateBlock(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant
    );

    MCAPI CopperGrateBlock(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant
    );

    MCAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getCollisionShapeForCamera(
        ::AABB&                    outAABB,
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
