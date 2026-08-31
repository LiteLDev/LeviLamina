#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptWorldInitializeAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldInitializeAfterEventIntermediateData& operator=(ScriptWorldInitializeAfterEventIntermediateData const&);
    ScriptWorldInitializeAfterEventIntermediateData(ScriptWorldInitializeAfterEventIntermediateData const&);
    ScriptWorldInitializeAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
