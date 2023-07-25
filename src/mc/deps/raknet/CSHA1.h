#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CSHA1
public:
    CSHA1& operator=(CSHA1 const&) = delete;
    CSHA1(CSHA1 const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CSHA1\@\@QEAA\@XZ
     */
    MCAPI CSHA1();
    /**
     * @symbol ?Final\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Final();
    /**
     * @symbol ?GetHash\@CSHA1\@\@QEBAPEAEXZ
     */
    MCAPI unsigned char* GetHash() const;
    /**
     * @symbol ?Reset\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Reset();
    /**
     * @symbol ?Update\@CSHA1\@\@QEAAXPEBEI\@Z
     */
    MCAPI void Update(unsigned char const*, unsigned int);
    /**
     * @symbol ??1CSHA1\@\@QEAA\@XZ
     */
    MCAPI ~CSHA1();

    // private:
    /**
     * @symbol ?Transform\@CSHA1\@\@AEAAXPEAIPEBE\@Z
     */
    MCAPI void Transform(unsigned int*, unsigned char const*);

private:
};
