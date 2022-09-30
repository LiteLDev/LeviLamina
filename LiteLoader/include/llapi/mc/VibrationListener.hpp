/**
 * @file  VibrationListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationListener.
 *
 */
class VibrationListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENER
public:
    class VibrationListener& operator=(class VibrationListener const &) = delete;
    VibrationListener(class VibrationListener const &) = delete;
    VibrationListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~VibrationListener();
    /**
     * @hash   1051841117
     * @vftbl  1
     * @symbol ?handleGameEvent@VibrationListener@@UEAAXAEBVGameEvent@@AEBUGameEventContext@@AEAVBlockSource@@@Z
     */
    virtual void handleGameEvent(class GameEvent const &, struct GameEventContext const &, class BlockSource &);
    /**
     * @hash   1878310202
     * @vftbl  2
     * @symbol ?getPositionSource@VibrationListener@@UEBAAEBVPositionSource@GameEvents@@XZ
     */
    virtual class GameEvents::PositionSource const & getPositionSource() const;
    /**
     * @hash   -1472945097
     * @vftbl  3
     * @symbol ?getRange@VibrationListener@@UEBAIXZ
     */
    virtual unsigned int getRange() const;
    /**
     * @hash   -81932712
     * @symbol ??0VibrationListener@@QEAA@$$QEAV?$unique_ptr@VVibrationListenerConfig@@U?$default_delete@VVibrationListenerConfig@@@std@@@std@@VPositionSource@GameEvents@@IW4OwnerType@0@@Z
     */
    MCAPI VibrationListener(std::unique_ptr<class VibrationListenerConfig> &&, class GameEvents::PositionSource, unsigned int, enum class VibrationListener::OwnerType);
    /**
     * @hash   2050355208
     * @symbol ?getLatestReceivedVibration@VibrationListener@@QEBAAEBVGameEvent@@XZ
     */
    MCAPI class GameEvent const & getLatestReceivedVibration() const;
    /**
     * @hash   -1906610369
     * @symbol ?load@VibrationListener@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void load(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -844350866
     * @symbol ?save@VibrationListener@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &) const;
    /**
     * @hash   1086991772
     * @symbol ?tick@VibrationListener@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void tick(class BlockSource &);

//private:
    /**
     * @hash   1280453766
     * @symbol ?_requestVibrationParticle@VibrationListener@@AEAAXAEAVBlockSource@@AEBVBlockPos@@M@Z
     */
    MCAPI void _requestVibrationParticle(class BlockSource &, class BlockPos const &, float);
    /**
     * @hash   -897796304
     * @symbol ?_isVibrationOccluded@VibrationListener@@CA_NAEAVBlockSource@@AEBVVec3@@1@Z
     */
    MCAPI static bool _isVibrationOccluded(class BlockSource &, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   998234084
     * @symbol ?_shouldIgnoreVibration@VibrationListener@@CA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
     */
    MCAPI static bool _shouldIgnoreVibration(class BlockSource &, class GameEvent const &, struct GameEventContext const &);

private:

};