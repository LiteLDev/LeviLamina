/**
 * @file  BucketableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BucketableComponent.
 *
 */
class BucketableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETABLECOMPONENT
public:
    class BucketableComponent& operator=(class BucketableComponent const &) = delete;
    BucketableComponent(class BucketableComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BucketableComponent\@\@QEAA\@XZ
     */
    MCAPI BucketableComponent();
    /**
     * @symbol  ?getInteraction\@BucketableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @symbol  ?initFromDefinition\@BucketableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol  ?implInteraction\@BucketableComponent\@\@SAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static void implInteraction(class Actor &, class Player &);

//private:

private:
    /**
     * @symbol  ?WATER_BUCKET_USEABLE_VERSION\@BucketableComponent\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;

};