#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStorePaneContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk49b16c;
    ::ll::UntypedStorage<8, 8>  mUnk64a573;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStorePaneContainer& operator=(ScriptDataStorePaneContainer const&);
    ScriptDataStorePaneContainer(ScriptDataStorePaneContainer const&);
    ScriptDataStorePaneContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    createPane(::Scripting::ContextConfig const& contextConfig, ::std::string id);

    MCNAPI ::Scripting::Result_deprecated<void> destroyPane(::std::string id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
