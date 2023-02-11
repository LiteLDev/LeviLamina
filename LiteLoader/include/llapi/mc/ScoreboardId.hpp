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
     * @hash   -1788907787
     * @symbol  ??0ScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI ScoreboardId(__int64);
    /**
     * @hash   -156506277
     * @symbol  ??0ScoreboardId\@\@QEAA\@XZ
     */
    MCAPI ScoreboardId();
    /**
     * @hash   1967103919
     * @symbol  ??0ScoreboardId\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ScoreboardId(struct ScoreboardId const &);
    /**
     * @hash   -32419403
     * @symbol  ?getHash\@ScoreboardId\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   -1953196084
     * @symbol  ?getIdentityDef\@ScoreboardId\@\@QEBAAEBVIdentityDefinition\@\@XZ
     */
    MCAPI class IdentityDefinition const & getIdentityDef() const;
    /**
     * @hash   1873573254
     * @symbol  ?isValid\@ScoreboardId\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   1700672738
     * @symbol  ??BScoreboardId\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -146902855
     * @symbol  ??9ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct ScoreboardId const &) const;
    /**
     * @hash   448066090
     * @symbol  ??EScoreboardId\@\@QEAAAEAU0\@XZ
     */
    MCAPI struct ScoreboardId & operator++();
    /**
     * @hash   -1269475226
     * @symbol  ??4ScoreboardId\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScoreboardId & operator=(struct ScoreboardId const &);
    /**
     * @hash   -1077935066
     * @symbol  ??8ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ScoreboardId const &) const;
    /**
     * @hash   1527328201
     * @symbol  ?INVALID\@ScoreboardId\@\@2U1\@A
     */
    MCAPI static struct ScoreboardId INVALID;

};