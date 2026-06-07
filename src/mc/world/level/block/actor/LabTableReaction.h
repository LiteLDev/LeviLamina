#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ItemStack;
class LabTableReactionComponent;
class Random;
// clang-format on

class LabTableReaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                            mLifetime;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxLifetime;
    ::ll::TypedStorage<4, 4, int>                                                            mStartDelay;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStack>>                                 mResultItem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockPos>>                                  mPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Random>>                                    mRandom;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LabTableReactionComponent>>> mComponents;
    ::ll::TypedStorage<1, 1, ::LabTableReactionType>                                         mType;
    ::ll::TypedStorage<1, 1, bool>                                                           mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableReaction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableReaction();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LabTableReaction(
        ::LabTableReactionType type,
        ::BlockPos const&      pos,
        bool                   isClientSide,
        int                    maxLifetime,
        int                    startDelay
    );

    MCAPI void addResultItem(::ItemStack const& resultItem);

    MCFOLD int getReactionId();

    MCFOLD ::LabTableReactionType getType();

    MCAPI bool tick(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::LabTableReaction>
    createReaction(::LabTableReactionType type, ::BlockPos const& pos, bool isClientSide);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::LabTableReactionType type, ::BlockPos const& pos, bool isClientSide, int maxLifetime, int startDelay);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
