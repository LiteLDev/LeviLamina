#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptCustomBiomeSourceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1d7824;
    ::ll::UntypedStorage<8, 24> mUnk7f9bc0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeSourceConfig& operator=(ScriptCustomBiomeSourceConfig const&);
    ScriptCustomBiomeSourceConfig(ScriptCustomBiomeSourceConfig const&);
    ScriptCustomBiomeSourceConfig();
};

} // namespace Editor::ScriptModule
