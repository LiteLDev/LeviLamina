#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreMenuContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka60ff2;
    ::ll::UntypedStorage<8, 8>  mUnk1188df;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreMenuContainer& operator=(ScriptDataStoreMenuContainer const&);
    ScriptDataStoreMenuContainer(ScriptDataStoreMenuContainer const&);
    ScriptDataStoreMenuContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> createItem(::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void> updateItem(::std::string id, ::std::string const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
