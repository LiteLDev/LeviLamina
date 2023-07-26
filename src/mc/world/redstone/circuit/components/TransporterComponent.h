#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class TransporterComponent : public ::BaseCircuitComponent {

public:
    // prevent constructor by default
    TransporterComponent& operator=(TransporterComponent const&) = delete;
    TransporterComponent(TransporterComponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@TransporterComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?addSource\@TransporterComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@TransporterComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?evaluate\@TransporterComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@TransporterComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&); // NOLINT
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
     * @symbol ?getCircuitComponentType\@TransporterComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @symbol ??0TransporterComponent\@\@QEAA\@XZ
     */
    MCAPI TransporterComponent(); // NOLINT
};
