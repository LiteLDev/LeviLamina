#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/InputMode.h"

class GameMode {
public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&);
    GameMode(GameMode const&);
    GameMode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameMode() = default;

    // vIndex: 1
    virtual bool startDestroyBlock(class BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    // vIndex: 2
    virtual bool destroyBlock(class BlockPos const& pos, uchar face);

    // vIndex: 3
    virtual bool
    continueDestroyBlock(class BlockPos const& pos, uchar face, class Vec3 const& playerPos, bool& hasDestroyedBlock);

    // vIndex: 4
    virtual void stopDestroyBlock(class BlockPos const& pos);

    // vIndex: 5
    virtual void startBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 6
    virtual bool buildBlock(class BlockPos const& pos, uchar face, bool);

    // vIndex: 7
    virtual void continueBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 8
    virtual void stopBuildBlock();

    // vIndex: 9
    virtual void tick();

    // vIndex: 10
    virtual float getPickRange(::InputMode const& currentInputMode, bool isVR);

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

    // vIndex: 15
    virtual void releaseUsingItem();

    // vIndex: 16
    virtual void setTrialMode(bool isEnabled);

    // vIndex: 17
    virtual bool isInTrialMode();

    // vIndex: 18
    virtual void registerUpsellScreenCallback(std::function<void(bool)> callback);

    MCAPI GameMode(
        class Player&                              player,
        std::unique_ptr<struct IGameModeTimer>     timer,
        std::unique_ptr<struct IGameModeMessenger> messenger
    );

    MCAPI bool _startDestroyBlock(class BlockPos const& hitPos, class Vec3 const&, uchar, bool& hasDestroyedBlock);

    MCAPI bool
    _tickContinueDestroyBlock(class BlockPos const& hitPos, class Vec3 const& playerPos, uchar, bool& hasDestroyedBlock, std::function<void()> const&);

    MCAPI bool baseUseItem(class ItemStack& item);

    MCAPI void continueBuildBlockAction(class Player const&, class HitResult const&);

    MCAPI gsl::final_action<std::function<void()>> createBlockBreakCaptureScope(
        std::function<void(class ItemStack const&, class ItemStack const&, class BlockPos const&)> callback
    );

    MCAPI uchar getDestroyBlockFace() const;

    MCAPI class BlockPos const& getDestroyBlockPos() const;

    MCAPI float getDestroyRate(class Block const& block);

    MCAPI float getMaxPickRange();

    MCAPI float getMaxPickRangeSqr();

    MCAPI bool isLastBuildBlockInteractive() const;

    MCAPI static float const MIN_MOVING_NON_CREATIVE_BUILD_DELAY;

    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;

    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;

    MCAPI static float const PICKRANGE_GAMEPAD;

    MCAPI static float const PICKRANGE_MOUSE;

    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;

    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;

    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;

    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;

    MCAPI static float const PICKRANGE_VR_CREATIVE;

    MCAPI static float const PICKRANGE_VR_SURVIVAL;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canDestroy(class BlockPos const& pos, uchar face);

    MCAPI bool _canUseBlock(class Block const& block);

    MCAPI bool _creativeDestroyBlock(class BlockPos const& pos, uchar face);

    MCAPI bool _enableBlockBreakDelay() const;

    MCAPI void _sendPlayerInteractWithBlockAfterEvent(class Player&, class BlockPos const&, uchar, class Vec3 const&);

    MCAPI std::optional<class ItemStack>
          _sendTryDestroyBlockEvent(class Block const&, class BlockPos const&, class ItemStack) const;

    MCAPI class InteractionResult
    _sendUseItemOnEvents(class ItemStack&, class BlockPos const&, uchar, class Vec3 const&) const;

    // NOLINTEND
};
