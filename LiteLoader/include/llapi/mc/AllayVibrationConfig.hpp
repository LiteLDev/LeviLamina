/**
 * @file  AllayVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AllayVibrationConfig.
 *
 */
class AllayVibrationConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLAYVIBRATIONCONFIG
public:
    class AllayVibrationConfig& operator=(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AllayVibrationConfig();
    /**
     * @hash   -685808797
     * @vftbl  1
     * @symbol ?onSignalReceive@AllayVibrationConfig@@UEAAXAEAVBlockSource@@VBlockPos@@AEBVGameEvent@@PEAVActor@@M3@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /**
     * @hash   -1277615933
     * @vftbl  2
     * @symbol ?isValidVibration@AllayVibrationConfig@@UEAA_NAEBVGameEvent@@@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @hash   -1932384702
     * @vftbl  3
     * @symbol ?shouldListen@AllayVibrationConfig@@UEAA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
    /**
     * @hash   -448973446
     * @symbol ??0AllayVibrationConfig@@QEAA@AEAVActor@@G@Z
     */
    MCAPI AllayVibrationConfig(class Actor &, unsigned short);

};