#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

class Player;

class GameMode {
public:
    // Player&                               mPlayer;                       // this+0x8
    // BlockPos                              mDestroyBlockPos;              // this+0x10
    // uchar                                 mDestroyBlockFace;             // this+0x1C
    // float                                 mOldDestroyProgress;           // this+0x20
    // float                                 mDestroyProgress;              // this+0x24
    // double                                mLastDestroyTime;              // this+0x28
    // float                                 mDistanceTravelled;            // this+0x30
    // Vec3                                  mPlayerLastPosition;           // this+0x34
    // BlockPos                              mLastBuiltBlockPosition;       // this+0x40
    // bool                                  mLastBuildBlockWasInteractive; // this+0x4C
    // bool                                  mLastBuildBlockWasSnappable;   // this+0x4D
    // float                                 mMinPlayerSpeed;               // this+0x50
    // int                                   mContinueBreakBlockCount;      // this+0x54
    // std::chrono::steady_clock::time_point mLastBuildTime;                // this+0x58
    // std::chrono::steady_clock::time_point mNoDestroyUntil;               // this+0x60
    // std::chrono::steady_clock::time_point mNoDestroySoundUntil;          // this+0x68
    // std::chrono::milliseconds             creativeDestructionTickDelay;  // this+0x70
    // std::chrono::milliseconds             buildingTickDelay;             // this+0x78
    // std::chrono::milliseconds             destroySoundDelay;             // this+0x80
    // bool                                  mHasBuildDirection;            // this+0x88
    // bool                                  mHasLastBuiltPosition;         // this+0x89
    // uchar                                 mContinueFacing;               // this+0x8A
    // BlockPos                              mBuildDirection;               // this+0x8C
    // BlockPos                              mNextBuildPos;                 // this+0x98
    // std::unique_ptr<IGameModeTimer>       mTimer;                        // this+0xA8
    // std::unique_ptr<IGameModeMessenger>   mMessenger;                    // this+0xB0

    [[nodiscard]] constexpr class Player& getPlayer() const { return *ll::memory::dAccess<Player*>(this, 0x8); }

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
    virtual bool buildBlock(class BlockPos const& pos, uchar face, bool isSimTick);

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

    MCAPI bool
    _startDestroyBlock(class BlockPos const& hitPos, class Vec3 const&, uchar hitFace, bool& hasDestroyedBlock);

    MCAPI bool _tickContinueDestroyBlock(
        class BlockPos const&        hitPos,
        class Vec3 const&            playerPos,
        uchar                        hitFace,
        bool&                        hasDestroyedBlock,
        std::function<void()> const& crackBlock
    );

    MCAPI bool baseUseItem(class ItemStack& item);

    MCAPI void continueBuildBlockAction(class Player const& player, class HitResult const& hr);

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

    MCAPI void _sendPlayerInteractWithBlockAfterEvent(
        class Player&         player,
        class BlockPos const& at,
        uchar                 face,
        class Vec3 const&     hit
    );

    MCAPI std::optional<class ItemStack>
    _sendTryDestroyBlockEvent(class Block const& block, class BlockPos const& pos, class ItemStack itemBeforeEvent)
        const;

    MCAPI class InteractionResult
    _sendUseItemOnEvents(class ItemStack& item, class BlockPos const& at, uchar face, class Vec3 const& hit) const;

    // NOLINTEND
};
