/**
 * @file  DamageSensorComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   804819520
     * @symbol  ??0DamageSensorComponent\@\@QEAA\@XZ
     */
    MCAPI DamageSensorComponent();
    /**
     * @hash   -411910154
     * @symbol  ?getCause\@DamageSensorComponent\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @hash   -1502705104
     * @symbol  ?getDamageModifier\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageModifier();
    /**
     * @hash   1103427408
     * @symbol  ?getDamageMultipler\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageMultipler();
    /**
     * @hash   1188972246
     * @symbol  ?isFatal\@DamageSensorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFatal() const;
    /**
     * @hash   -1154943972
     * @symbol  ??4DamageSensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DamageSensorComponent & operator=(class DamageSensorComponent &&);
    /**
     * @hash   -986910319
     * @symbol  ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@AEBVActorDamageSource\@\@H_NVVariantParameterList\@\@2\@Z
     */
    MCAPI bool recordDamage(class Actor &, class ActorDamageSource const &, int, bool, class VariantParameterList, bool);
    /**
     * @hash   -1122117812
     * @symbol  ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVBlockPos\@\@\@Z
     */
    MCAPI bool recordDamage(class Actor &, class Actor *, enum class ActorDamageCause, int, bool, class BlockPos);
    /**
     * @hash   -2079255658
     * @symbol  ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVVariantParameterList\@\@\@Z
     */
    MCAPI bool recordDamage(class Actor &, class Actor *, enum class ActorDamageCause, int, bool, class VariantParameterList);

//private:
    /**
     * @hash   -1200696885
     * @symbol  ?_recordDamage\@DamageSensorComponent\@\@AEAA_NAEAVActor\@\@PEAV2\@AEBW4ActorDamageCause\@\@1H_NVVariantParameterList\@\@3\@Z
     */
    MCAPI bool _recordDamage(class Actor &, class Actor *, enum class ActorDamageCause const &, class Actor *, int, bool, class VariantParameterList, bool);

private:

};