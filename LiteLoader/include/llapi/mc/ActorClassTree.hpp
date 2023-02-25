/**
 * @file  ActorClassTree.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorClassTree.
 *
 */
class ActorClassTree {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCLASSTREE
public:
    class ActorClassTree& operator=(class ActorClassTree const &) = delete;
    ActorClassTree(class ActorClassTree const &) = delete;
    ActorClassTree() = delete;
#endif

public:
    /**
     * @symbol  ?getEntityTypeIdLegacy\@ActorClassTree\@\@SA?AW4ActorType\@\@W42\@\@Z
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType);
    /**
     * @symbol  ?hasCategory\@ActorClassTree\@\@SA_NAEBW4ActorCategory\@\@W42\@\@Z
     */
    MCAPI static bool hasCategory(enum class ActorCategory const &, enum class ActorCategory);
    /**
     * @symbol  ?isHangingEntity\@ActorClassTree\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isHangingEntity(class Actor const &);
    /**
     * @symbol  ?isInstanceOf\@ActorClassTree\@\@SA_NAEBVActor\@\@W4ActorType\@\@\@Z
     */
    MCAPI static bool isInstanceOf(class Actor const &, enum class ActorType);
    /**
     * @symbol  ?isMob\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMob(enum class ActorType);
    /**
     * @symbol  ?isMobLegacy\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMobLegacy(enum class ActorType);
    /**
     * @symbol  ?isOfType\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType);
    /**
     * @symbol  ?isTypeInstanceOf\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType);

};