/**
 * @file  SidePoweredComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "CircuitComponentList.hpp"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SidePoweredComponent.
 *
 */
class SidePoweredComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEPOWEREDCOMPONENT
public:
    class SidePoweredComponent& operator=(class SidePoweredComponent const &) = delete;
    SidePoweredComponent(class SidePoweredComponent const &) = delete;
    SidePoweredComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SidePoweredComponent();
    /**
     * @vftbl  6
     * @symbol  ?canConsumePowerAnyDirection\@SidePoweredComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  7
     * @symbol  ?canConsumerPower\@SidePoweredComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  10
     * @symbol  ?removeSource\@SidePoweredComponent\@\@UEAA_NAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @vftbl  12
     * @symbol  ?allowConnection\@SidePoweredComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  22
     * @symbol  ?removeFromAnySourceList\@SidePoweredComponent\@\@MEAA_NPEBVBaseCircuitComponent\@\@\@Z
     */
    virtual bool removeFromAnySourceList(class BaseCircuitComponent const *);
    /**
     * @vftbl  25
     * @symbol  ?getPoweroutDirection\@SidePoweredComponent\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol  ?addToSideComponents\@SidePoweredComponent\@\@QEAAXAEAV?$_Vector_iterator\@V?$_Vector_val\@U?$_Simple_types\@VItem\@CircuitComponentList\@\@\@std\@\@\@std\@\@\@std\@\@PEAVBaseCircuitComponent\@\@\@Z
     */
    MCAPI void addToSideComponents(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>> &, class BaseCircuitComponent *);

};