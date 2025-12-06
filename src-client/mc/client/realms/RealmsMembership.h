#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct RealmsMembership {
public:
    // RealmsMembership inner types declare
    // clang-format off
    struct JoinRealmResult;
    // clang-format on

    // RealmsMembership inner types define
    enum class FetchRealmError : uint {};

    enum class JoinRealmError : uint {};

    enum class LeaveRealmResult : uint {};

    struct JoinRealmResult {};
};

} // namespace Realms
