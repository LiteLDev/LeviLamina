/**
 * @file  MC/GameMode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class ServerPlayer;
#undef BEFORE_EXTRA

/**
 * @brief MC class GameMode.
 *
 */
class GameMode {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI ServerPlayer* getPlayer();
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEMODE
public:
    class GameMode& operator=(class GameMode const &) = delete;
    GameMode(class GameMode const &) = delete;
    GameMode() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GameMode();
    /**
     * @hash   1527748222
     * @vftbl  1
     * @symbol ?startDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEA_N@Z
     */
    virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /**
     * @hash   2058479450
     * @vftbl  2
     * @symbol ?destroyBlock@GameMode@@UEAA_NAEBVBlockPos@@E@Z
     */
    virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   11170505
     * @vftbl  3
     * @symbol ?continueDestroyBlock@GameMode@@UEAA_NAEBVBlockPos@@EAEBVVec3@@AEA_N@Z
     */
    virtual bool continueDestroyBlock(class BlockPos const &, unsigned char, class Vec3 const &, bool &);
    /**
     * @hash   186492227
     * @vftbl  4
     * @symbol ?stopDestroyBlock@GameMode@@UEAAXAEBVBlockPos@@@Z
     */
    virtual void stopDestroyBlock(class BlockPos const &);
    /**
     * @hash   1390599878
     * @vftbl  5
     * @symbol ?startBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
     */
    virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   -1678946250
     * @vftbl  6
     * @symbol ?buildBlock@GameMode@@UEAA_NAEBVBlockPos@@E_N@Z
     */
    virtual bool buildBlock(class BlockPos const &, unsigned char, bool);
    /**
     * @hash   -1334382613
     * @vftbl  7
     * @symbol ?continueBuildBlock@GameMode@@UEAAXAEBVBlockPos@@E@Z
     */
    virtual void continueBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   1729916323
     * @vftbl  8
     * @symbol ?stopBuildBlock@GameMode@@UEAAXXZ
     */
    virtual void stopBuildBlock();
    /**
     * @hash   1351552255
     * @vftbl  9
     * @symbol ?tick@GameMode@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -100234495
     * @vftbl  10
     * @symbol ?getPickRange@GameMode@@UEAAMAEBW4InputMode@@_N@Z
     */
    virtual float getPickRange(enum InputMode const &, bool);
    /**
     * @hash   461881081
     * @vftbl  11
     * @symbol ?useItem@GameMode@@UEAA_NAEAVItemStack@@@Z
     */
    virtual bool useItem(class ItemStack &);
    /**
     * @hash   91427539
     * @vftbl  12
     * @symbol ?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z
     */
    virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /**
     * @hash   -644080283
     * @vftbl  13
     * @symbol ?interact@GameMode@@UEAA_NAEAVActor@@AEBVVec3@@@Z
     */
    virtual bool interact(class Actor &, class Vec3 const &);
    /**
     * @hash   -260111973
     * @vftbl  14
     * @symbol ?attack@GameMode@@UEAA_NAEAVActor@@@Z
     */
    virtual bool attack(class Actor &);
    /**
     * @hash   1028006562
     * @vftbl  15
     * @symbol ?releaseUsingItem@GameMode@@UEAAXXZ
     */
    virtual void releaseUsingItem();
    /**
     * @hash   -1494397117
     * @vftbl  16
     * @symbol ?setTrialMode@GameMode@@UEAAX_N@Z
     */
    virtual void setTrialMode(bool);
    /**
     * @hash   2059180366
     * @vftbl  17
     * @symbol ?isInTrialMode@GameMode@@UEAA_NXZ
     */
    virtual bool isInTrialMode();
    /**
     * @hash   608780140
     * @vftbl  18
     * @symbol ?registerUpsellScreenCallback@GameMode@@UEAAXV?$function@$$A6AX_N@Z@std@@@Z
     */
    virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
    /**
     * @hash   1621347944
     * @symbol ??0GameMode@@QEAA@AEAVPlayer@@V?$unique_ptr@UIGameModeTimer@@U?$default_delete@UIGameModeTimer@@@std@@@std@@V?$unique_ptr@UIGameModeMessenger@@U?$default_delete@UIGameModeMessenger@@@std@@@3@@Z
     */
    MCAPI GameMode(class Player &, std::unique_ptr<struct IGameModeTimer>, std::unique_ptr<struct IGameModeMessenger>);
    /**
     * @hash   523090432
     * @symbol ?_startDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_N@Z
     */
    MCAPI bool _startDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &);
    /**
     * @hash   1904908417
     * @symbol ?_tickContinueDestroyBlock@GameMode@@QEAA_NAEBVBlockPos@@AEBVVec3@@EAEA_NAEBV?$function@$$A6AXXZ@std@@@Z
     */
    MCAPI bool _tickContinueDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &, class std::function<void (void)> const &);
    /**
     * @hash   263688055
     * @symbol ?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z
     */
    MCAPI bool baseUseItem(class ItemStack &);
    /**
     * @hash   -1671993444
     * @symbol ?createBlockBreakCaptureScope@GameMode@@QEAA?AV?$final_action@V?$function@$$A6AXXZ@std@@@gsl@@V?$function@$$A6AXAEBVItemStack@@0AEBVBlockPos@@@Z@std@@@Z
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> createBlockBreakCaptureScope(class std::function<void (class ItemStack const &, class ItemStack const &, class BlockPos const &)>);
    /**
     * @hash   841746423
     * @symbol ?getDestroyBlockFace@GameMode@@QEBAEXZ
     */
    MCAPI unsigned char getDestroyBlockFace() const;
    /**
     * @hash   1072002216
     * @symbol ?getDestroyBlockPos@GameMode@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getDestroyBlockPos() const;
    /**
     * @hash   -1812804104
     * @symbol ?getDestroyProgress@GameMode@@QEAAMXZ
     */
    MCAPI float getDestroyProgress();
    /**
     * @hash   -1619539389
     * @symbol ?getDestroyRate@GameMode@@QEAAMAEBVBlock@@@Z
     */
    MCAPI float getDestroyRate(class Block const &);
    /**
     * @hash   -234476394
     * @symbol ?getMaxPickRange@GameMode@@QEAAMXZ
     */
    MCAPI float getMaxPickRange();
    /**
     * @hash   814313576
     * @symbol ?getMaxPickRangeSqr@GameMode@@QEAAMXZ
     */
    MCAPI float getMaxPickRangeSqr();
    /**
     * @hash   -1166319060
     * @symbol ?isLastBuildBlockInteractive@GameMode@@QEBA_NXZ
     */
    MCAPI bool isLastBuildBlockInteractive() const;
    /**
     * @hash   -479702631
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;
    /**
     * @hash   -1789527039
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM_SQR@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;
    /**
     * @hash   568387143
     * @symbol ?PICKRANGE_GAMEPAD@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_GAMEPAD;
    /**
     * @hash   -996220797
     * @symbol ?PICKRANGE_MOUSE@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_MOUSE;
    /**
     * @hash   361288501
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;
    /**
     * @hash   -1384305251
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM_SQR@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;
    /**
     * @hash   1191186285
     * @symbol ?PICKRANGE_TOUCH_CREATIVE@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;
    /**
     * @hash   -1265938671
     * @symbol ?PICKRANGE_TOUCH_SURVIVAL@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;
    /**
     * @hash   925096991
     * @symbol ?PICKRANGE_VR_CREATIVE@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_VR_CREATIVE;
    /**
     * @hash   -1532035653
     * @symbol ?PICKRANGE_VR_SURVIVAL@GameMode@@2MB
     */
    MCAPI static float const PICKRANGE_VR_SURVIVAL;

//private:
    /**
     * @hash   -1700439483
     * @symbol ?_canDestroy@GameMode@@AEAA_NAEBVBlockPos@@E@Z
     */
    MCAPI bool _canDestroy(class BlockPos const &, unsigned char);
    /**
     * @hash   -360117916
     * @symbol ?_canUseBlock@GameMode@@AEAA_NAEBVBlock@@@Z
     */
    MCAPI bool _canUseBlock(class Block const &);
    /**
     * @hash   616739117
     * @symbol ?_creativeDestroyBlock@GameMode@@AEAA_NAEBVBlockPos@@E@Z
     */
    MCAPI bool _creativeDestroyBlock(class BlockPos const &, unsigned char);

private:

};