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
     * @symbol  ??0IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI IdentityDictionary();
    /**
     * @symbol  ?clearIdentity\@IdentityDictionary\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    /**
     * @symbol  ?convertFakeToReal\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol  ?getAllScoreboardIds\@IdentityDictionary\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;
    /**
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct ActorUniqueID const &) const;
    /**
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @symbol  ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol  ?registerIdentity\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const & registerIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @symbol  ?shouldConvertFakePlayer\@IdentityDictionary\@\@QEAA_NAEBUPlayerScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const &, std::string const &);
    /**
     * @symbol  ??1IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDictionary();

};