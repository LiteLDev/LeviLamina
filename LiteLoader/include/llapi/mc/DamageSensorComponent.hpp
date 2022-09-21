/**
 * @file  MC/DamageSensorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DamageSensorComponent.
 *
 */
class DamageSensorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORCOMPONENT
public:
    class DamageSensorComponent& operator=(class DamageSensorComponent const &) = delete;
    DamageSensorComponent(class DamageSensorComponent const &) = delete;
#endif

public:
    /**
     * @hash   -16674032
     * @symbol ??0DamageSensorComponent@@QEAA@XZ
     */
    MCAPI DamageSensorComponent();
    /**
     * @hash   -539346442
     * @symbol ?getCause@DamageSensorComponent@@QEBA?AW4ActorDamageCause@@XZ
     */
    MCAPI enum ActorDamageCause getCause() const;
    /**
     * @hash   1970722512
     * @symbol ?getDamageModifier@DamageSensorComponent@@QEAAMXZ
     */
    MCAPI float getDamageModifier();
    /**
     * @hash   1953996976
     * @symbol ?getDamageMultipler@DamageSensorComponent@@QEAAMXZ
     */
    MCAPI float getDamageMultipler();
    /**
     * @hash   2039557190
     * @symbol ?isFatal@DamageSensorComponent@@QEBA_NXZ
     */
    MCAPI bool isFatal() const;
    /**
     * @hash   -456396916
     * @symbol ??4DamageSensorComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class DamageSensorComponent & operator=(class DamageSensorComponent &&);
    /**
     * @hash   -1808342367
     * @symbol ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@AEBVActorDamageSource@@H_NVVariantParameterList@@2@Z
     */
    MCAPI bool recordDamage(class Actor &, class ActorDamageSource const &, int, bool, class VariantParameterList, bool);
    /**
     * @hash   -1943580612
     * @symbol ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@PEAV2@W4ActorDamageCause@@H_NVBlockPos@@@Z
     */
    MCAPI bool recordDamage(class Actor &, class Actor *, enum ActorDamageCause, int, bool, class BlockPos);
    /**
     * @hash   1394248838
     * @symbol ?recordDamage@DamageSensorComponent@@QEAA_NAEAVActor@@PEAV2@W4ActorDamageCause@@H_NVVariantParameterList@@@Z
     */
    MCAPI bool recordDamage(class Actor &, class Actor *, enum ActorDamageCause, int, bool, class VariantParameterList);

//private:
    /**
     * @hash   -2022190437
     * @symbol ?_recordDamage@DamageSensorComponent@@AEAA_NAEAVActor@@PEAV2@AEBW4ActorDamageCause@@1H_NVVariantParameterList@@3@Z
     */
    MCAPI bool _recordDamage(class Actor &, class Actor *, enum ActorDamageCause const &, class Actor *, int, bool, class VariantParameterList, bool);

private:

};