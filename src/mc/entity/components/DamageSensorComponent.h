#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DamageSensorComponent {

public:
    // prevent constructor by default
    DamageSensorComponent& operator=(DamageSensorComponent const&) = delete;
    DamageSensorComponent(DamageSensorComponent const&)            = delete;

public:
    /**
     * @symbol ??0DamageSensorComponent\@\@QEAA\@XZ
     */
    MCAPI DamageSensorComponent(); // NOLINT
    /**
     * @symbol ?getCause\@DamageSensorComponent\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const; // NOLINT
    /**
     * @symbol ?getDamageModifier\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageModifier(); // NOLINT
    /**
     * @symbol ?getDamageMultipler\@DamageSensorComponent\@\@QEAAMXZ
     */
    MCAPI float getDamageMultipler(); // NOLINT
    /**
     * @symbol ?isFatal\@DamageSensorComponent\@\@QEBA_NXZ
     */
    MCAPI bool isFatal() const; // NOLINT
    /**
     * @symbol ??4DamageSensorComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class DamageSensorComponent& operator=(class DamageSensorComponent&&); // NOLINT
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@AEBVActorDamageSource\@\@H_NVVariantParameterList\@\@2\@Z
     */
    MCAPI bool
    recordDamage(class Actor&, class ActorDamageSource const&, int, bool, class VariantParameterList, bool); // NOLINT
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVVariantParameterList\@\@\@Z
     */
    MCAPI bool recordDamage(
        class Actor&,
        class Actor*,
        enum class ActorDamageCause,
        int,
        bool,
        class VariantParameterList
    ); // NOLINT
    /**
     * @symbol
     * ?recordDamage\@DamageSensorComponent\@\@QEAA_NAEAVActor\@\@PEAV2\@W4ActorDamageCause\@\@H_NVBlockPos\@\@\@Z
     */
    MCAPI bool
    recordDamage(class Actor&, class Actor*, enum class ActorDamageCause, int, bool, class BlockPos); // NOLINT

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
    ); // NOLINT

private:
};
