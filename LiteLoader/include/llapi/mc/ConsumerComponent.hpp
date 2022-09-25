/**
 * @file  ConsumerComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseCircuitComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsumerComponent.
 *
 */
class ConsumerComponent : public BaseCircuitComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMERCOMPONENT
public:
    class ConsumerComponent& operator=(class ConsumerComponent const &) = delete;
    ConsumerComponent(class ConsumerComponent const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ConsumerComponent();
    /**
     * @hash   821154736
     * @vftbl  7
     * @symbol ?canConsumerPower@ConsumerComponent@@UEBA_NXZ
     */
    virtual bool canConsumerPower() const;
    /**
     * @hash   -1346272715
     * @vftbl  11
     * @symbol ?addSource@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEAHAEA_N@Z
     */
    virtual bool addSource(class CircuitSceneGraph &, class CircuitTrackingInfo const &, int &, bool &);
    /**
     * @hash   1840309191
     * @vftbl  12
     * @symbol ?allowConnection@ConsumerComponent@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @hash   -484507391
     * @vftbl  14
     * @symbol ?evaluate@ConsumerComponent@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
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
     * @hash   1445574539
     * @vftbl  21
     * @symbol ?isSecondaryPowered@ConsumerComponent@@UEBA_NXZ
     */
    virtual bool isSecondaryPowered() const;
    /**
     * @hash   1624507679
     * @vftbl  22
     * @symbol ?getCircuitComponentType@ConsumerComponent@@UEBA?AW4CircuitComponentType@@XZ
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @hash   973352387
     * @symbol ??0ConsumerComponent@@QEAA@XZ
     */
    MCAPI ConsumerComponent();

};