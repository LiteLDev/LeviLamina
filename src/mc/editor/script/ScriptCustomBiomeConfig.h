#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptCustomBiomeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e7d6c;
    ::ll::UntypedStorage<8, 24> mUnk1656d0;
    ::ll::UntypedStorage<8, 24> mUnk6e743d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeConfig& operator=(ScriptCustomBiomeConfig const&);
    ScriptCustomBiomeConfig(ScriptCustomBiomeConfig const&);
    ScriptCustomBiomeConfig();
};

} // namespace Editor::ScriptModule
