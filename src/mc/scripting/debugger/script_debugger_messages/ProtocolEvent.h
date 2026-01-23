#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptDebuggerMessages {

struct ProtocolEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd594f;
    ::ll::UntypedStorage<4, 4>  mUnk554323;
    ::ll::UntypedStorage<8, 24> mUnkab449e;
    ::ll::UntypedStorage<1, 1>  mUnk32b407;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtocolEvent(ProtocolEvent const&);
    ProtocolEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProtocolEvent(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);

    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent&&);

    MCNAPI ::ScriptDebuggerMessages::ProtocolEvent& operator=(::ScriptDebuggerMessages::ProtocolEvent const&);

    MCNAPI ~ProtocolEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::Scripting::ModuleDescriptor>&& pluginDescriptors, bool requirePasscode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
