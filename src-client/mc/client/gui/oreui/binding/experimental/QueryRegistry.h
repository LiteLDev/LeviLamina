#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Experimental::Detail {

struct QueryRegistry {
public:
    // QueryRegistry inner types declare
    // clang-format off
    struct DirtyQuery;
    struct LiveQuery;
    struct QueryTemplate;
    // clang-format on

    // QueryRegistry inner types define
    struct DirtyQuery {};

    struct LiveQuery {};

    struct QueryTemplate {};
};

} // namespace OreUI::Experimental::Detail
