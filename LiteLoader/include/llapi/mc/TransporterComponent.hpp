/**
 * @file  TransporterComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TransporterComponent.
 *
 */
class TransporterComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSPORTERCOMPONENT
public:
    class TransporterComponent& operator=(class TransporterComponent const &) = delete;
    TransporterComponent(class TransporterComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TransporterComponent();
    /**
     * @hash   -4184160
     * @vftbl  7
     * @symbol  ?canConsumerPower\@TransporterComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -1418017403
     * @vftbl  11
     * @symbol  ?addSource\@TransporterComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -560254393
     * @vftbl  12
     * @symbol  ?allowConnection\@TransporterComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1075222255
     * @vftbl  14
     * @symbol  ?evaluate\@TransporterComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -573914854
     * @vftbl  15
     * @symbol  ?cacheValues\@TransporterComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
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
     * @hash   2111370063
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@TransporterComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   542908643
     * @symbol  ??0TransporterComponent\@\@QEAA\@XZ
     */
    MCAPI TransporterComponent();

};