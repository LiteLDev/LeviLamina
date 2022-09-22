/**
 * @file  IdentityDictionary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentityDictionary.
 *
 */
class IdentityDictionary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDICTIONARY
public:
    class IdentityDictionary& operator=(class IdentityDictionary const &) = delete;
    IdentityDictionary(class IdentityDictionary const &) = delete;
#endif

public:
    /**
     * @hash   -785783888
     * @symbol ??0IdentityDictionary@@QEAA@XZ
     */
    MCAPI IdentityDictionary();
    /**
     * @hash   -667007631
     * @symbol ?clearIdentity@IdentityDictionary@@QEAA_NAEBUScoreboardId@@@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    /**
     * @hash   -198438735
     * @symbol ?convertFakeToReal@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   403345586
     * @symbol ?getAllScoreboardIds@IdentityDictionary@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;
    /**
     * @hash   886671253
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUActorUniqueID@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct ActorUniqueID const &) const;
    /**
     * @hash   -308236459
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @hash   950459105
     * @symbol ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @hash   -1714671881
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUActorUniqueID@@@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @hash   -1157654369
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   -183215277
     * @symbol ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @hash   527753034
     * @symbol ?shouldConvertFakePlayer@IdentityDictionary@@QEAA_NAEBUPlayerScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const &, std::string const &);
    /**
     * @hash   -418908914
     * @symbol ??1IdentityDictionary@@QEAA@XZ
     */
    MCAPI ~IdentityDictionary();

};