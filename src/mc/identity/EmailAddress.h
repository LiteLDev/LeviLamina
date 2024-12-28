#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

struct EmailAddress : public ::NewType<::std::string> {
public:
    // prevent constructor by default
    EmailAddress& operator=(EmailAddress const&);
    EmailAddress(EmailAddress const&);
    EmailAddress();
};

} // namespace Social
