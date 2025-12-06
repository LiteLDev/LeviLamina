#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct BasicSerializerContext {
public:
    // BasicSerializerContext inner types declare
    // clang-format off
    struct Context;
    struct ContextStack;
    struct LogEntry;
    // clang-format on

    // BasicSerializerContext inner types define
    enum class ContextType : uint {};

    struct Context {};

    struct ContextStack {};

    struct LogEntry {};
};

} // namespace cereal
