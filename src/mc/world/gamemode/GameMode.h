#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameMode {

public:
    // prevent constructor by default
    GameMode& operator=(GameMode const&) = delete;
    GameMode(GameMode const&)            = delete;
    GameMode()                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?startDestroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@EAEA_N\@Z
     */
    virtual bool startDestroyBlock(class BlockPos const&, unsigned char, bool&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?destroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@E\@Z
     */
    virtual bool destroyBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?continueDestroyBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@EAEBVVec3\@\@AEA_N\@Z
     */
    virtual bool continueDestroyBlock(class BlockPos const&, unsigned char, class Vec3 const&, bool&); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?stopDestroyBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@\@Z
     */
    virtual void stopDestroyBlock(class BlockPos const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?startBuildBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@E\@Z
     */
    virtual void startBuildBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?buildBlock\@GameMode\@\@UEAA_NAEBVBlockPos\@\@E_N\@Z
     */
    virtual bool buildBlock(class BlockPos const&, unsigned char, bool); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?continueBuildBlock\@GameMode\@\@UEAAXAEBVBlockPos\@\@E\@Z
     */
    virtual void continueBuildBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?stopBuildBlock\@GameMode\@\@UEAAXXZ
     */
    virtual void stopBuildBlock(); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?tick\@GameMode\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?getPickRange\@GameMode\@\@UEAAMAEBW4InputMode\@\@_N\@Z
     */
    virtual float getPickRange(enum class InputMode const&, bool); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?useItem\@GameMode\@\@UEAA_NAEAVItemStack\@\@\@Z
     */
    virtual bool useItem(class ItemStack&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?useItemOn\@GameMode\@\@UEAA?AVInteractionResult\@\@AEAVItemStack\@\@AEBVBlockPos\@\@EAEBVVec3\@\@PEBVBlock\@\@\@Z
     */
    virtual class InteractionResult
    useItemOn(class ItemStack&, class BlockPos const&, unsigned char, class Vec3 const&, class Block const*); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?interact\@GameMode\@\@UEAA_NAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    virtual bool interact(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?attack\@GameMode\@\@UEAA_NAEAVActor\@\@\@Z
     */
    virtual bool attack(class Actor&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?releaseUsingItem\@GameMode\@\@UEAAXXZ
     */
    virtual void releaseUsingItem(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?setTrialMode\@GameMode\@\@UEAAX_N\@Z
     */
    virtual void setTrialMode(bool); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?isInTrialMode\@GameMode\@\@UEAA_NXZ
     */
    virtual bool isInTrialMode(); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?registerUpsellScreenCallback\@GameMode\@\@UEAAXV?$function\@$$A6AX_N\@Z\@std\@\@\@Z
     */
    virtual void registerUpsellScreenCallback(class std::function<void(bool)>); // NOLINT
    /**
     * @symbol
     * ??0GameMode\@\@QEAA\@AEAVPlayer\@\@V?$unique_ptr\@UIGameModeTimer\@\@U?$default_delete\@UIGameModeTimer\@\@\@std\@\@\@std\@\@V?$unique_ptr\@UIGameModeMessenger\@\@U?$default_delete\@UIGameModeMessenger\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI
    GameMode(class Player&, std::unique_ptr<struct IGameModeTimer>, std::unique_ptr<struct IGameModeMessenger>); // NOLINT
    /**
     * @symbol ?_startDestroyBlock\@GameMode\@\@QEAA_NAEBVBlockPos\@\@AEBVVec3\@\@EAEA_N\@Z
     */
    MCAPI bool _startDestroyBlock(class BlockPos const&, class Vec3 const&, unsigned char, bool&); // NOLINT
    /**
     * @symbol
     * ?_tickContinueDestroyBlock\@GameMode\@\@QEAA_NAEBVBlockPos\@\@AEBVVec3\@\@EAEA_NAEBV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI bool
    _tickContinueDestroyBlock(class BlockPos const&, class Vec3 const&, unsigned char, bool&, class std::function<void(void)> const&); // NOLINT
    /**
     * @symbol ?baseUseItem\@GameMode\@\@QEAA_NAEAVItemStack\@\@\@Z
     */
    MCAPI bool baseUseItem(class ItemStack&); // NOLINT
    /**
     * @symbol
     * ?createBlockBreakCaptureScope\@GameMode\@\@QEAA?AV?$final_action\@V?$function\@$$A6AXXZ\@std\@\@\@gsl\@\@V?$function\@$$A6AXAEBVItemStack\@\@0AEBVBlockPos\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class gsl::final_action<class std::function<void(void)>>
        createBlockBreakCaptureScope(class std::function<
                                     void(class ItemStack const&, class ItemStack const&, class BlockPos const&)>); // NOLINT
    /**
     * @symbol ?getDestroyBlockFace\@GameMode\@\@QEBAEXZ
     */
    MCAPI unsigned char getDestroyBlockFace() const; // NOLINT
    /**
     * @symbol ?getDestroyBlockPos\@GameMode\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const& getDestroyBlockPos() const; // NOLINT
    /**
     * @symbol ?getDestroyRate\@GameMode\@\@QEAAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroyRate(class Block const&); // NOLINT
    /**
     * @symbol ?getMaxPickRange\@GameMode\@\@QEAAMXZ
     */
    MCAPI float getMaxPickRange(); // NOLINT
    /**
     * @symbol ?getMaxPickRangeSqr\@GameMode\@\@QEAAMXZ
     */
    MCAPI float getMaxPickRangeSqr(); // NOLINT
    /**
     * @symbol ?isLastBuildBlockInteractive\@GameMode\@\@QEBA_NXZ
     */
    MCAPI bool isLastBuildBlockInteractive() const; // NOLINT
    /**
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM; // NOLINT
    /**
     * @symbol ?PICKRANGE_CREATIVE_MAXIMUM_SQR\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_CREATIVE_MAXIMUM_SQR; // NOLINT
    /**
     * @symbol ?PICKRANGE_GAMEPAD\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_GAMEPAD; // NOLINT
    /**
     * @symbol ?PICKRANGE_MOUSE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_MOUSE; // NOLINT
    /**
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM; // NOLINT
    /**
     * @symbol ?PICKRANGE_SURVIVAL_MAXIMUM_SQR\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_SURVIVAL_MAXIMUM_SQR; // NOLINT
    /**
     * @symbol ?PICKRANGE_TOUCH_CREATIVE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_CREATIVE; // NOLINT
    /**
     * @symbol ?PICKRANGE_TOUCH_SURVIVAL\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_TOUCH_SURVIVAL; // NOLINT
    /**
     * @symbol ?PICKRANGE_VR_CREATIVE\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_VR_CREATIVE; // NOLINT
    /**
     * @symbol ?PICKRANGE_VR_SURVIVAL\@GameMode\@\@2MB
     */
    MCAPI static float const PICKRANGE_VR_SURVIVAL; // NOLINT

    // private:
    /**
     * @symbol ?_canDestroy\@GameMode\@\@AEAA_NAEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _canDestroy(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @symbol ?_canUseBlock\@GameMode\@\@AEAA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canUseBlock(class Block const&); // NOLINT
    /**
     * @symbol ?_creativeDestroyBlock\@GameMode\@\@AEAA_NAEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _creativeDestroyBlock(class BlockPos const&, unsigned char); // NOLINT
    /**
     * @symbol ?_enableBlockBreakDelay\@GameMode\@\@AEBA_NXZ
     */
    MCAPI bool _enableBlockBreakDelay() const; // NOLINT

private:
};
