/**
 * @file  IdentityDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1299071745
     * @symbol ??0IdentityDefinition@@QEAA@AEBV0@@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition const &);
    /**
     * @hash   -1550523001
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, std::string const &);
    /**
     * @hash   -1518259881
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   1386313515
     * @symbol ??0IdentityDefinition@@QEAA@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
     */
    MCAPI IdentityDefinition(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @hash   -314394677
     * @symbol ??0IdentityDefinition@@QEAA@$$QEAV0@@Z
     */
    MCAPI IdentityDefinition(class IdentityDefinition &&);
    /**
     * @hash   781635056
     * @symbol ?getEntityId@IdentityDefinition@@QEBAAEBUActorUniqueID@@XZ
     */
    MCAPI struct ActorUniqueID const & getEntityId() const;
    /**
     * @hash   290148092
     * @symbol ?getFakePlayerName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFakePlayerName() const;
    /**
     * @hash   753051994
     * @symbol ?getIdentityType@IdentityDefinition@@QEBA?AW4Type@1@XZ
     */
    MCAPI enum class IdentityDefinition::Type getIdentityType() const;
    /**
     * @hash   632172426
     * @symbol ?getName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
     */
    MCAPI std::string const & getName(class std::function<std::string const & (struct ActorUniqueID)> const &) const;
    /**
     * @hash   -604758164
     * @symbol ?getPlayerId@IdentityDefinition@@QEBAAEBUPlayerScoreboardId@@XZ
     */
    MCAPI struct PlayerScoreboardId const & getPlayerId() const;
    /**
     * @hash   -1339064812
     * @symbol ?getScoreboardId@IdentityDefinition@@QEBAAEBUScoreboardId@@XZ
     */
    MCAPI struct ScoreboardId const & getScoreboardId() const;
    /**
     * @hash   207535482
     * @symbol ?isEntityType@IdentityDefinition@@QEBA_NXZ
     */
    MCAPI bool isEntityType() const;
    /**
     * @hash   1351678638
     * @symbol ?isFakeType@IdentityDefinition@@QEBA_NXZ
     */
    MCAPI bool isFakeType() const;
    /**
     * @hash   1495553764
     * @symbol ?isHiddenFakePlayerType@IdentityDefinition@@QEBA_NXZ
     */
    MCAPI bool isHiddenFakePlayerType() const;
    /**
     * @hash   -808321482
     * @symbol ?isPlayerType@IdentityDefinition@@QEBA_NXZ
     */
    MCAPI bool isPlayerType() const;
    /**
     * @hash   1726061570
     * @symbol ?isValid@IdentityDefinition@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   465032990
     * @symbol ??BIdentityDefinition@@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -1553408236
     * @symbol ??4IdentityDefinition@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition const &);
    /**
     * @hash   -865247522
     * @symbol ??4IdentityDefinition@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class IdentityDefinition & operator=(class IdentityDefinition &&);
    /**
     * @hash   -92782789
     * @symbol ??1IdentityDefinition@@QEAA@XZ
     */
    MCAPI ~IdentityDefinition();
    /**
     * @hash   1144452559
     * @symbol ?Invalid@IdentityDefinition@@2V1@B
     */
    MCAPI static class IdentityDefinition const Invalid;
    /**
     * @hash   173778702
     * @symbol ?convertFakeToReal@IdentityDefinition@@SA_NAEAV1@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI static bool convertFakeToReal(class IdentityDefinition &, struct PlayerScoreboardId const &);
    /**
     * @hash   -1921304013
     * @symbol ?isHiddenFakePlayerNameString@IdentityDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool isHiddenFakePlayerNameString(std::string const &);

};