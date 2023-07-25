#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDefinition {
public:
    // IdentityDefinition inner types declare
    // clang-format off

    // clang-format on

    // IdentityDefinition inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDEFINITION
public:
    IdentityDefinition() = delete;
#endif

public:
    /**
     * @symbol ??0IdentityDefinition\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition&&);
    /**
     * @symbol ??0IdentityDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition const&);
    /**
     * @symbol ?getEntityId\@IdentityDefinition\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const& getEntityId() const;
    /**
     * @symbol
     * ?getFakePlayerName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFakePlayerName() const;
    /**
     * @symbol ?getIdentityType\@IdentityDefinition\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @symbol
     * ?getName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@3\@\@Z
     */
    MCAPI std::string const& getName(class std::function<std::string const&(struct ActorUniqueID)> const&) const;
    /**
     * @symbol ?getPlayerId\@IdentityDefinition\@\@QEBAAEBUPlayerScoreboardId\@\@XZ
     */
    MCAPI struct PlayerScoreboardId const& getPlayerId() const;
    /**
     * @symbol ?getScoreboardId\@IdentityDefinition\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const& getScoreboardId() const;
    /**
     * @symbol ?isEntityType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isEntityType() const;
    /**
     * @symbol ?isPlayerType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const;
    /**
     * @symbol ?isValid\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??4IdentityDefinition\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition const&);
    /**
     * @symbol ??4IdentityDefinition\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition&&);
    /**
     * @symbol ??1IdentityDefinition\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDefinition();
    /**
     * @symbol ?Invalid\@IdentityDefinition\@\@2V1\@B
     */
    MCAPI static class IdentityDefinition const Invalid;
};
