/**
 * @file  MC/BaseCircuitComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~BaseCircuitComponent();
    /**
     * @hash   -1679836803
     * @vftbl  1
     * @symbol ?getStrength@BaseCircuitComponent@@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @hash   -1814458033
     * @vftbl  2
     * @symbol ?getDirection@BaseCircuitComponent@@UEBAHXZ
     */
    virtual int getDirection() const;
    /**
     * @hash   1352000794
     * @vftbl  3
     * @symbol ?setStrength@BaseCircuitComponent@@UEAAXH@Z
     */
    virtual void setStrength(int);
    /**
     * @hash   -222653010
     * @vftbl  4
     * @symbol ?setDirection@BaseCircuitComponent@@UEAAXE@Z
     */
    virtual void setDirection(unsigned char);
    /**
     * @hash   -45024580
     * @vftbl  5
     * @symbol ?setConsumePowerAnyDirection@BaseCircuitComponent@@UEAAX_N@Z
     */
    virtual void setConsumePowerAnyDirection(bool);
    /**
     * @hash   -2018931761
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @hash   -530979982
     * @vftbl  7
     * @symbol ?canConsumerPower@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -13531546
     * @vftbl  8
     * @symbol ?canStopPower@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @hash   -184603703
     * @vftbl  9
     * @symbol ?setStopPower@BaseCircuitComponent@@UEAAX_N@Z
     */
    virtual void setStopPower(bool);
    /**
     * @hash   1058010001
     * @vftbl  10
     * @symbol ?removeSource@BaseCircuitComponent@@UEAA_NAEBVBlockPos@@PEBV1@@Z
     */
    virtual bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   1607482951
     * @vftbl  11
     * @symbol ?addSource@BaseCircuitComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   566190885
     * @vftbl  12
     * @symbol ?allowConnection@BaseCircuitComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -1772541669
     * @vftbl  13
     * @symbol ?checkLock@BaseCircuitComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void checkLock(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   188768867
     * @vftbl  14
     * @symbol ?evaluate@BaseCircuitComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   1975208748
     * @vftbl  15
     * @symbol ?cacheValues@BaseCircuitComponent@@UEAAXAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual void cacheValues(class CircuitSystem &, class BlockPos const &);
    /**
     * @hash   981206861
     * @vftbl  16
     * @symbol ?updateDependencies@BaseCircuitComponent@@UEAAXAEAVCircuitSceneGraph@@AEBVBlockPos@@@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph &, class BlockPos const &);
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @hash   -2079017617
     * @vftbl  18
     * @symbol ?isHalfPulse@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @hash   1767331862
     * @vftbl  19
     * @symbol ?hasSource@BaseCircuitComponent@@UEAA_NAEAV1@@Z
     */
    virtual bool hasSource(class BaseCircuitComponent &);
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -917147795
     * @vftbl  21
     * @symbol ?isSecondaryPowered@BaseCircuitComponent@@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @hash   -486167679
     * @vftbl  22
     * @symbol ?getCircuitComponentType@BaseCircuitComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   1962059676
     * @vftbl  23
     * @symbol ?getCircuitComponentGroupType@BaseCircuitComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentGroupType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @hash   311429930
     * @symbol ?allowIndirect@BaseCircuitComponent@@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const;
    /**
     * @hash   -1307301497
     * @symbol ?hasChildrenSource@BaseCircuitComponent@@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @hash   877718785
     * @symbol ??0BaseCircuitComponent@@QEAA@XZ
     */
    MCAPI BaseCircuitComponent();
    /**
     * @hash   -1010765544
     * @symbol ?hasDirectPower@BaseCircuitComponent@@QEAA_NXZ
     */
    MCAPI bool hasDirectPower();
    /**
     * @hash   1404313730
     * @symbol ?isRemoved@BaseCircuitComponent@@QEBA_NXZ
     */
    MCAPI bool isRemoved() const;
    /**
     * @hash   -1444124011
     * @symbol ?setRemoved@BaseCircuitComponent@@QEAAXXZ
     */
    MCAPI void setRemoved();

//protected:
    /**
     * @hash   -1315885924
     * @symbol ?trackPowerSource@BaseCircuitComponent@@IEAA_NAEBVCircuitTrackingInfo@@H_NH@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const &, int, bool, int);
    /**
     * @hash   -474063221
     * @symbol ?trackPowerSourceDuplicates@BaseCircuitComponent@@IEAA_NAEBVCircuitTrackingInfo@@H_N@Z
     */
    MCAPI bool trackPowerSourceDuplicates(class CircuitTrackingInfo const &, int, bool);

protected:

};