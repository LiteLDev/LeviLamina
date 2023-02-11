/**
 * @file  CSHA1.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CSHA1.
 *
 */
class CSHA1 {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    class CSHA1& operator=(class CSHA1 const &) = delete;
    CSHA1(class CSHA1 const &) = delete;
#endif

public:
    /**
     * @hash   -513025564
     * @symbol  ??0CSHA1\@\@QEAA\@XZ
     */
    MCAPI CSHA1();
    /**
     * @hash   -922021135
     * @symbol  ?Final\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Final();
    /**
     * @hash   -1855737969
     * @symbol  ?GetHash\@CSHA1\@\@QEBAPEAEXZ
     */
    MCAPI unsigned char * GetHash() const;
    /**
     * @hash   -1056133133
     * @symbol  ?Reset\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Reset();
    /**
     * @hash   -706585662
     * @symbol  ?Update\@CSHA1\@\@QEAAXPEBEI\@Z
     */
    MCAPI void Update(unsigned char const *, unsigned int);
    /**
     * @hash   1728414244
     * @symbol  ??1CSHA1\@\@QEAA\@XZ
     */
    MCAPI ~CSHA1();

//private:
    /**
     * @hash   -1619971648
     * @symbol  ?Transform\@CSHA1\@\@AEAAXPEAIPEBE\@Z
     */
    MCAPI void Transform(unsigned int *, unsigned char const *);

private:

};