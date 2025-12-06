#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ScriptObjRef {
public:
    // ScriptObjRef inner types declare
    // clang-format off
    struct GeneratorData;
    struct PromiseData;
    // clang-format on

    // ScriptObjRef inner types define
    struct GeneratorData {};

    struct PromiseData {};
};

} // namespace Scripting::QuickJS
