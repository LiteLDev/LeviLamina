#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class BaseRailTransporter : public ::BaseCircuitComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASERAILTRANSPORTER
public:
    BaseRailTransporter& operator=(BaseRailTransporter const&) = delete;
    BaseRailTransporter(BaseRailTransporter const&)            = delete;
    BaseRailTransporter()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 11
     * @symbol ?addSource\@BaseRailTransporter\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@BaseRailTransporter\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@BaseRailTransporter\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
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
     * @symbol ?getCircuitComponentType\@BaseRailTransporter\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
};
