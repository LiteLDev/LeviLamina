#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/GameMode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class Vec3;
// clang-format on

class SurvivalMode : public ::GameMode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                         mIsTrialMode;
    ::ll::TypedStorage<1, 1, bool>                         mHasDisplayedIntro;
    ::ll::TypedStorage<4, 4, int>                          mTrialEndedReminder;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>> mShowUpsellScreenCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 15
    virtual bool attack(::Actor& entity) /*override*/;

    // vIndex: 14
    virtual bool interact(::Actor& entity, ::Vec3 const& location) /*override*/;

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;

    // vIndex: 1
    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock) /*override*/;

    // vIndex: 5
    virtual void startBuildBlock(::BlockPos const& pos, uchar face) /*override*/;

    // vIndex: 6
    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick) /*override*/;

    // vIndex: 11
    virtual bool useItem(::ItemStack& item) /*override*/;

    // vIndex: 12
    virtual bool useItemAsAttack(::ItemStack& item) /*override*/;

    // vIndex: 13
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    // vIndex: 9
    virtual void tick() /*override*/;

    // vIndex: 17
    virtual void setTrialMode(bool isEnabled) /*override*/;

    // vIndex: 18
    virtual bool isInTrialMode() /*override*/;

    // vIndex: 19
    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback) /*override*/;

    // vIndex: 0
    virtual ~SurvivalMode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _messagePlayers(::std::string message);

    MCAPI void _showTrialReminder(bool force);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mTrialHasEnded();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attack(::Actor& entity);

    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location);

    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);

    MCAPI bool $useItem(::ItemStack& item);

    MCAPI bool $useItemAsAttack(::ItemStack& item);

    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCAPI void $tick();

    MCAPI void $setTrialMode(bool isEnabled);

    MCAPI bool $isInTrialMode();

    MCAPI void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
