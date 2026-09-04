#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace ScriptModuleMinecraft {

struct ScriptAfterEventBindingInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                         propertyName;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>> propertyReleases;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>              signalName;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>> signalReleases;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptAfterEventBindingInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
