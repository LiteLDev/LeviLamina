/**
 * @file  ActorClassTree.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1434024732
     * @symbol ?getEntityTypeIdLegacy@ActorClassTree@@SA?AW4ActorType@@W42@@Z
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType);
    /**
     * @hash   752066583
     * @symbol ?hasCategory@ActorClassTree@@SA_NAEBW4ActorCategory@@W42@@Z
     */
    MCAPI static bool hasCategory(enum class ActorCategory const &, enum class ActorCategory);
    /**
     * @hash   115408677
     * @symbol ?isHangingEntity@ActorClassTree@@SA_NAEBVActor@@@Z
     */
    MCAPI static bool isHangingEntity(class Actor const &);
    /**
     * @hash   -1894658564
     * @symbol ?isInstanceOf@ActorClassTree@@SA_NAEBVActor@@W4ActorType@@@Z
     */
    MCAPI static bool isInstanceOf(class Actor const &, enum class ActorType);
    /**
     * @hash   1665155853
     * @symbol ?isMob@ActorClassTree@@SA_NW4ActorType@@@Z
     */
    MCAPI static bool isMob(enum class ActorType);
    /**
     * @hash   -1413997493
     * @symbol ?isMobLegacy@ActorClassTree@@SA_NW4ActorType@@@Z
     */
    MCAPI static bool isMobLegacy(enum class ActorType);
    /**
     * @hash   1729707206
     * @symbol ?isOfType@ActorClassTree@@SA_NW4ActorType@@0@Z
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType);
    /**
     * @hash   1310695232
     * @symbol ?isTypeInstanceOf@ActorClassTree@@SA_NW4ActorType@@0@Z
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType);

};