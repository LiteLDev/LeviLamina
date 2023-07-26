#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDefinition {
public:
    // IdentityDefinition inner types declare
    // clang-format off

    // clang-format on

    // IdentityDefinition inner types define
    enum class Type {};

public:
    // prevent constructor by default
    IdentityDefinition() = delete;

public:
    /**
     * @symbol ??0IdentityDefinition\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition&&); // NOLINT
    /**
     * @symbol ??0IdentityDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition const&); // NOLINT
    /**
     * @symbol ?getEntityId\@IdentityDefinition\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& getEntityId() const; // NOLINT
    /**
     * @symbol
     * ?getFakePlayerName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFakePlayerName() const; // NOLINT
    /**
     * @symbol ?getIdentityType\@IdentityDefinition\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const; // NOLINT
    /**
     * @symbol
     * ?getName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@3\@\@Z
     */
    MCAPI std::string const&
          getName(class std::function<std::string const&(struct ActorUniqueID)> const&) const; // NOLINT
    /**
     * @symbol ?getPlayerId\@IdentityDefinition\@\@QEBAAEBUPlayerScoreboardId\@\@XZ
     */
    MCAPI struct PlayerScoreboardId const& getPlayerId() const; // NOLINT
    /**
     * @symbol ?getScoreboardId\@IdentityDefinition\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const& getScoreboardId() const; // NOLINT
    /**
     * @symbol ?isEntityType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isEntityType() const; // NOLINT
    /**
     * @symbol ?isPlayerType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const; // NOLINT
    /**
     * @symbol ?isValid\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??4IdentityDefinition\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition const&); // NOLINT
    /**
     * @symbol ??4IdentityDefinition\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition&&); // NOLINT
    /**
     * @symbol ??1IdentityDefinition\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDefinition(); // NOLINT
    /**
     * @symbol ?Invalid\@IdentityDefinition\@\@2V1\@B
     */
    MCAPI static class IdentityDefinition const Invalid; // NOLINT
};
