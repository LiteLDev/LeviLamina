#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/InputMode.h"
#include "mc/world/gamemode/GameMode.h"

class SurvivalMode : public ::GameMode {
public:
    // prevent constructor by default
    SurvivalMode& operator=(SurvivalMode const&);
    SurvivalMode(SurvivalMode const&);
    SurvivalMode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SurvivalMode@@UEAA@XZ
    virtual ~SurvivalMode() = default;

    // vIndex: 1, symbol: ?startDestroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z
    virtual bool startDestroyBlock(class BlockPos const& pos, uchar face, bool& hasDestroyedBlock);

    // vIndex: 2, symbol: ?destroyBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E@Z
    virtual bool destroyBlock(class BlockPos const& pos, uchar face);

    // vIndex: 5, symbol: ?startBuildBlock@SurvivalMode@@UEAAXAEBVBlockPos@@E@Z
    virtual void startBuildBlock(class BlockPos const& pos, uchar face);

    // vIndex: 6, symbol: ?buildBlock@SurvivalMode@@UEAA_NAEBVBlockPos@@E_N@Z
    virtual bool buildBlock(class BlockPos const& pos, uchar face, bool);

    // vIndex: 9, symbol: ?tick@SurvivalMode@@UEAAXXZ
    virtual void tick();

    // vIndex: 11, symbol: ?useItem@SurvivalMode@@UEAA_NAEAVItemStack@@@Z
    virtual bool useItem(class ItemStack& item);

    // vIndex: 12, symbol:
    // ?useItemOn@SurvivalMode@@UEAA?AVInteractionResult@@AEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
    virtual class InteractionResult useItemOn(
        class ItemStack&      item,
        class BlockPos const& at,
        uchar                 face,
        class Vec3 const&     hit,
        class Block const*    targetBlock
    );

    // vIndex: 13, symbol: ?interact@SurvivalMode@@UEAA_NAEAVActor@@AEBVVec3@@@Z
    virtual bool interact(class Actor& entity, class Vec3 const& location);

    // vIndex: 14, symbol: ?attack@SurvivalMode@@UEAA_NAEAVActor@@@Z
    virtual bool attack(class Actor& entity);

    // vIndex: 16, symbol: ?setTrialMode@SurvivalMode@@UEAAX_N@Z
    virtual void setTrialMode(bool isEnabled);

    // vIndex: 17, symbol: ?isInTrialMode@SurvivalMode@@UEAA_NXZ
    virtual bool isInTrialMode();

    // vIndex: 18, symbol: ?registerUpsellScreenCallback@SurvivalMode@@UEAAXV?$function@$$A6AX_N@Z@std@@@Z
    virtual void registerUpsellScreenCallback(std::function<void(bool)> callback);

    // symbol: ??0SurvivalMode@@QEAA@AEAVPlayer@@@Z
    MCAPI explicit SurvivalMode(class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_messagePlayers@SurvivalMode@@AEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _messagePlayers(std::string message);

    // symbol: ?_showTrialReminder@SurvivalMode@@AEAAX_N@Z
    MCAPI void _showTrialReminder(bool force);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mTrialHasEnded@SurvivalMode@@0_NA
    MCAPI static bool mTrialHasEnded;

    // NOLINTEND
};
