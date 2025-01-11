#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"
#include "mc/world/level/block/TrapDoorBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CopperBehavior;
class HashedString;
class Player;
class Random;
// clang-format on

class CopperTrapDoorBlock : public ::TrapDoorBlock {
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

    // vIndex: 137
    virtual void randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 18
    virtual void onLightningHit(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 0
    virtual ~CopperTrapDoorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperTrapDoorBlock(
        ::std::string const&  nameId,
        int                   id,
        ::CopperType          copperType,
        ::HashedString const& previousVariant
    );

    MCAPI CopperTrapDoorBlock(
        ::std::string const&  nameId,
        int                   id,
        ::CopperType          copperType,
        ::HashedString const& previousVariant,
        ::HashedString const& nextAgeVariant,
        ::HashedString const& waxedVariant
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& nameId, int id, ::CopperType copperType, ::HashedString const& previousVariant);

    MCAPI void* $ctor(
        ::std::string const&  nameId,
        int                   id,
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
    MCFOLD ::CopperBehavior const* $tryGetCopperBehavior() const;

    MCFOLD void $randomTick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCFOLD void $onLightningHit(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
