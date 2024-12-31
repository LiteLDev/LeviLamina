#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"
#include "mc/world/level/block/SlabBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CopperBehavior;
class HashedString;
class Player;
class Random;
// clang-format on

class CutCopperSlab : public ::SlabBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk2514c5;
    // NOLINTEND

public:
    // prevent constructor by default
    CutCopperSlab& operator=(CutCopperSlab const&);
    CutCopperSlab(CutCopperSlab const&);
    CutCopperSlab();

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
    virtual ~CutCopperSlab() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CutCopperSlab(
        ::std::string const&  nameId,
        int                   id,
        bool                  fullSize,
        ::HashedString const& otherSlab,
        ::CopperType          copperType,
        ::HashedString const& previousVariant
    );

    MCAPI CutCopperSlab(
        ::std::string const&  nameId,
        int                   id,
        bool                  fullSize,
        ::HashedString const& otherSlab,
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
        bool                  fullSize,
        ::HashedString const& otherSlab,
        ::CopperType          copperType,
        ::HashedString const& previousVariant
    );

    MCAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
        bool                  fullSize,
        ::HashedString const& otherSlab,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
