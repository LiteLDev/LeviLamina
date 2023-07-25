#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageSensorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORCOMPONENT
public:
    DamageSensorComponent& operator=(DamageSensorComponent const&) = delete;
    DamageSensorComponent(DamageSensorComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0DamageSensorComponent\@\@QEAA\@XZ
     */
    MCAPI DamageSensorComponent();
    /**
     * @symbol ?getCause\@DamageSensorComponent\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @symbol ?getDamageModifier\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageModifier();
    /**
     * @symbol ?getDamageMultipler\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageMultipler();
    /**
     * @symbol ?isFatal\@DamageSensorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFatal() const;
    /**
     * @symbol ??4DamageSensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&);
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@AEBVActorDamageSource\@\@H_NVVariantParameterList\@\@2\@Z
     */
    MCAPI bool recordDamage(class Actor&, class ActorDamageSource const&, int, bool, class VariantParameterList, bool);
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVVariantParameterList\@\@\@Z
     */
    MCAPI bool
    recordDamage(class Actor&, class Actor*, enum class ActorDamageCause, int, bool, class VariantParameterList);
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVBlockPos\@\@\@Z
     */
    MCAPI bool recordDamage(class Actor&, class Actor*, enum class ActorDamageCause, int, bool, class BlockPos);

    // private:
    /**
     * @symbol
     * ?_recordDamage\@DamageSensorComponent\@\@AEAA_NAEAVActor\@\@PEAV2\@AEBW4ActorDamageCause\@\@1H_NVVariantParameterList\@\@3\@Z
     */
    MCAPI bool _recordDamage(
        class Actor&,
        class Actor*,
        enum class ActorDamageCause const&,
        class Actor*,
        int,
        bool,
        class VariantParameterList,
        bool
    );

private:
};
