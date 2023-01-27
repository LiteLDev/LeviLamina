/**
 * @file  ComparatorCapacitor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../SidePoweredComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorCapacitor.
 *
 */
class ComparatorCapacitor : public SidePoweredComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class Mode;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORCAPACITOR
public:
    class ComparatorCapacitor& operator=(class ComparatorCapacitor const &) = delete;
    ComparatorCapacitor(class ComparatorCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ComparatorCapacitor();
    /**
     * @hash   -2028265392
     * @vftbl  11
     * @symbol  ?addSource\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   -584732100
     * @vftbl  14
     * @symbol  ?evaluate\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   940117461
     * @vftbl  15
     * @symbol  ?cacheValues\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   -1586112458
     * @vftbl  16
     * @symbol  ?updateDependencies\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
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
     * @hash   -1823293942
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@ComparatorCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   42853464
     * @symbol  ??0ComparatorCapacitor\@\@QEAA\@XZ
     */
    MCAPI ComparatorCapacitor();
    /**
     * @hash   -2097497157
     * @symbol  ?clearAnalogStrength\@ComparatorCapacitor\@\@QEAAXE\@Z
     */
    MCAPI void clearAnalogStrength(unsigned char);
    /**
     * @hash   1888653820
     * @symbol  ?getOldStrength\@ComparatorCapacitor\@\@QEAAHXZ
     */
    MCAPI int getOldStrength();
    /**
     * @hash   -2078603608
     * @symbol  ?isSubtractMode\@ComparatorCapacitor\@\@QEAA_NXZ
     */
    MCAPI bool isSubtractMode();
    /**
     * @hash   875285156
     * @symbol  ?setAnalogStrength\@ComparatorCapacitor\@\@QEAAXHE\@Z
     */
    MCAPI void setAnalogStrength(int, unsigned char);
    /**
     * @hash   -819256607
     * @symbol  ?setMode\@ComparatorCapacitor\@\@QEAAXW4Mode\@1\@\@Z
     */
    MCAPI void setMode(enum class ComparatorCapacitor::Mode);

};