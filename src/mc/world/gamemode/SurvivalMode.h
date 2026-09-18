#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/gamemode/GameMode.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class InteractionResult;
class ItemStack;
class Player;
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
    // prevent constructor by default
    SurvivalMode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool attack(::Actor& entity, ::Vec3 const& hitPosition) /*override*/;

    virtual bool interact(::Actor& entity, ::Vec3 const& location, ::HandSlot const handSlot) /*override*/;

    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;

    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock) /*override*/;

    virtual void startBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot const handSlot) /*override*/;

    virtual bool
    buildBlock(::BlockPos const& pos, uchar face, ::HandSlot const handSlot, bool const isSimTick) /*override*/;

    virtual bool useItem(::ItemStack& item, ::HandSlot const handSlot) /*override*/;

    virtual bool useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot const handSlot) /*override*/;

    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot const  handSlot,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    virtual void tick() /*override*/;

    virtual void setTrialMode(bool isEnabled) /*override*/;

    virtual bool isInTrialMode() /*override*/;

    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SurvivalMode(::Player& player);

    MCAPI void _messagePlayers(::std::string message);

    MCAPI void _showTrialReminder(bool force);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool& mTrialHasEnded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attack(::Actor& entity, ::Vec3 const& hitPosition);

    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location, ::HandSlot const handSlot);

    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot const handSlot);

    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, ::HandSlot const handSlot, bool const isSimTick);

    MCAPI bool $useItem(::ItemStack& item, ::HandSlot const handSlot);

    MCAPI bool $useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot const handSlot);

    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot const  handSlot,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCAPI void $tick();

    MCAPI void $setTrialMode(bool isEnabled);

#ifdef LL_PLAT_S
    MCAPI bool $isInTrialMode();
#else // LL_PLAT_C
    MCFOLD bool $isInTrialMode();
#endif

#ifdef LL_PLAT_S
    MCAPI void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
#else // LL_PLAT_C
    MCFOLD void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
