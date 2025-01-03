#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CopperBehavior;
class HashedString;
class Material;
class Player;
class Random;
// clang-format on

class CopperBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::CopperBehavior> mCopperBehavior;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::CopperBehavior const* tryGetCopperBehavior() const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 18
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~CopperBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperBlock(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        bool                  hasTransparency
    );

    MCAPI CopperBlock(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant,
        bool                  hasTransparency
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
        ::HashedString const& previousVariant,
        bool                  hasTransparency
    );

    MCAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
        ::Material const&     material,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant,
        bool                  hasTransparency
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
    MCAPI ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
