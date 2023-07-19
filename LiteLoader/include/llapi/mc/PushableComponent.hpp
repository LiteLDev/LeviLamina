/**
 * @file  PushableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PushableComponent.
 *
 */
class PushableComponent {

#define AFTER_EXTRA
    // Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHABLECOMPONENT
public:
    class PushableComponent& operator=(class PushableComponent const &) = delete;
    PushableComponent(class PushableComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0PushableComponent\@\@QEAA\@XZ
     */
    MCAPI PushableComponent();
    /**
     * @symbol ?initFromDefinition\@PushableComponent\@\@QEAAXAEAVActor\@\@AEBUPushableDescription\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &, struct PushableDescription const &);
    /**
     * @symbol ?initFromDefinition\@PushableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?isPushable\@PushableComponent\@\@QEAA_NXZ
     */
    MCAPI bool isPushable();
    /**
     * @symbol ?isPushableByPiston\@PushableComponent\@\@QEAA_NXZ
     */
    MCAPI bool isPushableByPiston();
    /**
     * @symbol ?push\@PushableComponent\@\@QEAAXAEAVActor\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void push(class Actor &, class Vec3 const &);
    /**
     * @symbol ?push\@PushableComponent\@\@QEAAXAEAVActor\@\@0_N\@Z
     */
    MCAPI void push(class Actor &, class Actor &, bool);

//private:
    /**
     * @symbol ?_calculatePushVectorBoat\@PushableComponent\@\@AEAA?AU?$pair\@VVec3\@\@V1\@\@std\@\@AEAVActor\@\@0_N\@Z
     */
    MCAPI struct std::pair<class Vec3, class Vec3> _calculatePushVectorBoat(class Actor &, class Actor &, bool);
    /**
     * @symbol ?_calculatePushVectorMinecart\@PushableComponent\@\@AEAA?AU?$pair\@VVec3\@\@V1\@\@std\@\@AEAVActor\@\@0_N\@Z
     */
    MCAPI struct std::pair<class Vec3, class Vec3> _calculatePushVectorMinecart(class Actor &, class Actor &, bool);

private:

};
