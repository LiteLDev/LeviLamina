#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"
#include "mc/world/item/HandSlot.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/input/InputMode.h"
#include "mc/world/gamemode/IGameModeMessenger.h"
#include "mc/world/gamemode/IGameModeTimer.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class HitResult;
class InteractionResult;
class ItemStack;
class Player;
struct IGameModeMessenger;
struct IGameModeTimer;
// clang-format on

class GameMode {
public:
    [[nodiscard]] ::BlockPos const& getDestroyBlockPos() const { return mDestroyBlockPos.get(); }
    [[nodiscard]] ::FacingID        getDestroyBlockFace() const { return static_cast<::FacingID>(mDestroyBlockFace); }

public:
    // GameMode inner types declare
    // clang-format off
    struct BuildContext;
    struct BuildDelay;
    struct BuildPlayerContext;
    struct ContinueBuildData;
    // clang-format on

    // GameMode inner types define
    enum class BuildActionMode : int {
        None             = 0,
        Interacting      = 1,
        AlignedPlacement = 2,
    };

    struct BuildContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                        mHasBuildDirection;
        ::ll::TypedStorage<1, 1, bool>                        mHasLastBuiltPosition;
        ::ll::TypedStorage<1, 1, bool>                        mLastBuildBlockWasInteractive;
        ::ll::TypedStorage<1, 1, bool>                        mLastBuildBlockAlignedPlacement;
        ::ll::TypedStorage<1, 1, bool>                        mLastBuildBlockHadSuccessfulUse;
        ::ll::TypedStorage<4, 12, ::BlockPos>                 mLastBuiltBlockPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos>                 mBuildDirection;
        ::ll::TypedStorage<4, 12, ::BlockPos>                 mNextBuildPos;
        ::ll::TypedStorage<4, 12, ::Vec3>                     mInitialClickPos;
        ::ll::TypedStorage<1, 1, uchar>                       mContinueFacing;
        ::ll::TypedStorage<1, 1, ::HandSlot>                  mLastBuildHandSlot;
        ::ll::TypedStorage<4, 4, ::GameMode::BuildActionMode> mActionMode;
        // NOLINTEND
    };

    struct BuildDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                    mHasDelayElapsed;
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNewLastBuildTimeIfBlockIsBuilt;
        // NOLINTEND
    };

    struct BuildPlayerContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosDelta;
        ::ll::TypedStorage<1, 1, bool>    mIsSneaking;
        // NOLINTEND
    };

    struct ContinueBuildData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos const> mHit;
        ::ll::TypedStorage<1, 1, uchar const>       mFacing;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                               mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                             mDestroyBlockPos;
    ::ll::TypedStorage<1, 1, uchar>                                   mDestroyBlockFace;
    ::ll::TypedStorage<4, 4, float>                                   mOldDestroyProgress;
    ::ll::TypedStorage<4, 4, float>                                   mDestroyProgress;
    ::ll::TypedStorage<8, 8, double>                                  mLastDestroyTime;
    ::ll::TypedStorage<4, 4, float>                                   mDistanceTravelled;
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mPlayerLastPosition;
    ::ll::TypedStorage<4, 64, ::GameMode::BuildContext>               mBuildContext;
    ::ll::TypedStorage<4, 4, float>                                   mMinPlayerSpeed;
    ::ll::TypedStorage<4, 4, int>                                     mContinueBreakBlockCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastBuildTime;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNoDestroyUntil;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNoDestroySoundUntil;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             creativeDestructionTickDelay;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             buildingTickDelay;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds>             destroySoundDelay;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IGameModeTimer>>     mTimer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IGameModeMessenger>> mMessenger;
    // NOLINTEND

public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&);
    GameMode(GameMode const&);
    GameMode();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameMode();

    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    virtual bool destroyBlock(::BlockPos const& pos, uchar face);

    virtual bool
    continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);

    virtual void stopDestroyBlock(::BlockPos const& pos);

    virtual void startBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot);

    virtual bool buildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot, bool const isSimTick);

    virtual void continueBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot, float buildDelayScale);

    virtual void stopBuildBlock();

    virtual void tick();

    virtual float getPickRange(::InputMode const& currentInputMode);

    virtual bool useItem(::ItemStack& item, ::HandSlot handSlot);

    virtual bool useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot handSlot);

    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot        handSlot,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    virtual bool interact(::Actor& entity, ::Vec3 const& location, ::HandSlot handSlot);

    virtual bool attack(::Actor& entity, ::Vec3 const& hitPosition);

    virtual void releaseUsingItem();

    virtual void setTrialMode(bool isEnabled);

    virtual bool isInTrialMode();

    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameMode(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
    );

    MCNAPI bool _attack(::Actor& entity, bool playPredictiveSound, ::Vec3 const& hitPosition);

    MCNAPI bool _creativeDestroyBlock(::BlockPos const& pos, uchar face);

    MCNAPI bool _enableBlockBreakDelay() const;

#ifdef LL_PLAT_C
    MCNAPI bool _startDestroyBlock(::BlockPos const& hitPos, ::Vec3 const&, uchar hitFace, bool& hasDestroyedBlock);
#endif

    MCAPI bool baseUseItem(::ItemStack const& item, ::HandSlot handSlot);

    MCNAPI bool baseUseItemAsAttack(::ItemStack const& item, ::Vec3 const& aimDirection, ::HandSlot handSlot);

    MCNAPI void
    continueBuildBlockAction(::Player const& player, ::HitResult const& hr, ::HandSlot handSlot, float buildDelayScale);

    MCNAPI float getDestroyRate(::Block const& block);

    MCAPI float getMaxPickRange();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _sendPlayerInteractWithBlockAfterEvent(
        ::ItemStack const& beforeItem,
        ::ItemStack const& afterItem,
        ::Player&          player,
        ::BlockPos const&  at,
        uchar              face,
        ::Vec3 const&      hit,
        bool               isFirstEvent
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCNAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCNAPI bool
    $continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);

    MCNAPI void $stopDestroyBlock(::BlockPos const& pos);

    MCNAPI void $startBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot);

    MCNAPI bool $buildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot, bool const isSimTick);

    MCAPI void $continueBuildBlock(::BlockPos const& pos, uchar face, ::HandSlot handSlot, float buildDelayScale);

    MCNAPI void $stopBuildBlock();

    MCNAPI void $tick();

    MCNAPI float $getPickRange(::InputMode const& currentInputMode);

    MCNAPI bool $useItem(::ItemStack& item, ::HandSlot handSlot);

    MCNAPI bool $useItemAsAttack(::ItemStack& item, ::Vec3 const& aimDirection, ::HandSlot handSlot);

    MCNAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::HandSlot        handSlot,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCNAPI bool $interact(::Actor& entity, ::Vec3 const& location, ::HandSlot handSlot);

    MCNAPI bool $attack(::Actor& entity, ::Vec3 const& hitPosition);

    MCNAPI void $releaseUsingItem();

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
