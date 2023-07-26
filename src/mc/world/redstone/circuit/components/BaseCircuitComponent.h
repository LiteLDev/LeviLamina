#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

class BaseCircuitComponent {

public:
    // prevent constructor by default
    BaseCircuitComponent& operator=(BaseCircuitComponent const&) = delete;
    BaseCircuitComponent(BaseCircuitComponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getStrength\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getStrength() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getDirection\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getDirection() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?setStrength\@BaseCircuitComponent\@\@UEAAXH\@Z
     */
    virtual void setStrength(int); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?setDirection\@BaseCircuitComponent\@\@UEAAXE\@Z
     */
    virtual void setDirection(unsigned char); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?setConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setConsumePowerAnyDirection(bool); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?canStopPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canStopPower() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setStopPower\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setStopPower(bool); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?removeSource\@BaseCircuitComponent\@\@UEAAXAEBVBlockPos\@\@PEBV1\@\@Z
     */
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?addSource\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?checkLock\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?evaluate\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isHalfPulse\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?hasSource\@BaseCircuitComponent\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool hasSource(class BaseCircuitComponent const&) const; // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 21
     * @symbol ?isSecondaryPowered\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const; // NOLINT
    /**
     * @vftbl 22
     * @symbol ?removeFromAnySourceList\@BaseCircuitComponent\@\@MEAAXPEBV1\@\@Z
     */
    virtual void removeFromAnySourceList(class BaseCircuitComponent const*); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?getCircuitComponentGroupType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentGroupType() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @symbol ?allowIndirect\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const; // NOLINT
    /**
     * @symbol ?hasChildrenSource\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseCircuitComponent(); // NOLINT
#endif
    /**
     * @symbol ??0BaseCircuitComponent\@\@QEAA\@XZ
     */
    MCAPI BaseCircuitComponent(); // NOLINT
    /**
     * @symbol ?addSourceItem\@BaseCircuitComponent\@\@QEAAXAEBVItem\@CircuitComponentList\@\@\@Z
     */
    MCAPI void addSourceItem(class CircuitComponentList::Item const&); // NOLINT
    /**
     * @symbol ?hasDirectPower\@BaseCircuitComponent\@\@QEAA_NXZ
     */
    MCAPI bool hasDirectPower(); // NOLINT

    // protected:
    /**
     * @symbol ?trackPowerSource\@BaseCircuitComponent\@\@IEAA_NAEBVCircuitTrackingInfo\@\@H_NH1\@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const&, int, bool, int, bool); // NOLINT

protected:
};
