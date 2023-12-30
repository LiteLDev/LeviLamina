#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class CryptString {
public:
    // prevent constructor by default
    CryptString& operator=(CryptString const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CryptString@rtc@@QEAA@XZ
    MCAPI CryptString();

    // symbol: ??0CryptString@rtc@@QEAA@AEBV01@@Z
    MCAPI CryptString(class rtc::CryptString const&);

    // symbol: ??1CryptString@rtc@@QEAA@XZ
    MCAPI ~CryptString();

    // NOLINTEND
};

}; // namespace rtc
