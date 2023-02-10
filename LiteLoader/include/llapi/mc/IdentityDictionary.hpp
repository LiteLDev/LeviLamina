/**
 * @file  IdentityDictionary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -56976864
     * @symbol  ??0IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI IdentityDictionary();
    /**
     * @hash   -11867023
     * @symbol  ?clearIdentity\@IdentityDictionary\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    /**
     * @hash   456701873
     * @symbol  ?convertFakeToReal\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   1058486194
     * @symbol  ?getAllScoreboardIds\@IdentityDictionary\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;
    /**
     * @hash   1541811861
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct ActorUniqueID const &) const;
    /**
     * @hash   346904149
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @hash   1605599713
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @hash   -1059531273
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @hash   -502513761
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   471925331
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @hash   1182893642
     * @symbol  ?shouldConvertFakePlayer\@IdentityDictionary\@\@QEAA_NAEBUPlayerScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const &, std::string const &);
    /**
     * @hash   309544462
     * @symbol  ??1IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDictionary();

};