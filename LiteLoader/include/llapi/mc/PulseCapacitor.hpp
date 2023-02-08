/**
 * @file  PulseCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PulseCapacitor.
 *
 */
class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PulseCapacitor();
    /**
     * @hash   1776783785
     * @vftbl  1
     * @symbol  ?getStrength\@PulseCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   15352910
     * @vftbl  3
     * @symbol  ?setStrength\@PulseCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   792174619
     * @vftbl  6
     * @symbol  ?canConsumePowerAnyDirection\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   1753368910
     * @vftbl  7
     * @symbol  ?canConsumerPower\@PulseCapacitor\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   1836992089
     * @vftbl  12
     * @symbol  ?allowConnection\@PulseCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -758354529
     * @vftbl  14
     * @symbol  ?evaluate\@PulseCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
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
     * @hash   -1916276563
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@PulseCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -115470720
     * @vftbl  25
     * @symbol  ?getPoweroutDirection\@PulseCapacitor\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   463294021
     * @symbol  ??0PulseCapacitor\@\@QEAA\@XZ
     */
    MCAPI PulseCapacitor();

};