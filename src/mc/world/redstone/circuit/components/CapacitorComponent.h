#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPACITORCOMPONENT
public:
    CapacitorComponent& operator=(CapacitorComponent const&) = delete;
    CapacitorComponent(CapacitorComponent const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
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
     * @symbol ?getCircuitComponentType\@CapacitorComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@CapacitorComponent\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0CapacitorComponent\@\@QEAA\@XZ
     */
    MCAPI CapacitorComponent();
};
