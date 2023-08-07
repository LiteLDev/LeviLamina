#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class SidePoweredComponent : public ::ProducerComponent {

public:
    CircuitComponentList mSideComponents;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@SidePoweredComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@SidePoweredComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl 10
     * @symbol ?removeSource\@SidePoweredComponent\@\@UEAAXAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@SidePoweredComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
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
     * @vftbl 22
     * @symbol ?removeFromAnySourceList\@SidePoweredComponent\@\@MEAAXPEBVBaseCircuitComponent\@\@\@Z
     */
    virtual void removeFromAnySourceList(class BaseCircuitComponent const*);
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@SidePoweredComponent\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIDEPOWEREDCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SidePoweredComponent();
#endif
    /**
     * @symbol
     * ?addToSideComponents\@SidePoweredComponent\@\@QEAAXAEAV?$_Vector_iterator\@V?$_Vector_val\@U?$_Simple_types\@VItem\@CircuitComponentList\@\@\@std\@\@\@std\@\@\@std\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void
    addToSideComponents(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<class CircuitComponentList::Item>>>&, class BaseCircuitComponent*);
    // NOLINTEND
};
