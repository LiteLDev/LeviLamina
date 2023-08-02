#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class ConsumerComponent : public ::BaseCircuitComponent {

public:
    bool                       mSecondaryPowered;
    bool                       mPropagatePower;
    bool                       mPromotedToProducer;
    bool                       mAcceptHalfPulse;
    bool                       mAcceptSameDirection;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ConsumerComponent;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@ConsumerComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl 11
     * @symbol ?addSource\@ConsumerComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 12
     * @symbol ?allowConnection\@ConsumerComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@ConsumerComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
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
     * @vftbl 21
     * @symbol ?isSecondaryPowered\@ConsumerComponent\@\@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@ConsumerComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONSUMERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ConsumerComponent();
#endif
    /**
     * @symbol ??0ConsumerComponent\@\@QEAA\@XZ
     */
    MCAPI ConsumerComponent();
    // NOLINTEND
};
