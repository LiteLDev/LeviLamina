#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Experimental::Detail {

class QueryRegistry {
public:
    // QueryRegistry inner types declare
    // clang-format off
    class QueryTemplate;
    class LiveQuery;
    struct DirtyQuery;
    // clang-format on

    // QueryRegistry inner types define
    class QueryTemplate {};

    class LiveQuery {};

    struct DirtyQuery {};
};

} // namespace OreUI::Experimental::Detail
