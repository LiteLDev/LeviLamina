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
     * @hash   758680060
     * @symbol  ?getEntityTypeIdLegacy\@ActorClassTree\@\@SA?AW4ActorType\@\@W42\@\@Z
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType);
    /**
     * @hash   76721911
     * @symbol  ?hasCategory\@ActorClassTree\@\@SA_NAEBW4ActorCategory\@\@W42\@\@Z
     */
    MCAPI static bool hasCategory(enum class ActorCategory const &, enum class ActorCategory);
    /**
     * @hash   -559935995
     * @symbol  ?isHangingEntity\@ActorClassTree\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isHangingEntity(class Actor const &);
    /**
     * @hash   1724964060
     * @symbol  ?isInstanceOf\@ActorClassTree\@\@SA_NAEBVActor\@\@W4ActorType\@\@\@Z
     */
    MCAPI static bool isInstanceOf(class Actor const &, enum class ActorType);
    /**
     * @hash   989826557
     * @symbol  ?isMob\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMob(enum class ActorType);
    /**
     * @hash   -2089326789
     * @symbol  ?isMobLegacy\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMobLegacy(enum class ActorType);
    /**
     * @hash   1054377910
     * @symbol  ?isOfType\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType);
    /**
     * @hash   635365936
     * @symbol  ?isTypeInstanceOf\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType);

};