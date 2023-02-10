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
     * @hash   617972581
     * @symbol  ??0BucketableComponent\@\@QEAA\@XZ
     */
    MCAPI BucketableComponent();
    /**
     * @hash   1186978757
     * @symbol  ?getInteraction\@BucketableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -987029022
     * @symbol  ?initFromDefinition\@BucketableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -169621383
     * @symbol  ?implInteraction\@BucketableComponent\@\@SAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static void implInteraction(class Actor &, class Player &);

//private:

private:
    /**
     * @hash   -1203468545
     * @symbol  ?WATER_BUCKET_USEABLE_VERSION\@BucketableComponent\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;

};