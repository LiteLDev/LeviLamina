#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Detail {

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

    class LiveQuery {
    public:
        // LiveQuery inner types define
        enum class EQueryState : uint {};
    };

    struct DirtyQuery {};
};

} // namespace OreUI::Detail
