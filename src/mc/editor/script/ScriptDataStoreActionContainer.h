#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreActionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4ac3e4;
    ::ll::UntypedStorage<8, 8>  mUnkc98f52;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreActionContainer& operator=(ScriptDataStoreActionContainer const&);
    ScriptDataStoreActionContainer(ScriptDataStoreActionContainer const&);
    ScriptDataStoreActionContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    bindActionToControl(::std::string controlId, ::std::string const& actionPayload);

    MCNAPI ::Scripting::Result_deprecated<void>
    removeActionFromControl(::std::string controlId, ::std::optional<::std::string> actionPayload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
