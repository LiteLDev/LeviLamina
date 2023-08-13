#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CapacitorComponent.h"

class PulseCapacitor : public ::CapacitorComponent {

public:
    // prevent constructor by default
    PulseCapacitor& operator=(PulseCapacitor const&) = delete;
    PulseCapacitor(PulseCapacitor const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStrength\@PulseCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl 3
     * @symbol ?setStrength\@PulseCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl 12
     * @symbol ?allowConnection\@PulseCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@PulseCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@PulseCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@PulseCapacitor\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0PulseCapacitor\@\@QEAA\@XZ
     */
    MCAPI PulseCapacitor();
    // NOLINTEND
};
