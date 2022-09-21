/**
 * @file  MC/ScoreboardId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ScoreboardId.
 *
 */
struct ScoreboardId {

#define AFTER_EXTRA
// Add Member There
public:
    __int64 id;
    void* null;
#undef AFTER_EXTRA
public:
    /**
     * @hash   1642635605
     * @symbol ??0ScoreboardId@@QEAA@_J@Z
     */
    MCAPI ScoreboardId(__int64);
    /**
     * @hash   -1019930181
     * @symbol ??0ScoreboardId@@QEAA@XZ
     */
    MCAPI ScoreboardId();
    /**
     * @hash   1103680015
     * @symbol ??0ScoreboardId@@QEAA@AEBU0@@Z
     */
    MCAPI ScoreboardId(struct ScoreboardId const &);
    /**
     * @hash   -895858683
     * @symbol ?getHash@ScoreboardId@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   1478331932
     * @symbol ?getIdentityDef@ScoreboardId@@QEBAAEBVIdentityDefinition@@XZ
     */
    MCAPI class IdentityDefinition const & getIdentityDef() const;
    /**
     * @hash   1010133974
     * @symbol ?isValid@ScoreboardId@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   837233458
     * @symbol ??BScoreboardId@@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -1010342135
     * @symbol ??9ScoreboardId@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator!=(struct ScoreboardId const &) const;
    /**
     * @hash   -415373190
     * @symbol ??EScoreboardId@@QEAAAEAU0@XZ
     */
    MCAPI struct ScoreboardId & operator++();
    /**
     * @hash   -2132899130
     * @symbol ??4ScoreboardId@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct ScoreboardId & operator=(struct ScoreboardId const &);
    /**
     * @hash   -518476314
     * @symbol ??8ScoreboardId@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct ScoreboardId const &) const;
    /**
     * @hash   440583273
     * @symbol ?INVALID@ScoreboardId@@2U1@A
     */
    MCAPI static struct ScoreboardId INVALID;

};