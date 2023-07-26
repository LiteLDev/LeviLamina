#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {

public:
    // prevent constructor by default
    CSHA1& operator=(CSHA1 const&) = delete;
    CSHA1(CSHA1 const&)            = delete;

public:
    /**
     * @symbol ??0CSHA1\@\@QEAA\@XZ
     */
    MCAPI CSHA1(); // NOLINT
    /**
     * @symbol ?Final\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Final(); // NOLINT
    /**
     * @symbol ?GetHash\@CSHA1\@\@QEBAPEAEXZ
     */
    MCAPI unsigned char* GetHash() const; // NOLINT
    /**
     * @symbol ?Reset\@CSHA1\@\@QEAAXXZ
     */
    MCAPI void Reset(); // NOLINT
    /**
     * @symbol ?Update\@CSHA1\@\@QEAAXPEBEI\@Z
     */
    MCAPI void Update(unsigned char const*, unsigned int); // NOLINT
    /**
     * @symbol ??1CSHA1\@\@QEAA\@XZ
     */
    MCAPI ~CSHA1(); // NOLINT

    // private:
    /**
     * @symbol ?Transform\@CSHA1\@\@AEAAXPEAIPEBE\@Z
     */
    MCAPI void Transform(unsigned int*, unsigned char const*); // NOLINT

private:
};
