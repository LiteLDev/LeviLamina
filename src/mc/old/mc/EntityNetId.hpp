/**
 * @file  EntityNetId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityNetId.
 *
 */
class EntityNetId {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYNETID
public:
    class EntityNetId& operator=(class EntityNetId const &) = delete;
    EntityNetId(class EntityNetId const &) = delete;
    EntityNetId() = delete;
#endif

public:
    /**
     * @symbol  ?_serverGetEntityNetId\@EntityNetId\@\@SA?AV1\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static class EntityNetId _serverGetEntityNetId(class EntityContext const &);

};