#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorClassTree {

public:
    // prevent constructor by default
    ActorClassTree& operator=(ActorClassTree const&) = delete;
    ActorClassTree(ActorClassTree const&)            = delete;
    ActorClassTree()                                 = delete;

public:
    /**
     * @symbol ?getEntityTypeIdLegacy\@ActorClassTree\@\@SA?AW4ActorType\@\@W42\@\@Z
     */
    MCAPI static enum class ActorType getEntityTypeIdLegacy(enum class ActorType); // NOLINT
    /**
     * @symbol ?hasCategory\@ActorClassTree\@\@SA_NAEBW4ActorCategory\@\@W42\@\@Z
     */
    MCAPI static bool hasCategory(enum class ActorCategory const&, enum class ActorCategory); // NOLINT
    /**
     * @symbol ?isHangingEntity\@ActorClassTree\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool isHangingEntity(class Actor const&); // NOLINT
    /**
     * @symbol ?isInstanceOf\@ActorClassTree\@\@SA_NAEBVActor\@\@W4ActorType\@\@\@Z
     */
    MCAPI static bool isInstanceOf(class Actor const&, enum class ActorType); // NOLINT
    /**
     * @symbol ?isMob\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMob(enum class ActorType); // NOLINT
    /**
     * @symbol ?isMobLegacy\@ActorClassTree\@\@SA_NW4ActorType\@\@\@Z
     */
    MCAPI static bool isMobLegacy(enum class ActorType); // NOLINT
    /**
     * @symbol ?isOfType\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isOfType(enum class ActorType, enum class ActorType); // NOLINT
    /**
     * @symbol ?isTypeInstanceOf\@ActorClassTree\@\@SA_NW4ActorType\@\@0\@Z
     */
    MCAPI static bool isTypeInstanceOf(enum class ActorType, enum class ActorType); // NOLINT
};
