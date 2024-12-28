#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

struct AuthToken : public ::NewType<::std::string> {
public:
    // prevent constructor by default
    AuthToken& operator=(AuthToken const&);
    AuthToken(AuthToken const&);
    AuthToken();
};

} // namespace Social
