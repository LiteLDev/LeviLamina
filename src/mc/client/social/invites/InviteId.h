#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Invites {

struct InviteId : public ::NewType<::std::string> {
public:
    // prevent constructor by default
    InviteId& operator=(InviteId const&);
    InviteId(InviteId const&);
    InviteId();
};

} // namespace Invites
