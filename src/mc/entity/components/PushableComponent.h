#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushableComponent {

public:
    // prevent constructor by default
    PushableComponent& operator=(PushableComponent const&) = delete;
    PushableComponent(PushableComponent const&)            = delete;

public:
    /**
     * @symbol ??0PushableComponent\@\@QEAA\@XZ
     */
    MCAPI PushableComponent(); // NOLINT
    /**
     * @symbol ?initFromDefinition\@PushableComponent\@\@QEAAXAEAVActor\@\@AEBUPushableDescription\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&, struct PushableDescription const&); // NOLINT
    /**
     * @symbol ?initFromDefinition\@PushableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?isPushable\@PushableComponent\@\@QEAA_NXZ
     */
    MCAPI bool isPushable(); // NOLINT
    /**
     * @symbol ?isPushableByPiston\@PushableComponent\@\@QEAA_NXZ
     */
    MCAPI bool isPushableByPiston(); // NOLINT
    /**
     * @symbol ?push\@PushableComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void push(class Actor&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?push\@PushableComponent\@\@QEAAXAEAVActor\@\@0_N\@Z
     */
    MCAPI void push(class Actor&, class Actor&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_calculatePushVectorBoat\@PushableComponent\@\@AEAA?AU?$pair\@VVec3\@\@V1\@\@std\@\@AEAVActor\@\@0_N\@Z
     */
    MCAPI struct std::pair<class Vec3, class Vec3> _calculatePushVectorBoat(class Actor&, class Actor&, bool); // NOLINT
    /**
     * @symbol
     * ?_calculatePushVectorMinecart\@PushableComponent\@\@AEAA?AU?$pair\@VVec3\@\@V1\@\@std\@\@AEAVActor\@\@0_N\@Z
     */
    MCAPI struct std::pair<class Vec3, class Vec3>
    _calculatePushVectorMinecart(class Actor&, class Actor&, bool); // NOLINT

private:
};
