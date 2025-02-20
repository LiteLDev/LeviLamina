#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemBeforeEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptSystemBeforeEvents> {
public:
    // ScriptSystemBeforeEvents inner types declare
    // clang-format off
    struct SignalNameSubscriberCount;
    // clang-format on

    // ScriptSystemBeforeEvents inner types define
    struct SignalNameSubscriberCount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkacdf6b;
        ::ll::UntypedStorage<8, 8>  mUnk5d02c5;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignalNameSubscriberCount& operator=(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount(SignalNameSubscriberCount const&);
        SignalNameSubscriberCount();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SignalNameSubscriberCount();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke94250;
    ::ll::UntypedStorage<8, 16> mUnk1881fb;
    ::ll::UntypedStorage<8, 8>  mUnk578908;
    ::ll::UntypedStorage<8, 32> mUnk8513df;
    ::ll::UntypedStorage<8, 32> mUnka9f66b;
    ::ll::UntypedStorage<8, 32> mUnk6701a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemBeforeEvents& operator=(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents(ScriptSystemBeforeEvents const&);
    ScriptSystemBeforeEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptSystemBeforeEvents(::ScriptModuleMinecraft::ScriptSystemBeforeEvents&&);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptSystemBeforeEvents::SignalNameSubscriberCount>
    getFineGrainedSignalSubscriberStats() const;

    MCAPI ::ScriptModuleMinecraft::ScriptSystemBeforeEvents&
    operator=(::ScriptModuleMinecraft::ScriptSystemBeforeEvents&&);

    MCAPI ~ScriptSystemBeforeEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSystemBeforeEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
