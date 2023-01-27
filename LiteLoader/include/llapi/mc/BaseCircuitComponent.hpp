/**
 * @file  BaseCircuitComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../CircuitComponentList.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

// clang-format off
enum class CircuitComponentType : uint64_t {
    UNDEFINED        = 0LL,
    CAPACITOR        = 1129530177LL,
    CONSUMER         = 1129530179LL,
    POWERED_BLOCK    = 1129533506LL,
    PRODUCER         = 1129533507LL,
    BASE             = 1129534275LL,
    TRANSPORTER      = 1129534546LL,
    COMPARATOR       = 1296253778LL,
    PULSE_CAPACITOR  = 1296257091LL,
    PISTON           = 1296257097LL,
    RAIL_TRANSPORTER = 1296257106LL,
    REPEATER         = 1296257618LL,
    REDSTONE_TORCH   = 1296258115LL,
};
// clang-format on

#undef BEFORE_EXTRA

/**
 * @brief MC class BaseCircuitComponent.
 *
 */
class BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECIRCUITCOMPONENT
public:
    class BaseCircuitComponent& operator=(class BaseCircuitComponent const &) = delete;
    BaseCircuitComponent(class BaseCircuitComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BaseCircuitComponent();
    /**
     * @hash   1859014093
     * @vftbl  1
     * @symbol  ?getStrength\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   -1732137921
     * @vftbl  2
     * @symbol  ?getDirection\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getDirection() const;
    /**
     * @hash   -935640486
     * @vftbl  3
     * @symbol  ?setStrength\@BaseCircuitComponent\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   -1061504466
     * @vftbl  4
     * @symbol  ?setDirection\@BaseCircuitComponent\@\@UEAAXE\@Z
     */
    virtual void setDirection(unsigned char);
    /**
     * @hash   823273516
     * @vftbl  5
     * @symbol  ?setConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setConsumePowerAnyDirection(bool);
    /**
     * @hash   -347966529
     * @vftbl  6
     * @symbol  ?canConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   -430359438
     * @vftbl  7
     * @symbol  ?canConsumerPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   87088998
     * @vftbl  8
     * @symbol  ?canStopPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @hash   -92716727
     * @vftbl  9
     * @symbol  ?setStopPower\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setStopPower(bool);
    /**
     * @hash   1750760305
     * @vftbl  10
     * @symbol  ?removeSource\@BaseCircuitComponent\@\@UEAA_NAEBVBlockPos\@\@PEBV1\@\@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   1708103495
     * @vftbl  11
     * @symbol  ?addSource\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   666088757
     * @vftbl  12
     * @symbol  ?allowConnection\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1680654693
     * @vftbl  13
     * @symbol  ?checkLock\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   289389411
     * @vftbl  14
     * @symbol  ?evaluate\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   2067095724
     * @vftbl  15
     * @symbol  ?cacheValues\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   1073093837
     * @vftbl  16
     * @symbol  ?updateDependencies\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol  __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   -1978397073
     * @vftbl  18
     * @symbol  ?isHalfPulse\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @hash   -1835177274
     * @vftbl  19
     * @symbol  ?hasSource\@BaseCircuitComponent\@\@UEAA_NAEAV1\@\@Z
     */
    virtual bool hasSource(class BaseCircuitComponent &);
    /**
     * @vftbl  20
     * @symbol  __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -816527251
     * @vftbl  21
     * @symbol  ?isSecondaryPowered\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @hash   -1996325452
     * @vftbl  22
     * @symbol  ?removeFromAnySourceList\@BaseCircuitComponent\@\@MEAA_NPEBV1\@\@Z
     */
    virtual bool removeFromAnySourceList(class BaseCircuitComponent const *);
    /**
     * @hash   790664545
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -1464794036
     * @vftbl  24
     * @symbol  ?getCircuitComponentGroupType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentGroupType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @hash   412050474
     * @symbol  ?allowIndirect\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const;
    /**
     * @hash   -1206680953
     * @symbol  ?hasChildrenSource\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @hash   1569254385
     * @symbol  ??0BaseCircuitComponent\@\@QEAA\@XZ
     */
    MCAPI BaseCircuitComponent();
    /**
     * @hash   1494228030
     * @symbol  ?addSourceItem\@BaseCircuitComponent\@\@QEAAXAEBVItem\@CircuitComponentList\@\@\@Z
     */
    MCAPI void addSourceItem(class CircuitComponentList::Item const &);
    /**
     * @hash   -318307384
     * @symbol  ?hasDirectPower\@BaseCircuitComponent\@\@QEAA_NXZ
     */
    MCAPI bool hasDirectPower();
    /**
     * @hash   2096771890
     * @symbol  ?isRemoved\@BaseCircuitComponent\@\@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @hash   -1305674734
     * @symbol  ?removeFromSourceAndDestinationList\@BaseCircuitComponent\@\@QEAA?AV?$_Vector_iterator\@V?$_Vector_val\@U?$_Simple_types\@VItem\@CircuitComponentList\@\@\@std\@\@\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>> removeFromSourceAndDestinationList(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>>);
    /**
     * @hash   -751204571
     * @symbol  ?setRemoved\@BaseCircuitComponent\@\@QEAAXXZ
     */
    MCAPI void setRemoved();

//protected:
    /**
     * @hash   -1565341080
     * @symbol  ?trackPowerSource\@BaseCircuitComponent\@\@IEAA_NAEBVCircuitTrackingInfo\@\@H_NH1\@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const &, int, bool, int, bool);

protected:

};