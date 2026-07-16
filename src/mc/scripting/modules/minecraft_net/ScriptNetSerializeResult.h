#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetSerializeResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6a61e5;
    ::ll::UntypedStorage<8, 32> mUnkd7a2e3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetSerializeResult& operator=(ScriptNetSerializeResult const&);
    ScriptNetSerializeResult(ScriptNetSerializeResult const&);
    ScriptNetSerializeResult();
};

} // namespace ScriptModuleMinecraftNet
