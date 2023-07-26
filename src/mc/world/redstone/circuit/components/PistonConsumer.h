#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {

public:
    // prevent constructor by default
    PistonConsumer& operator=(PistonConsumer const&) = delete;
    PistonConsumer(PistonConsumer const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@PistonConsumer\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?addSource\@PistonConsumer\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?allowConnection\@PistonConsumer\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&); // NOLINT
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
     * @symbol ?getCircuitComponentType\@PistonConsumer\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @symbol ??0PistonConsumer\@\@QEAA\@XZ
     */
    MCAPI PistonConsumer(); // NOLINT
    /**
     * @symbol ?setBlockPowerFace\@PistonConsumer\@\@QEAAXE\@Z
     */
    MCAPI void setBlockPowerFace(unsigned char); // NOLINT
};
