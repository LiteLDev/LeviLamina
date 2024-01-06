#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/GameEventListener.h"

// auto generated forward declare list
// clang-format off
namespace GameEvents { class PositionSource; }
// clang-format on

class VibrationListener : public ::GameEventListener {
public:
    // VibrationListener inner types define
    enum class OwnerType {};

public:
    // prevent constructor by default
    VibrationListener& operator=(VibrationListener const&);
    VibrationListener(VibrationListener const&);
    VibrationListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VibrationListener@@UEAA@XZ
    virtual ~VibrationListener() = default;

    // vIndex: 1, symbol:
    // ?handleGameEvent@VibrationListener@@UEAAXAEBVGameEvent@@AEBUGameEventContext@@AEAVBlockSource@@@Z
    virtual void handleGameEvent(class GameEvent const&, struct GameEventContext const&, class BlockSource& region);

    // vIndex: 2, symbol: ?getPositionSource@VibrationListener@@UEBAAEBVPositionSource@GameEvents@@XZ
    virtual class GameEvents::PositionSource const& getPositionSource() const;

    // vIndex: 3, symbol: ?getRange@VibrationListener@@UEBAIXZ
    virtual uint getRange() const;

    // vIndex: 4, symbol: ?getDeliveryMode@GameEventListener@@UEBA?AW4DeliveryMode@1@XZ
    virtual ::GameEventListener::DeliveryMode getDeliveryMode() const;

    // symbol:
    // ??0VibrationListener@@QEAA@$$QEAV?$unique_ptr@VVibrationListenerConfig@@U?$default_delete@VVibrationListenerConfig@@@std@@@std@@VPositionSource@GameEvents@@IW4OwnerType@0@@Z
    MCAPI VibrationListener(
        std::unique_ptr<class VibrationListenerConfig>&& config,
        class GameEvents::PositionSource,
        uint                           range,
        ::VibrationListener::OwnerType ownerType
    );

    // symbol: ?getLatestReceivedVibration@VibrationListener@@QEBAAEBVGameEvent@@XZ
    MCAPI class GameEvent const& getLatestReceivedVibration() const;

    // symbol: ?load@VibrationListener@@QEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?save@VibrationListener@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag& tag) const;

    // symbol: ?tick@VibrationListener@@QEAAXAEAVBlockSource@@@Z
    MCAPI void tick(class BlockSource& region);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_requestVibrationParticle@VibrationListener@@AEAAXAEAVBlockSource@@AEBVBlockPos@@M@Z
    MCAPI void _requestVibrationParticle(class BlockSource& region, class BlockPos const& origin, float);

    // symbol: ?_tryAdvanceInFlightVibration@VibrationListener@@AEAA_NAEAVBlockSource@@@Z
    MCAPI bool _tryAdvanceInFlightVibration(class BlockSource&);

    // symbol:
    // ?_trySendSneakCloseToSculkSensorEventPacket@VibrationListener@@AEAAXAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@AEBVVec3@@@Z
    MCAPI void
    _trySendSneakCloseToSculkSensorEventPacket(class BlockSource& region, class GameEvent const&, struct GameEventContext const&, class Vec3 const&);

    // symbol: ?_isVibrationOccluded@VibrationListener@@CA_NAEAVBlockSource@@AEBVVec3@@1@Z
    MCAPI static bool
    _isVibrationOccluded(class BlockSource& region, class Vec3 const& origin, class Vec3 const& targetPos);

    // symbol: ?_shouldIgnoreVibration@VibrationListener@@CA_NAEAVBlockSource@@AEBVGameEvent@@AEBUGameEventContext@@@Z
    MCAPI static bool
    _shouldIgnoreVibration(class BlockSource& region, class GameEvent const&, struct GameEventContext const&);

    // NOLINTEND
};
