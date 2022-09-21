/**
 * @file  MC/BucketableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   521349797
     * @symbol ??0BucketableComponent@@QEAA@XZ
     */
    MCAPI BucketableComponent();
    /**
     * @hash   1061326085
     * @symbol ?getInteraction@BucketableComponent@@QEAA_NAEAVActor@@AEAVPlayer@@AEAVActorInteraction@@@Z
     */
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    /**
     * @hash   -1078915998
     * @symbol ?initFromDefinition@BucketableComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -295304807
     * @symbol ?implInteraction@BucketableComponent@@SAXAEAVActor@@AEAVPlayer@@@Z
     */
    MCAPI static void implInteraction(class Actor &, class Player &);

//private:

private:
    /**
     * @hash   1984211487
     * @symbol ?WATER_BUCKET_USEABLE_VERSION@BucketableComponent@@0VBaseGameVersion@@B
     */
    MCAPI static class BaseGameVersion const WATER_BUCKET_USEABLE_VERSION;

};