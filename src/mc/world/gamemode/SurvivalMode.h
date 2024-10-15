#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/world/gamemode/GameMode.h"

class SurvivalMode : public ::GameMode {
public:
    // prevent constructor by default
    SurvivalMode& operator=(SurvivalMode const&);
    SurvivalMode(SurvivalMode const&);
    SurvivalMode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurvivalMode() = default;

    // vIndex: 1
    virtual bool startDestroyBlock(class BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    // vIndex: 2
    virtual bool destroyBlock(class BlockPos const& pos, uchar face);

    // vIndex: 5
    virtual void startBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 6
    virtual bool buildBlock(class BlockPos const& pos, uchar face, bool isSimTick);

    // vIndex: 9
    virtual void tick();

    // vIndex: 11
    virtual bool useItem(class ItemStack& item);

    // vIndex: 12
    virtual class InteractionResult useItemOn(
        class ItemStack&      item,
        class BlockPos const& at,
        uchar                 face,
        class Vec3 const&     hit,
        class Block const*    targetBlock
    );

    // vIndex: 13
    virtual bool interact(class Actor& entity, class Vec3 const& location);

    // vIndex: 14
    virtual bool attack(class Actor& entity);

    // vIndex: 16
    virtual void setTrialMode(bool isEnabled);

    // vIndex: 17
    virtual bool isInTrialMode();

    // vIndex: 18
    virtual void registerUpsellScreenCallback(std::function<void(bool)> callback);

    MCAPI explicit SurvivalMode(class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _messagePlayers(std::string message);

    MCAPI void _showTrialReminder(bool force);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Player& player);

    MCAPI bool attack$(class Actor& entity);

    MCAPI bool buildBlock$(class BlockPos const& pos, uchar face, bool isSimTick);

    MCAPI bool destroyBlock$(class BlockPos const& pos, uchar face);

    MCAPI bool interact$(class Actor& entity, class Vec3 const& location);

    MCAPI bool isInTrialMode$();

    MCAPI void registerUpsellScreenCallback$(std::function<void(bool)> callback);

    MCAPI void setTrialMode$(bool isEnabled);

    MCAPI void startBuildBlock$(class BlockPos const& pos, uchar face);

    MCAPI bool startDestroyBlock$(class BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCAPI void tick$();

    MCAPI bool useItem$(class ItemStack& item);

    MCAPI class InteractionResult useItemOn$(
        class ItemStack&      item,
        class BlockPos const& at,
        uchar                 face,
        class Vec3 const&     hit,
        class Block const*    targetBlock
    );

    MCAPI static bool& mTrialHasEnded();

    // NOLINTEND
};
