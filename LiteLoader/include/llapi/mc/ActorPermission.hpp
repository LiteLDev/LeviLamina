/**
 * @file  ActorPermission.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorPermission {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getUnmappedGameType\@ActorPermission\@\@YA?AW4GameType\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI enum class GameType getUnmappedGameType(class EntityContext const &);
    /**
     * @symbol ?initialize\@ActorPermission\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?setUnmappedGameType\@ActorPermission\@\@YAXAEAVEntityContext\@\@W4GameType\@\@\@Z
     */
    MCAPI void setUnmappedGameType(class EntityContext &, enum class GameType);

};