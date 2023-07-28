#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/SidePoweredComponent.h"

class ComparatorCapacitor : public ::SidePoweredComponent {
public:
    // ComparatorCapacitor inner types declare
    // clang-format off

    // clang-format on

    // ComparatorCapacitor inner types define
    enum class Mode {
        CompareMode = 0x0,
        SubtractMode = 0x1,
    };


    int                        mRearAnalogStrength;
    int                        mSideAnalogStrengthRight;
    int                        mSideAnalogStrengthLeft;
    int                        mOldStrength;
    Mode                       mMode;
    int                        mRearStrength;
    int                        mSideStrengths;
    bool                       mHasAnalogBeenSet;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::ComparatorCapacitor;
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?addSource\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?evaluate\@ComparatorCapacitor\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?cacheValues\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void cacheValues(class CircuitSystem&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?updateDependencies\@ComparatorCapacitor\@\@UEAAXAEAVCircuitSceneGraph\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void updateDependencies(class CircuitSceneGraph&, class BlockPos const&); // NOLINT
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@ComparatorCapacitor\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @symbol ??0ComparatorCapacitor\@\@QEAA\@XZ
     */
    MCAPI ComparatorCapacitor(); // NOLINT
    /**
     * @symbol ?clearAnalogStrength\@ComparatorCapacitor\@\@QEAAXE\@Z
     */
    MCAPI void clearAnalogStrength(unsigned char); // NOLINT
    /**
     * @symbol ?getOldStrength\@ComparatorCapacitor\@\@QEAAHXZ
     */
    MCAPI int getOldStrength(); // NOLINT
    /**
     * @symbol ?isSubtractMode\@ComparatorCapacitor\@\@QEAA_NXZ
     */
    MCAPI bool isSubtractMode(); // NOLINT
    /**
     * @symbol ?setAnalogStrength\@ComparatorCapacitor\@\@QEAAXHE\@Z
     */
    MCAPI void setAnalogStrength(int, unsigned char); // NOLINT
    /**
     * @symbol ?setMode\@ComparatorCapacitor\@\@QEAAXW4Mode\@1\@\@Z
     */
    MCAPI void setMode(enum class ComparatorCapacitor::Mode); // NOLINT
};
