#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct PluginDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk152c4e;
    ::ll::UntypedStorage<8, 32> mUnk1fd52c;
    // NOLINTEND

public:
    // prevent constructor by default
    PluginDetails(PluginDetails const&);
    PluginDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails&&);

    MCNAPI ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails const&);

    MCNAPI bool operator==(::ScriptDebuggerMessages::PluginDetails const&) const;
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
