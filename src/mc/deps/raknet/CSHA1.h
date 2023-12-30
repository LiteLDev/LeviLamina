#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {
public:
    // prevent constructor by default
    CSHA1& operator=(CSHA1 const&);
    CSHA1(CSHA1 const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CSHA1@@QEAA@XZ
    MCAPI CSHA1();

    // symbol: ?Final@CSHA1@@QEAAXXZ
    MCAPI void Final();

    // symbol: ?GetHash@CSHA1@@QEBAPEAEXZ
    MCAPI uchar* GetHash() const;

    // symbol: ?Reset@CSHA1@@QEAAXXZ
    MCAPI void Reset();

    // symbol: ?Update@CSHA1@@QEAAXPEBEI@Z
    MCAPI void Update(uchar const* pbData, uint uLen);

    // symbol: ??1CSHA1@@QEAA@XZ
    MCAPI ~CSHA1();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Transform@CSHA1@@AEAAXPEAIPEBE@Z
    MCAPI void Transform(uint* pState, uchar const* pBuffer);

    // NOLINTEND
};
