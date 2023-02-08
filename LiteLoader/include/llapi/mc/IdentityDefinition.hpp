/**
 * @file  IdentityDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentityDefinition.
 *
 */
class IdentityDefinition {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type : char
{
    Invalid = 0,
    Player = 1,
    Actor = 2,
    Fake = 3
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDEFINITION
public:
    IdentityDefinition() = delete;
#endif

public:
    /**
     * @hash   -2132456271
     * @symbol  ??0IdentityDefinition\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition const &);
    /**
     * @hash   -687083721
     * @symbol  ??0IdentityDefinition\@\@QEAA\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, std::string const &);
    /**
     * @hash   -654820601
     * @symbol  ??0IdentityDefinition\@\@QEAA\@AEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   -2045214501
     * @symbol  ??0IdentityDefinition\@\@QEAA\@AEBUScoreboardId\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @hash   549044603
     * @symbol  ??0IdentityDefinition\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition &&);
    /**
     * @hash   887898592
     * @symbol  ?getEntityId\@IdentityDefinition\@\@QEBAAEBUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   543390812
     * @symbol  ?getFakePlayerName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @hash   18632730
     * @symbol  ?getIdentityType\@IdentityDefinition\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @hash   1495611706
     * @symbol  ?getName\@IdentityDefinition\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$function\@$$A6AAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UActorUniqueID\@\@\@Z\@3\@\@Z
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @hash   -1470257828
     * @symbol  ?getPlayerId\@IdentityDefinition\@\@QEBAAEBUPlayerScoreboardId\@\@XZ
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @hash   -1242442028
     * @symbol  ?getScoreboardId\@IdentityDefinition\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @hash   1070974762
     * @symbol  ?isEntityType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isEntityType() const;
    /**
     * @hash   -2079849378
     * @symbol  ?isFakeType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isFakeType() const;
    /**
     * @hash   1600633348
     * @symbol  ?isHiddenFakePlayerType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isHiddenFakePlayerType() const;
    /**
     * @hash   55117798
     * @symbol  ?isPlayerType\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const;
    /**
     * @hash   -1705466446
     * @symbol  ?isValid\@IdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   1328472270
     * @symbol  ??BIdentityDefinition\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -689968956
     * @symbol  ??4IdentityDefinition\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition const &);
    /**
     * @hash   -1808242
     * @symbol  ??4IdentityDefinition\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition &&);
    /**
     * @hash   1924410027
     * @symbol  ??1IdentityDefinition\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDefinition();
    /**
     * @hash   2039105119
     * @symbol  ?Invalid\@IdentityDefinition\@\@2V1\@B
     */
    MCAPI static class IdentityDefinition const Invalid;
    /**
     * @hash   1037217982
     * @symbol  ?convertFakeToReal\@IdentityDefinition\@\@SA_NAEAV1\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI static bool convertFakeToReal(class IdentityDefinition &, struct PlayerScoreboardId const &);
    /**
     * @hash   -1057864733
     * @symbol  ?isHiddenFakePlayerNameString\@IdentityDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isHiddenFakePlayerNameString(std::string const &);

};