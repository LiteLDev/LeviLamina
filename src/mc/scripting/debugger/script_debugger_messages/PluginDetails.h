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
    PluginDetails& operator=(PluginDetails const&);
    PluginDetails(PluginDetails const&);
    PluginDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails&&);

    MCNAPI bool operator==(::ScriptDebuggerMessages::PluginDetails const&) const;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
