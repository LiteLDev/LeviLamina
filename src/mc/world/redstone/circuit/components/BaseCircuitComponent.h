#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/CircuitComponentType.h"
#include "mc/enums/FacingID.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentList.h"

class BaseCircuitComponent {

public:
    CircuitComponentList mSources;
    // Core::RefCountedSet<BaseCircuitComponent*> mDestinations; // DEBUG
    bool                            mIgnoreFirstUpdate;
    bool                            mIsFirstTime;
    bool                            mNeedsUpdate;
    class BlockPos                  mPos;
    class BlockPos                  mChunkPosition;
    bool                            mShouldEvaluate;
    int                             mStrength;
    enum class FacingID               mDirection;
    bool                            mAllowPowerUp;
    bool                            mAllowPowerDown;
    bool                            mRemoved;
    bool                            mConsumePowerAnyDirection;
    enum class CircuitComponentType mCircuitComponentType;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStrength\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl 2
     * @symbol ?getDirection\@BaseCircuitComponent\@\@UEBAHXZ
     */
    virtual int getDirection() const;
    /**
     * @vftbl 3
     * @symbol ?setStrength\@BaseCircuitComponent\@\@UEAAXH\@Z
     */
    virtual void setStrength(int);
    /**
     * @vftbl 4
     * @symbol ?setDirection\@BaseCircuitComponent\@\@UEAAXE\@Z
     */
    virtual void setDirection(unsigned char);
    /**
     * @vftbl 5
     * @symbol ?setConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setConsumePowerAnyDirection(bool);
    /**
     * @vftbl 6
     * @symbol ?canConsumePowerAnyDirection\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl 8
     * @symbol ?canStopPower\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool canStopPower() const;
    /**
     * @vftbl 9
     * @symbol ?setStopPower\@BaseCircuitComponent\@\@UEAAX_N\@Z
     */
    virtual void setStopPower(bool);
    /**
     * @vftbl 10
     * @symbol ?removeSource\@BaseCircuitComponent\@\@UEAAXAEBVBlockPos\@\@PEBV1\@\@Z
     */
    virtual void removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /**
     * @vftbl 11
     * @symbol
     * ?addSource\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 13
     * @symbol ?checkLock\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkLock(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@BaseCircuitComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@BaseCircuitComponent\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 18
     * @symbol ?isHalfPulse\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isHalfPulse() const;
    /**
     * @vftbl 19
     * @symbol ?hasSource\@BaseCircuitComponent\@\@UEBA_NAEBV1\@\@Z
     */
    virtual bool hasSource(class BaseCircuitComponent const&) const;
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol ?isSecondaryPowered\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @vftbl 22
     * @symbol ?removeFromAnySourceList\@BaseCircuitComponent\@\@MEAAXPEBV1\@\@Z
     */
    virtual void removeFromAnySourceList(class BaseCircuitComponent const*);
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl 24
     * @symbol ?getCircuitComponentGroupType\@BaseCircuitComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentGroupType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECIRCUITCOMPONENT
    /**
     * @symbol ?allowIndirect\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool allowIndirect() const;
    /**
     * @symbol ?hasChildrenSource\@BaseCircuitComponent\@\@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseCircuitComponent();
#endif
    /**
     * @symbol ??0BaseCircuitComponent\@\@QEAA\@XZ
     */
    MCAPI BaseCircuitComponent();
    /**
     * @symbol ?addSourceItem\@BaseCircuitComponent\@\@QEAAXAEBVItem\@CircuitComponentList\@\@\@Z
     */
    MCAPI void addSourceItem(class CircuitComponentList::Item const&);
    /**
     * @symbol ?hasDirectPower\@BaseCircuitComponent\@\@QEAA_NXZ
     */
    MCAPI bool hasDirectPower();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?trackPowerSource\@BaseCircuitComponent\@\@IEAA_NAEBVCircuitTrackingInfo\@\@H_NH1\@Z
     */
    MCAPI bool trackPowerSource(class CircuitTrackingInfo const&, int, bool, int, bool);
    // NOLINTEND
};
