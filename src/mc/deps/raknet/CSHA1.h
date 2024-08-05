#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CSHA1 {
public:
    // prevent constructor by default
    CSHA1& operator=(CSHA1 const&);
    CSHA1(CSHA1 const&);

public:
    // NOLINTBEGIN
    MCAPI CSHA1();

    MCAPI void Final();

    MCAPI uchar* GetHash() const;

    MCAPI void Reset();

    MCAPI void Update(uchar const* pbData, uint uLen);

    MCAPI ~CSHA1();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void Transform(uint* pState, uchar const* pBuffer);

    // NOLINTEND
};
