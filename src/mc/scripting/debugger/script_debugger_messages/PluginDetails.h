#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct PluginDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk24f672;
    ::ll::UntypedStorage<8, 32> mUnk6bb1f9;
    // NOLINTEND

public:
    // prevent constructor by default
    PluginDetails(PluginDetails const&);
    PluginDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails&&);

    MCFOLD ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails const&);

    MCAPI bool operator==(::ScriptDebuggerMessages::PluginDetails const&) const;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
