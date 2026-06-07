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
    PluginDetails& operator=(PluginDetails const&);
    PluginDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PluginDetails(::ScriptDebuggerMessages::PluginDetails const&);

    MCNAPI PluginDetails(::std::string name, ::std::string moduleId);

    MCNAPI ::ScriptDebuggerMessages::PluginDetails& operator=(::ScriptDebuggerMessages::PluginDetails&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptDebuggerMessages::PluginDetails const&);

    MCNAPI void* $ctor(::std::string name, ::std::string moduleId);
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
