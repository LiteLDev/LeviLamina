/**
 * @file  GameMode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~GameMode();
    /**
     * @hash   904297550
     * @vftbl  1
     * @symbol  ?startDestroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@EAEA_N\@Z
     */
    virtual bool startDestroyBlock(class BlockPos const &, unsigned char, bool &);
    /**
     * @hash   1434798138
     * @vftbl  2
     * @symbol  ?destroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@E\@Z
     */
    virtual bool destroyBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   -612772199
     * @vftbl  3
     * @symbol  ?continueDestroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@EAEBVVec3\@\@AEA_N\@Z
     */
    virtual bool continueDestroyBlock(class BlockPos const &, unsigned char, class Vec3 const &, bool &);
    /**
     * @hash   -436773933
     * @vftbl  4
     * @symbol  ?stopDestroyBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    virtual void stopDestroyBlock(class BlockPos const &);
    /**
     * @hash   767133830
     * @vftbl  5
     * @symbol  ?startBuildBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@E\@Z
     */
    virtual void startBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   1992001462
     * @vftbl  6
     * @symbol  ?buildBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@E_N\@Z
     */
    virtual bool buildBlock(class BlockPos const &, unsigned char, bool);
    /**
     * @hash   -1958340693
     * @vftbl  7
     * @symbol  ?continueBuildBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@E\@Z
     */
    virtual void continueBuildBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   1106650163
     * @vftbl  8
     * @symbol  ?stopBuildBlock\@GameMode\@\@UEAAXXZ
     */
    virtual void stopBuildBlock();
    /**
     * @hash   728316847
     * @vftbl  9
     * @symbol  ?tick\@GameMode\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -723823551
     * @vftbl  10
     * @symbol  ?getPickRange\@GameMode\@\@UEAAMAEBW4InputMode\@\@_N\@Z
     */
    virtual float getPickRange(enum class InputMode const &, bool);
    /**
     * @hash   -161354327
     * @vftbl  11
     * @symbol  ?useItem\@GameMode\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool useItem(class ItemStack &);
    /**
     * @hash   -531761741
     * @vftbl  12
     * @symbol  ?useItemOn\@GameMode\@\@UEAA_NAEAVItemStack\@\@AEBVBlockPos\@\@EAEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    virtual bool useItemOn(class ItemStack &, class BlockPos const &, unsigned char, class Vec3 const &, class Block const *);
    /**
     * @hash   -1267653963
     * @vftbl  13
     * @symbol  ?interact\@GameMode\@\@UEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    virtual bool interact(class Actor &, class Vec3 const &);
    /**
     * @hash   -884193061
     * @vftbl  14
     * @symbol  ?attack\@GameMode\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool attack(class Actor &);
    /**
     * @hash   404479010
     * @vftbl  15
     * @symbol  ?releaseUsingItem\@GameMode\@\@UEAAXXZ
     */
    virtual void releaseUsingItem();
    /**
     * @hash   -1402510141
     * @vftbl  16
     * @symbol  ?setTrialMode\@GameMode\@\@UEAAX_N\@Z
     */
    virtual void setTrialMode(bool);
    /**
     * @hash   -2135166386
     * @vftbl  17
     * @symbol  ?isInTrialMode\@GameMode\@\@UEAA_NXZ
     */
    virtual bool isInTrialMode();
    /**
     * @hash   879843644
     * @vftbl  18
     * @symbol  ?registerUpsellScreenCallback\@GameMode\@\@UEAAXV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    virtual void registerUpsellScreenCallback(class std::function<void (bool)>);
    /**
     * @hash   996467304
     * @symbol  ??0GameMode\@\@QEAA\@AEAVPlayer\@\@V?$unique_ptr\@UIGameModeTimer\@\@U?$default_delete\@UIGameModeTimer\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UIGameModeMessenger\@\@U?$default_delete\@UIGameModeMessenger\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI GameMode(class Player &, std::unique_ptr<struct IGameModeTimer>, std::unique_ptr<struct IGameModeMessenger>);
    /**
     * @hash   -101052160
     * @symbol  ?_startDestroyBlock\@GameMode\@\@QEAA_NAEBVBlockPos\@\@AEBVVec3\@\@EAEA_N\@Z
     */
    MCAPI bool _startDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &);
    /**
     * @hash   1280796577
     * @symbol  ?_tickContinueDestroyBlock\@GameMode\@\@QEAA_NAEBVBlockPos\@\@AEBVVec3\@\@EAEA_NAEBV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI bool _tickContinueDestroyBlock(class BlockPos const &, class Vec3 const &, unsigned char, bool &, class std::function<void (void)> const &);
    /**
     * @hash   -360362281
     * @symbol  ?baseUseItem\@GameMode\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool baseUseItem(class ItemStack &);
    /**
     * @hash   1999277164
     * @symbol  ?createBlockBreakCaptureScope\@GameMode\@\@QEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@V?$function\@$$A6AXAEBVItemStack\@\@0AEBVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::final_action<class std::function<void (void)>> createBlockBreakCaptureScope(class std::function<void (class ItemStack const &, class ItemStack const &, class BlockPos const &)>);
    /**
     * @hash   218126615
     * @symbol  ?getDestroyBlockFace\@GameMode\@\@QEBAEXZ
     */
    MCAPI unsigned char getDestroyBlockFace() const;
    /**
     * @hash   -1884433560
     * @symbol  ?getDestroyBlockPos\@GameMode\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getDestroyBlockPos() const;
    /**
     * @hash   1630040648
     * @symbol  ?getDestroyProgress\@GameMode\@\@QEAAMXZ
     */
    MCAPI float getDestroyProgress();
    /**
     * @hash   2051808099
     * @symbol  ?getDestroyRate\@GameMode\@\@QEAAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroyRate(class Block const &);
    /**
     * @hash   -858096202
     * @symbol  ?getMaxPickRange\@GameMode\@\@QEAAMXZ
     */
    MCAPI float getMaxPickRange();
    /**
     * @hash   190709144
     * @symbol  ?getMaxPickRangeSqr\@GameMode\@\@QEAAMXZ
     */
    MCAPI float getMaxPickRangeSqr();
    /**
     * @hash   -915644132
     * @symbol  ?isLastBuildBlockInteractive\@GameMode\@\@QEBA_NXZ
     */
    MCAPI bool isLastBuildBlockInteractive() const;
    /**
     * @hash   487739913
     * @symbol  ?PICKRANGE_CREATIVE_MAXIMUM\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM;
    /**
     * @hash   -822084495
     * @symbol  ?PICKRANGE_CREATIVE_MAXIMUM_SQR\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR;
    /**
     * @hash   1535829687
     * @symbol  ?PICKRANGE_GAMEPAD\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_GAMEPAD;
    /**
     * @hash   -28778253
     * @symbol  ?PICKRANGE_MOUSE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_MOUSE;
    /**
     * @hash   1328731045
     * @symbol  ?PICKRANGE_SURVIVAL_MAXIMUM\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM;
    /**
     * @hash   -416862707
     * @symbol  ?PICKRANGE_SURVIVAL_MAXIMUM_SQR\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR;
    /**
     * @hash   -2136338467
     * @symbol  ?PICKRANGE_TOUCH_CREATIVE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE;
    /**
     * @hash   -298496127
     * @symbol  ?PICKRANGE_TOUCH_SURVIVAL\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL;
    /**
     * @hash   1892539535
     * @symbol  ?PICKRANGE_VR_CREATIVE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_VR_CREATIVE;
    /**
     * @hash   -564593109
     * @symbol  ?PICKRANGE_VR_SURVIVAL\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_VR_SURVIVAL;

//private:
    /**
     * @hash   1970108453
     * @symbol  ?_canDestroy\@GameMode\@\@AEAA_NAEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _canDestroy(class BlockPos const &, unsigned char);
    /**
     * @hash   -984537276
     * @symbol  ?_canUseBlock\@GameMode\@\@AEAA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canUseBlock(class Block const &);
    /**
     * @hash   -7680243
     * @symbol  ?_creativeDestroyBlock\@GameMode\@\@AEAA_NAEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _creativeDestroyBlock(class BlockPos const &, unsigned char);
    /**
     * @hash   -1736237937
     * @symbol  ?_enableBlockBreakDelay\@GameMode\@\@AEBA_NXZ
     */
    MCAPI bool _enableBlockBreakDelay() const;

private:

};