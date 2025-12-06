#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StoreSearchObject {
public:
    // StoreSearchObject inner types declare
    // clang-format off
    struct SearchInfoContainer;
    struct SearchInfoContainerHandle;
    // clang-format on

    // StoreSearchObject inner types define
    enum class InitState : uint {};

    enum class SearchScreen : uint {};

    enum class SearchState : uint {};

    struct SearchInfoContainer {};

    struct SearchInfoContainerHandle {};
};
