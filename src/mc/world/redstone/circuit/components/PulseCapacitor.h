#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class PulseCapacitor : public ::ProducerComponent {

public:
    bool                                  mPowered;
    bool                                  mNewPowered;
    const enum class CircuitComponentType mCircuitComponentType = CircuitComponentType::PulseCapacitor;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getStrength\@PulseCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setStrength\@PulseCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?allowConnection\@PulseCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?evaluate\@PulseCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@PulseCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@PulseCapacitor\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const; // NOLINT
    /**
     * @symbol ??0PulseCapacitor\@\@QEAA\@XZ
     */
    MCAPI PulseCapacitor(); // NOLINT
};
