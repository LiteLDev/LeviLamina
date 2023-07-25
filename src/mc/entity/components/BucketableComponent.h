#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BucketableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETABLECOMPONENT
public:
    BucketableComponent& operator=(BucketableComponent const&) = delete;
    BucketableComponent(BucketableComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0BucketableComponent\@\@QEAA\@XZ
     */
    MCAPI BucketableComponent();
    /**
     * @symbol ?getInteraction\@BucketableComponent\@\@QEAA_NAEAVActor\@\@AEAVPlayer\@\@AEAVActorInteraction\@\@\@Z
     */
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    /**
     * @symbol ?initFromDefinition\@BucketableComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol ?implInteraction\@BucketableComponent\@\@SAXAEAVActor\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI static void implInteraction(class Actor&, class Player&);

    // private:

private:
    /**
     * @symbol ?WATER_BUCKET_USEABLE_VERSION\@BucketableComponent\@\@0VBaseGameVersion\@\@B
     */
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;
};
