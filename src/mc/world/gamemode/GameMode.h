#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/InputMode.h"

class GameMode {
public:
    // GameMode inner types declare
    // clang-format off
    struct BuildContext;
    struct BuildPlayerContext;
    struct ContinueBuildData;
    // clang-format on

    // GameMode inner types define
    struct BuildContext {
    public:
        // prevent constructor by default
        BuildContext& operator=(BuildContext const&);
        BuildContext(BuildContext const&);
        BuildContext();
    };

    struct BuildPlayerContext {
    public:
        // prevent constructor by default
        BuildPlayerContext& operator=(BuildPlayerContext const&);
        BuildPlayerContext(BuildPlayerContext const&);
        BuildPlayerContext();
    };

    struct ContinueBuildData {
    public:
        // prevent constructor by default
        ContinueBuildData& operator=(ContinueBuildData const&);
        ContinueBuildData(ContinueBuildData const&);
        ContinueBuildData();
    };

public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&);
    GameMode(GameMode const&);
    GameMode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameMode@@UEAA@XZ
    virtual ~GameMode() = default;

    // vIndex: 1, symbol: ?startDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z
    virtual bool startDestroyBlock(class BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    // vIndex: 2, symbol: ?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z
    virtual bool destroyBlock(class BlockPos const& pos, uchar face);

    // vIndex: 3, symbol: ?continueDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEBVVec3@@AEA_N@Z
    virtual bool
    continueDestroyBlock(class BlockPos const& pos, uchar face, class Vec3 const& playerPos, bool& hasDestroyedBlock);

    // vIndex: 4, symbol: ?stopDestroyBlock@GameMode@@UEAAXAEBVBlockPos@@@Z
    virtual void stopDestroyBlock(class BlockPos const& pos);

    // vIndex: 5, symbol: ?startBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
    virtual void startBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 6, symbol: ?buildBlock@GameMode@@UEAA_NAEBVBlockPos@@E_N@Z
    virtual bool buildBlock(class BlockPos const& pos, uchar face, bool);

    // vIndex: 7, symbol: ?continueBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
    virtual void continueBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 8, symbol: ?stopBuildBlock@GameMode@@UEAAXXZ
    virtual void stopBuildBlock();

    // vIndex: 9, symbol: ?tick@GameMode@@UEAAXXZ
    virtual void tick();

    // vIndex: 10, symbol: ?getPickRange@GameMode@@UEAAMAEBW4InputMode@@_N@Z
    virtual float getPickRange(::InputMode const& currentInputMode, bool isVR);

    // vIndex: 11, symbol: ?useItem@GameMode@@UEAA_NAEAVItemStack@@@Z
    virtual bool useItem(class ItemStack& item);

    // vIndex: 12, symbol:
    // ?useItemOn@GameMode@@UEAA?AVInteractionResult@@AEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
    virtual class InteractionResult useItemOn(
        class ItemStack&      item,
        class BlockPos const& at,
        uchar                 face,
        class Vec3 const&     hit,
        class Block const*    targetBlock
    );

    // vIndex: 13, symbol: ?interact@GameMode@@UEAA_NAEAVActor@@AEBVVec3@@@Z
    virtual bool interact(class Actor& entity, class Vec3 const& location);

    // vIndex: 14, symbol: ?attack@GameMode@@UEAA_NAEAVActor@@@Z
    virtual bool attack(class Actor& entity);

    // vIndex: 15, symbol: ?releaseUsingItem@GameMode@@UEAAXXZ
    virtual void releaseUsingItem();

    // vIndex: 16, symbol: ?setTrialMode@GameMode@@UEAAX_N@Z
    virtual void setTrialMode(bool isEnabled);

    // vIndex: 17, symbol: ?isInTrialMode@GameMode@@UEAA_NXZ
    virtual bool isInTrialMode();

    // vIndex: 18, symbol: ?registerUpsellScreenCallback@GameMode@@UEAAXV?$function@$$A6AX_N@Z@std@@@Z
    virtual void registerUpsellScreenCallback(std::function<void(bool)> callback);

    // symbol:
    // ??0GameMode@@QEAA@AEAVPlayer@@V?$unique_ptr@UIGameModeTimer@@U?$default_delete@UIGameModeTimer@@@std@@@std@@V?$unique_ptr@UIGameModeMessenger@@U?$default_delete@UIGameModeMessenger@@@std@@@3@@Z
    MCAPI
    GameMode(class Player& player, std::unique_ptr<struct IGameModeTimer> timer, std::unique_ptr<struct IGameModeMessenger>);

    // symbol: ?_startDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_N@Z
    MCAPI bool _startDestroyBlock(class BlockPos const& hitPos, class Vec3 const&, uchar, bool& hasDestroyedBlock);

    // symbol: ?_tickContinueDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_NAEBV?$function@$$A6AXXZ@std@@@Z
    MCAPI bool
    _tickContinueDestroyBlock(class BlockPos const& hitPos, class Vec3 const& playerPos, uchar, bool& hasDestroyedBlock, std::function<void()> const&);

    // symbol: ?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z
    MCAPI bool baseUseItem(class ItemStack& item);

    // symbol:
    // ?createBlockBreakCaptureScope@GameMode@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@V?$function@$$A6AXAEBVItemStack@@0AEBVBlockPos@@@Z@std@@@Z
    MCAPI gsl::final_action<std::function<void()>> createBlockBreakCaptureScope(
        std::function<void(class ItemStack const&, class ItemStack const&, class BlockPos const&)> callback
    );

    // symbol: ?getBuildContext@GameMode@@QEBAAEBUBuildContext@1@XZ
    MCAPI struct GameMode::BuildContext const& getBuildContext() const;

    // symbol: ?getContinueDirection@GameMode@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getContinueDirection() const;

    // symbol: ?getContinueFacing@GameMode@@QEBAEXZ
    MCAPI uchar getContinueFacing() const;

    // symbol: ?getDestroyBlockFace@GameMode@@QEBAEXZ
    MCAPI uchar getDestroyBlockFace() const;

    // symbol: ?getDestroyBlockPos@GameMode@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getDestroyBlockPos() const;

    // symbol: ?getDestroyRate@GameMode@@QEAAMAEBVBlock@@@Z
    MCAPI float getDestroyRate(class Block const& block);

    // symbol: ?getMaxPickRange@GameMode@@QEAAMXZ
    MCAPI float getMaxPickRange();

    // symbol: ?getMaxPickRangeSqr@GameMode@@QEAAMXZ
    MCAPI float getMaxPickRangeSqr();

    // symbol: ?getNextContinuePos@GameMode@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getNextContinuePos() const;

    // symbol: ?hasContinueDirection@GameMode@@QEBA_NXZ
    MCAPI bool hasContinueDirection() const;

    // symbol: ?isLastBuildBlockInteractive@GameMode@@QEBA_NXZ
    MCAPI bool isLastBuildBlockInteractive() const;

    // symbol: ?isLastBuildBlockSnappable@GameMode@@QEBA_NXZ
    MCAPI bool isLastBuildBlockSnappable() const;

    // symbol:
    // ?getContinueBuildBlockContext@GameMode@@SA?AUContinueBuildData@1@AEBVHitResult@@AEBUBuildContext@1@AEBUBuildPlayerContext@1@@Z
    MCAPI static struct GameMode::ContinueBuildData
    getContinueBuildBlockContext(class HitResult const&, struct GameMode::BuildContext const&, struct GameMode::BuildPlayerContext const&);

    // symbol: ?PICKRANGE_CREATIVE_MAXIMUM@GameMode@@2MB
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;

    // symbol: ?PICKRANGE_CREATIVE_MAXIMUM_SQR@GameMode@@2MB
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;

    // symbol: ?PICKRANGE_GAMEPAD@GameMode@@2MB
    MCAPI static float const PICKRANGE_GAMEPAD;

    // symbol: ?PICKRANGE_MOUSE@GameMode@@2MB
    MCAPI static float const PICKRANGE_MOUSE;

    // symbol: ?PICKRANGE_SURVIVAL_MAXIMUM@GameMode@@2MB
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;

    // symbol: ?PICKRANGE_SURVIVAL_MAXIMUM_SQR@GameMode@@2MB
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;

    // symbol: ?PICKRANGE_TOUCH_CREATIVE@GameMode@@2MB
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;

    // symbol: ?PICKRANGE_TOUCH_SURVIVAL@GameMode@@2MB
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;

    // symbol: ?PICKRANGE_VR_CREATIVE@GameMode@@2MB
    MCAPI static float const PICKRANGE_VR_CREATIVE;

    // symbol: ?PICKRANGE_VR_SURVIVAL@GameMode@@2MB
    MCAPI static float const PICKRANGE_VR_SURVIVAL;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canDestroy@GameMode@@AEAA_NAEBVBlockPos@@E@Z
    MCAPI bool _canDestroy(class BlockPos const& pos, uchar face);

    // symbol: ?_canUseBlock@GameMode@@AEAA_NAEBVBlock@@@Z
    MCAPI bool _canUseBlock(class Block const& block);

    // symbol: ?_creativeDestroyBlock@GameMode@@AEAA_NAEBVBlockPos@@E@Z
    MCAPI bool _creativeDestroyBlock(class BlockPos const& pos, uchar face);

    // symbol: ?_enableBlockBreakDelay@GameMode@@AEBA_NXZ
    MCAPI bool _enableBlockBreakDelay() const;

    // symbol: ?_sendUseItemOnEvents@GameMode@@AEBA?AVInteractionResult@@AEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@@Z
    MCAPI class InteractionResult
    _sendUseItemOnEvents(class ItemStack&, class BlockPos const&, uchar, class Vec3 const&) const;

    // NOLINTEND
};
