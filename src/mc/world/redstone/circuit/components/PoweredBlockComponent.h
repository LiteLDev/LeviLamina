#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/BaseCircuitComponent.h"

class PoweredBlockComponent : public ::BaseCircuitComponent {

public:
    // prevent constructor by default
    PoweredBlockComponent& operator=(PoweredBlockComponent const&) = delete;
    PoweredBlockComponent(PoweredBlockComponent const&)            = delete;
    PoweredBlockComponent()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getStrength\@PoweredBlockComponent\@\@UEBAHXZ
     */
    virtual int getStrength() const;
    /**
     * @vftbl 7
     * @symbol ?canConsumerPower\@PoweredBlockComponent\@\@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl 11
     * @symbol
     * ?addSource\@PoweredBlockComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEAHAEA_N\@Z
     */
    virtual bool addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const&, int&, bool&);
    /**
     * @vftbl 12
     * @symbol
     * ?allowConnection\@PoweredBlockComponent\@\@UEAA_NAEAVCircuitSceneGraph\@\@AEBVCircuitTrackingInfo\@\@AEA_N\@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);
    /**
     * @vftbl 14
     * @symbol ?evaluate\@PoweredBlockComponent\@\@UEAA_NAEAVCircuitSystem\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool evaluate(class CircuitSystem&, class BlockPos const&);
    /**
     * @vftbl 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 23
     * @symbol ?getCircuitComponentType\@PoweredBlockComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POWEREDBLOCKCOMPONENT
    /**
     * @symbol ?hasChildrenSource\@PoweredBlockComponent\@\@UEBA_NXZ
     */
    MCVAPI bool hasChildrenSource() const;
#endif
    /**
     * @symbol ??0PoweredBlockComponent\@\@QEAA\@E\@Z
     */
    MCAPI PoweredBlockComponent(unsigned char);
    // NOLINTEND
};
