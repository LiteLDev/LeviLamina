/**
 * @file  ProducerComponent.hpp
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
 * @brief MC class ProducerComponent.
 *
 */
class ProducerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRODUCERCOMPONENT
public:
    class ProducerComponent& operator=(class ProducerComponent const &) = delete;
    ProducerComponent(class ProducerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ProducerComponent();
    /**
     * @hash   -225901808
     * @vftbl  3
     * @symbol  ?setStrength\@ProducerComponent\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   -256012144
     * @vftbl  8
     * @symbol  ?canStopPower\@ProducerComponent\@\@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @hash   -911591009
     * @vftbl  9
     * @symbol  ?setStopPower\@ProducerComponent\@\@UEAAX_N\@Z
     */
    virtual void setStopPower(bool);
    /**
     * @hash   113076539
     * @vftbl  12
     * @symbol  ?allowConnection\@ProducerComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   202817053
     * @vftbl  14
     * @symbol  ?evaluate\@ProducerComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
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
     * @hash   151787083
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@ProducerComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   1588212919
     * @symbol  ??0ProducerComponent\@\@QEAA\@XZ
     */
    MCAPI ProducerComponent();
    /**
     * @hash   155388178
     * @symbol  ?allowAttachments\@ProducerComponent\@\@QEAAX_N\@Z
     */
    MCAPI void allowAttachments(bool);

};