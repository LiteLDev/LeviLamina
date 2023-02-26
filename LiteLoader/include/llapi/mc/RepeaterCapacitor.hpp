/**
 * @file  RepeaterCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SidePoweredComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeaterCapacitor.
 *
 */
class RepeaterCapacitor : public SidePoweredComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATERCAPACITOR
public:
    class RepeaterCapacitor& operator=(class RepeaterCapacitor const &) = delete;
    RepeaterCapacitor(class RepeaterCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RepeaterCapacitor();
    /**
     * @vftbl  1
     * @symbol  ?getStrength\@RepeaterCapacitor\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl  3
     * @symbol  ?setStrength\@RepeaterCapacitor\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @vftbl  11
     * @symbol  ?addSource\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  13
     * @symbol  ?checkLock\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol  ?evaluate\@RepeaterCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  15
     * @symbol  ?cacheValues\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  16
     * @symbol  ?updateDependencies\@RepeaterCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
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
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@RepeaterCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @symbol  ??0RepeaterCapacitor\@\@QEAA\@XZ
     */
    MCAPI RepeaterCapacitor();
    /**
     * @symbol  ?setDelay\@RepeaterCapacitor\@\@QEAAXH\@Z
     */
    MCAPI void setDelay(int);

};