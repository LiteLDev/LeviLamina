/**
 * @file  ScoreboardId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI ScoreboardId(__int64);
    /**
     * @symbol  ??0ScoreboardId\@\@QEAA\@XZ
     */
    MCAPI ScoreboardId();
    /**
     * @symbol  ??0ScoreboardId\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ScoreboardId(struct ScoreboardId const &);
    /**
     * @symbol  ?getHash\@ScoreboardId\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol  ?getIdentityDef\@ScoreboardId\@\@QEBAAEBVIdentityDefinition\@\@XZ
     */
    MCAPI class IdentityDefinition const & getIdentityDef() const;
    /**
     * @symbol  ?isValid\@ScoreboardId\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ??BScoreboardId\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol  ??9ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct ScoreboardId const &) const;
    /**
     * @symbol  ??EScoreboardId\@\@QEAAAEAU0\@XZ
     */
    MCAPI struct ScoreboardId & operator++();
    /**
     * @symbol  ??4ScoreboardId\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScoreboardId & operator=(struct ScoreboardId const &);
    /**
     * @symbol  ??8ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ScoreboardId const &) const;
    /**
     * @symbol  ?INVALID\@ScoreboardId\@\@2U1\@A
     */
    MCAPI static struct ScoreboardId INVALID;

};