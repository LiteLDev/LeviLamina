/**
 * @file  ActorUniqueID.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorUniqueID.
 *
 */
struct ActorUniqueID {

#define AFTER_EXTRA
// Add Member There

    long long id;
    ActorUniqueID()
    {
        id = -1;
    }

    ActorUniqueID(long long i)
    {
        id = i;
    }

    inline long long get() const
    {
        return id;
    }

    inline operator long long() const
    {
        return id;
    }
#define DISABLE_CONSTRUCTOR_PREVENTION_ACTORUNIQUEID
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUNIQUEID
public:
    struct ActorUniqueID& operator=(struct ActorUniqueID const &) = delete;
    ActorUniqueID(struct ActorUniqueID const &) = delete;
    ActorUniqueID() = delete;
#endif

public:
    /**
     * @symbol  ?INVALID_ID\@ActorUniqueID\@\@2U1\@B
     */
    MCAPI static struct ActorUniqueID const INVALID_ID;

};