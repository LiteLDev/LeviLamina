/**
 * @file  ImitateMobSoundsComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ImitateMobSoundsComponent.
 *
 */
class ImitateMobSoundsComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMITATEMOBSOUNDSCOMPONENT
public:
    class ImitateMobSoundsComponent& operator=(class ImitateMobSoundsComponent const &) = delete;
    ImitateMobSoundsComponent(class ImitateMobSoundsComponent const &) = delete;
    ImitateMobSoundsComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getRandomImitatedSound\@ImitateMobSoundsComponent\@\@SA?AW4LevelSoundEvent\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static enum class LevelSoundEvent getRandomImitatedSound(class Randomize const &);
    /**
     * @symbol  ?imitateNearbyMobs\@ImitateMobSoundsComponent\@\@SA_NAEAVActor\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool imitateNearbyMobs(class Actor &, class Randomize const &);

//private:

private:
    /**
     * @symbol  ?imitateMobMap\@ImitateMobSoundsComponent\@\@0V?$unordered_map\@W4ActorType\@\@W4LevelSoundEvent\@\@U?$hash\@W4ActorType\@\@\@std\@\@U?$equal_to\@W4ActorType\@\@\@4\@V?$allocator\@U?$pair\@$$CBW4ActorType\@\@W4LevelSoundEvent\@\@\@std\@\@\@4\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<enum class ActorType, enum class LevelSoundEvent, struct std::hash<enum class ActorType>, struct std::equal_to<enum class ActorType>, class std::allocator<struct std::pair<enum class ActorType const, enum class LevelSoundEvent>>> const imitateMobMap;

};