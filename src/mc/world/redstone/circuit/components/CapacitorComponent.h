#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/ProducerComponent.h"

class CapacitorComponent : public ::ProducerComponent {

public:
    // prevent constructor by default
    CapacitorComponent& operator=(CapacitorComponent const&) = delete;
    CapacitorComponent(CapacitorComponent const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
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
     * @symbol ?getCircuitComponentType\@CapacitorComponent\@\@UEBA?AW4CircuitComponentType\@\@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getPoweroutDirection\@CapacitorComponent\@\@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const; // NOLINT
    /**
     * @symbol ??0CapacitorComponent\@\@QEAA\@XZ
     */
    MCAPI CapacitorComponent(); // NOLINT
};
