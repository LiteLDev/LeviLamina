/**
 * @file  MC/AnimationComponentID.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AnimationComponentID.
 *
 */
class AnimationComponentID {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENTID
public:
    class AnimationComponentID& operator=(class AnimationComponentID const &) = delete;
    AnimationComponentID(class AnimationComponentID const &) = delete;
    AnimationComponentID() = delete;
#endif

public:
    /**
     * @hash   220914156
     * @symbol ??0AnimationComponentID@@QEAA@AEBUActorUniqueID@@GW4AttachableSlotIndex@@@Z
     */
    MCAPI AnimationComponentID(struct ActorUniqueID const &, unsigned short, enum AttachableSlotIndex);
    /**
     * @hash   -1906929653
     * @symbol ?getHash@AnimationComponentID@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   1580182947
     * @symbol ??8AnimationComponentID@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class AnimationComponentID const &) const;

};