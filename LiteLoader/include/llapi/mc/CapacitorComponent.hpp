/**
 * @file  CapacitorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CapacitorComponent.
 *
 */
class CapacitorComponent : public ProducerComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAPACITORCOMPONENT
public:
    class CapacitorComponent& operator=(class CapacitorComponent const &) = delete;
    CapacitorComponent(class CapacitorComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CapacitorComponent();
    /**
     * @vftbl  17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @hash   -140595941
     * @vftbl  22
     * @symbol ?getCircuitComponentType@CapacitorComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum class CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   -337209826
     * @vftbl  24
     * @symbol ?getPoweroutDirection@CapacitorComponent@@UEBAEXZ
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @hash   755559607
     * @symbol ??0CapacitorComponent@@QEAA@XZ
     */
    MCAPI CapacitorComponent();

};