/**
 * @file  BaseCircuitComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "CircuitComponentList.hpp"

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
     * @vftbl  1
     * @symbol  ?getStrength\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl  2
     * @symbol  ?getDirection\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getDirection() const;
    /**
     * @vftbl  3
     * @symbol  ?setStrength\@BaseCircuitComponent\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @vftbl  4
     * @symbol  ?setDirection\@BaseCircuitComponent\@\@UEAAXE\@Z
     */
    virtual void setDirection(unsigned char);
    /**
     * @vftbl  5
     * @symbol  ?setConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setConsumePowerAnyDirection(bool);
    /**
     * @vftbl  6
     * @symbol  ?canConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  7
     * @symbol  ?canConsumerPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  8
     * @symbol  ?canStopPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @vftbl  9
     * @symbol  ?setStopPower\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setStopPower(bool);
    /**
     * @vftbl  10
     * @symbol  ?removeSource\@BaseCircuitComponent\@\@UEAA_NAEBVBlockPos\@\@PEBV1\@\@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @vftbl  11
     * @symbol  ?addSource\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @vftbl  12
     * @symbol  ?allowConnection\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  13
     * @symbol  ?checkLock\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  14
     * @symbol  ?evaluate\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  15
     * @symbol  ?cacheValues\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
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
     * @vftbl  18
     * @symbol  ?isHalfPulse\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
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
     * @vftbl  21
     * @symbol  ?isSecondaryPowered\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @vftbl  22
     * @symbol  ?removeFromAnySourceList\@BaseCircuitComponent\@\@MEAA_NPEBV1\@\@Z
     */
    virtual bool removeFromAnySourceList(class BaseCircuitComponent const *);
    /**
     * @vftbl  23
     * @symbol  ?getCircuitComponentType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl  24
     * @symbol  ?getCircuitComponentGroupType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentGroupType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @symbol  ?allowIndirect\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const;
    /**
     * @symbol  ?hasChildrenSource\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @symbol  ??0BaseCircuitComponent\@\@QEAA\@XZ
     */
    MCAPI BaseCircuitComponent();
    /**
     * @symbol  ?addSourceItem\@BaseCircuitComponent\@\@QEAAXAEBVItem\@CircuitComponentList\@\@\@Z
     */
    MCAPI void addSourceItem(class CircuitComponentList::Item const &);
    /**
     * @symbol  ?hasDirectPower\@BaseCircuitComponent\@\@QEAA_NXZ
     */
    MCAPI bool hasDirectPower();
    /**
     * @symbol  ?isRemoved\@BaseCircuitComponent\@\@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @symbol  ?removeFromSourceAndDestinationList\@BaseCircuitComponent\@\@QEAA?AV?$_Vector_iterator\@V?$_Vector_val\@U?$_Simple_types\@VItem\@CircuitComponentList\@\@\@std\@\@\@std\@\@\@std\@\@V23\@\@Z
     */
    MCAPI class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>> removeFromSourceAndDestinationList(class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<class CircuitComponentList::Item>>>);
    /**
     * @symbol  ?setRemoved\@BaseCircuitComponent\@\@QEAAXXZ
     */
    MCAPI void setRemoved();

//protected:
    /**
     * @symbol  ?trackPowerSource\@BaseCircuitComponent\@\@IEAA_NAEBVCircuitTrackingInfo\@\@H_NH1\@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const &, int, bool, int, bool);

protected:

};