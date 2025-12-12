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
    enum class FetchRealmError : schar {};

    enum class JoinRealmError : schar {};

    enum class LeaveRealmResult : schar {};

    struct JoinRealmResult {};
};

} // namespace Realms
