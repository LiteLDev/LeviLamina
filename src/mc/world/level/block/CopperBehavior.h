#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class Player;
// clang-format on

class CopperBehavior {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk58ddb7;
    ::ll::UntypedStorage<8, 8>  mUnk223dcd;
    ::ll::UntypedStorage<8, 8>  mUnk99f4b1;
    ::ll::UntypedStorage<8, 8>  mUnk2c966e;
    ::ll::UntypedStorage<8, 64> mUnkc24b35;
    // NOLINTEND

public:
    // prevent constructor by default
    CopperBehavior& operator=(CopperBehavior const&);
    CopperBehavior(CopperBehavior const&);
    CopperBehavior();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CopperBehavior(
        ::CopperType                                                                  copperType,
        ::HashedString const&                                                         unwaxedOrPreviousAgeVariant,
        ::std::function<::Block const&(::HashedString const&, ::Block const&)> const& copyStateFunc
    );

    MCAPI CopperBehavior(
        ::CopperType                                                                  copperType,
        ::HashedString const&                                                         previousAgeVariant,
        ::HashedString const&                                                         nextAgeVariant,
        ::HashedString const&                                                         waxedVariant,
        ::std::function<::Block const&(::HashedString const&, ::Block const&)> const& copyStateFunc
    );

    MCAPI bool canDecrementAge() const;

    MCAPI ::Block const& getCorrespondingWaxedBlock(::Block const& block) const;

    MCAPI bool isWaxable() const;

    MCAPI bool isWaxed() const;

    MCAPI bool tryDecrementAge(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool tryIncrementAge(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        float             generatedDailyChance,
        float             generatedOxidizeChance
    ) const;

    MCAPI bool use(::Player& player, ::BlockPos const& pos, uchar) const;

    MCAPI ~CopperBehavior();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CopperType                                                                  copperType,
        ::HashedString const&                                                         unwaxedOrPreviousAgeVariant,
        ::std::function<::Block const&(::HashedString const&, ::Block const&)> const& copyStateFunc
    );

    MCAPI void* $ctor(
        ::CopperType                                                                  copperType,
        ::HashedString const&                                                         previousAgeVariant,
        ::HashedString const&                                                         nextAgeVariant,
        ::HashedString const&                                                         waxedVariant,
        ::std::function<::Block const&(::HashedString const&, ::Block const&)> const& copyStateFunc
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
