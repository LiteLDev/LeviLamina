#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainer : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptSelectionContainer> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59bf9f;
    ::ll::UntypedStorage<8, 8> mUnk581b01;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainer& operator=(ScriptSelectionContainer const&);
    ScriptSelectionContainer(ScriptSelectionContainer const&);
    ScriptSelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSelectionContainer() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
