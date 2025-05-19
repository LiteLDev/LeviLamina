#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/input/InputMode.h"
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
    // GameMode inner types declare
    // clang-format off
    struct BuildContext;
    struct BuildDelay;
    struct BuildPlayerContext;
    struct ContinueBuildData;
    // clang-format on

    // GameMode inner types define
    struct BuildContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk38ec72;
        ::ll::UntypedStorage<1, 1>  mUnk4845fa;
        ::ll::UntypedStorage<1, 1>  mUnk32747a;
        ::ll::UntypedStorage<1, 1>  mUnk3919e7;
        ::ll::UntypedStorage<4, 12> mUnk880e8e;
        ::ll::UntypedStorage<4, 12> mUnk51ff9c;
        ::ll::UntypedStorage<4, 12> mUnkb294b2;
        ::ll::UntypedStorage<4, 12> mUnkcd43e4;
        ::ll::UntypedStorage<1, 1>  mUnk451025;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuildContext& operator=(BuildContext const&);
        BuildContext(BuildContext const&);
        BuildContext();
    };

    struct BuildDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk178db0;
        ::ll::UntypedStorage<8, 8> mUnk3546ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuildDelay& operator=(BuildDelay const&);
        BuildDelay(BuildDelay const&);
        BuildDelay();
    };

    struct ContinueBuildData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk3d6f00;
        ::ll::UntypedStorage<1, 1>  mUnkfca6f6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContinueBuildData& operator=(ContinueBuildData const&);
        ContinueBuildData(ContinueBuildData const&);
        ContinueBuildData();
    };

    struct BuildPlayerContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk7ef549;
        ::ll::UntypedStorage<1, 1>  mUnk655443;
        // NOLINTEND

    public:
        // prevent constructor by default
        BuildPlayerContext& operator=(BuildPlayerContext const&);
        BuildPlayerContext(BuildPlayerContext const&);
        BuildPlayerContext();
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
    ::ll::TypedStorage<4, 56, ::GameMode::BuildContext>               mBuildContext;
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
    // vIndex: 0
    virtual ~GameMode() = default;

    // vIndex: 1
    virtual bool startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const& pos, uchar face);

    // vIndex: 3
    virtual bool
    continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);

    // vIndex: 4
    virtual void stopDestroyBlock(::BlockPos const& pos);

    // vIndex: 5
    virtual void startBuildBlock(::BlockPos const& pos, uchar face);

    // vIndex: 6
    virtual bool buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);

    // vIndex: 7
    virtual void continueBuildBlock(::BlockPos const& pos, uchar face);

    // vIndex: 8
    virtual void stopBuildBlock();

    // vIndex: 9
    virtual void tick();

    // vIndex: 10
    virtual float getPickRange(::InputMode const& currentInputMode, bool isVR);

    // vIndex: 11
    virtual bool useItem(::ItemStack& item);

    // vIndex: 12
    virtual ::InteractionResult useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    // vIndex: 13
    virtual bool interact(::Actor& entity, ::Vec3 const& location);

    // vIndex: 14
    virtual bool attack(::Actor& entity);

    // vIndex: 15
    virtual void releaseUsingItem();

    // vIndex: 16
    virtual void setTrialMode(bool isEnabled);

    // vIndex: 17
    virtual bool isInTrialMode();

    // vIndex: 18
    virtual void registerUpsellScreenCallback(::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameMode(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
    );

    MCAPI bool _attack(::Actor& entity, bool playPredictiveSound);

    MCAPI ::BlockPos _calculatePlacePos(::ItemStack& heldStack, ::BlockPos const& pos, uchar& face) const;

    MCAPI bool _canDestroy(::BlockPos const& pos, uchar face);

    MCAPI bool _canUseBlock(::Block const& block);

    MCAPI bool _creativeDestroyBlock(::BlockPos const& pos, uchar face);

    MCAPI void _destroyBlockInternal(::BlockPos const& pos, ::Block const& oldBlock, ::Block const& newBlock) const;

    MCAPI bool _enableBlockBreakDelay() const;

    MCAPI void _sendPlayerInteractWithBlockAfterEvent(
        ::ItemStack const& beforeItem,
        ::ItemStack const& afterItem,
        ::Player&          player,
        ::BlockPos const&  at,
        uchar              face,
        ::Vec3 const&      hit,
        bool               isFirstEvent
    );

    MCAPI void _sendPlayerInteractWithEntityAfterEvent(
        ::ItemStack const& beforeItem,
        ::ItemStack const& afterItem,
        ::Player&          player,
        ::Actor const&     entity
    );

    MCAPI ::std::optional<::ItemStack>
    _sendTryDestroyBlockEvent(::Block const& block, ::BlockPos const& pos, ::ItemStack itemBeforeEvent) const;

    MCAPI ::InteractionResult _sendUseItemOnEvents(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        bool              isFirstEvent
    ) const;

    MCAPI bool baseUseItem(::ItemStack& item);

    MCAPI void continueBuildBlockAction(::Player const& player, ::HitResult const& hr);

    MCAPI float getDestroyRate(::Block const& block);

    MCAPI float getMaxPickRange();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MIN_MOVING_NON_CREATIVE_BUILD_DELAY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Player&                               player,
        ::std::unique_ptr<::IGameModeTimer>     timer,
        ::std::unique_ptr<::IGameModeMessenger> messenger
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $startDestroyBlock(::BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    MCAPI bool $destroyBlock(::BlockPos const& pos, uchar face);

    MCAPI bool
    $continueDestroyBlock(::BlockPos const& pos, uchar face, ::Vec3 const& playerPos, bool& hasDestroyedBlock);

    MCAPI void $stopDestroyBlock(::BlockPos const& pos);

    MCAPI void $startBuildBlock(::BlockPos const& pos, uchar face);

    MCAPI bool $buildBlock(::BlockPos const& pos, uchar face, bool const isSimTick);

    MCAPI void $continueBuildBlock(::BlockPos const& pos, uchar face);

    MCAPI void $stopBuildBlock();

    MCAPI void $tick();

    MCAPI float $getPickRange(::InputMode const& currentInputMode, bool isVR);

    MCAPI bool $useItem(::ItemStack& item);

    MCAPI ::InteractionResult $useItemOn(
        ::ItemStack&      item,
        ::BlockPos const& at,
        uchar             face,
        ::Vec3 const&     hit,
        ::Block const*    targetBlock,
        bool              isFirstEvent
    );

    MCAPI bool $interact(::Actor& entity, ::Vec3 const& location);

    MCAPI bool $attack(::Actor& entity);

    MCAPI void $releaseUsingItem();

    MCFOLD void $setTrialMode(bool isEnabled);

    MCFOLD bool $isInTrialMode();

    MCFOLD void $registerUpsellScreenCallback(::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
