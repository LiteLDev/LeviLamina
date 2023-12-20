#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct HttpAuthContext {
public:
    // prevent constructor by default
    HttpAuthContext& operator=(HttpAuthContext const&);
    HttpAuthContext(HttpAuthContext const&);
    HttpAuthContext();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HttpAuthContext@rtc@@UEAA@XZ
    virtual ~HttpAuthContext() = default;

    // NOLINTEND
};

}; // namespace rtc
