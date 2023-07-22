/**
 * @file  TripodCameraComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TripodCameraComponent.
 *
 */
class TripodCameraComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIPODCAMERACOMPONENT
public:
    class TripodCameraComponent& operator=(class TripodCameraComponent const &) = delete;
    TripodCameraComponent(class TripodCameraComponent const &) = delete;
    TripodCameraComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getInteraction\@TripodCameraComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

};