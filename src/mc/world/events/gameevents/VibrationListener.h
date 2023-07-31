#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace GameEvents { class PositionSource; }
// clang-format on

class VibrationListener {
public:
    // VibrationListener inner types define
    enum class OwnerType {};

public:
    // prevent constructor by default
    VibrationListener& operator=(VibrationListener const&) = delete;
    VibrationListener(VibrationListener const&)            = delete;
    VibrationListener()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?handleGameEvent\@VibrationListener\@\@UEAAXAEBVGameEvent\@\@AEBUGameEventContext\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void handleGameEvent(class GameEvent const&, struct GameEventContext const&, class BlockSource&);
    /**
     * @vftbl 2
     * @symbol ?getPositionSource\@VibrationListener\@\@UEBAAEBVPositionSource\@GameEvents\@\@XZ
     */
    virtual class GameEvents::PositionSource const& getPositionSource() const;
    /**
     * @vftbl 3
     * @symbol ?getRange\@VibrationListener\@\@UEBAIXZ
     */
    virtual unsigned int getRange() const;
    /**
     * @symbol
     * ??0VibrationListener\@\@QEAA\@$$QEAV?$unique_ptr\@VVibrationListenerConfig\@\@U?$default_delete\@VVibrationListenerConfig\@\@\@std\@\@\@std\@\@VPositionSource\@GameEvents\@\@IW4OwnerType\@0\@\@Z
     */
    MCAPI VibrationListener(
        std::unique_ptr<class VibrationListenerConfig>&&,
        class GameEvents::PositionSource,
        unsigned int,
        enum class VibrationListener::OwnerType
    );
    /**
     * @symbol ?getLatestReceivedVibration\@VibrationListener\@\@QEBAAEBVGameEvent\@\@XZ
     */
    MCAPI class GameEvent const& getLatestReceivedVibration() const;
    /**
     * @symbol ?load\@VibrationListener\@\@QEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?save\@VibrationListener\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag&) const;
    /**
     * @symbol ?tick\@VibrationListener\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void tick(class BlockSource&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_isVibrationOccluded\@VibrationListener\@\@CA_NAEAVBlockSource\@\@AEBVVec3\@\@1\@Z
     */
    MCAPI static bool _isVibrationOccluded(class BlockSource&, class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?_requestVibrationParticle\@VibrationListener\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@M\@Z
     */
    MCAPI void _requestVibrationParticle(class BlockSource&, class BlockPos const&, float);
    /**
     * @symbol
     * ?_shouldIgnoreVibration\@VibrationListener\@\@CA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    MCAPI static bool
    _shouldIgnoreVibration(class BlockSource&, class GameEvent const&, struct GameEventContext const&);
    /**
     * @symbol ?_tickInternal\@VibrationListener\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _tickInternal(class BlockSource&);
    /**
     * @symbol
     * ?_trySendSneakCloseToSculkSensorEventPacket\@VibrationListener\@\@AEAAXAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void
    _trySendSneakCloseToSculkSensorEventPacket(class BlockSource&, class GameEvent const&, struct GameEventContext const&, class Vec3 const&);
    // NOLINTEND
};
