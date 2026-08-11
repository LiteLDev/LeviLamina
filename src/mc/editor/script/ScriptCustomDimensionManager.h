#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

namespace Editor::ScriptModule {

class ScriptCustomDimensionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk940041;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomDimensionManager& operator=(ScriptCustomDimensionManager const&);
    ScriptCustomDimensionManager(ScriptCustomDimensionManager const&);
    ScriptCustomDimensionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> addDimension(::std::string const& dimensionName);

    MCNAPI ::Scripting::Result_deprecated<void> removeDimension(::std::string const& dimensionName);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
