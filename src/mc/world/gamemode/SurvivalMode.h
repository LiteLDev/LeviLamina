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
    ::ll::UntypedStorage<1, 1>  mUnke69c28;
    ::ll::UntypedStorage<1, 1>  mUnk3d88ec;
    ::ll::UntypedStorage<4, 4>  mUnk812b7b;
    ::ll::UntypedStorage<8, 64> mUnk7f623c;
    // NOLINTEND

public:
    // prevent constructor by default
    SurvivalMode& operator=(SurvivalMode const&);
    SurvivalMode(SurvivalMode const&);
    SurvivalMode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool attack(::Actor& entity) /*override*/;

    virtual bool interact(::Actor& entity, ::Vec3 const& location) /*override*/;

    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;

    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock) /*override*/;

    virtual void startBuildBlock(::BlockPos const& pos, uchar face) /*override*/;

    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick) /*override*/;

    virtual bool useItem(::ItemStack& item) /*override*/;

    virtual bool useItemAsAttack(::ItemStack& item) /*override*/;

    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    ) /*override*/;

    virtual void tick() /*override*/;

    virtual void setTrialMode(bool isEnabled) /*override*/;

    virtual bool isInTrialMode() /*override*/;

    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback) /*override*/;

    virtual ~SurvivalMode() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _messagePlayers(::std::string message);

    MCNAPI void _showTrialReminder(bool force);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& mTrialHasEnded();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $attack(::Actor& entity);

    MCNAPI bool $interact(::Actor& entity, ::Vec3 const& location);

    MCNAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCNAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCNAPI void $startBuildBlock(::BlockPos const& pos, uchar face);

    MCNAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);

    MCNAPI bool $useItem(::ItemStack& item);

    MCNAPI bool $useItemAsAttack(::ItemStack& item);

    MCNAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCNAPI void $tick();

    MCNAPI void $setTrialMode(bool isEnabled);

    MCNAPI bool $isInTrialMode();

    MCNAPI void $registerUpsellScreenCallback(::std::function<void(bool)> callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
