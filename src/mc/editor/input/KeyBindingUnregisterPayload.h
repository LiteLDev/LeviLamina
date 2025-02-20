#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor::Network {

class KeyBindingUnregisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::KeyBindingUnregisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk45a7ee;
    ::ll::UntypedStorage<8, 48> mUnkde396a;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBindingUnregisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyBindingUnregisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyBindingUnregisterPayload(::Editor::Network::KeyBindingUnregisterPayload const&);

    MCAPI KeyBindingUnregisterPayload(::HashedString const& contextId, ::HashedString const& bindingId);

    MCFOLD ::Editor::Network::KeyBindingUnregisterPayload&
    operator=(::Editor::Network::KeyBindingUnregisterPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Network::KeyBindingUnregisterPayload const&);

    MCAPI void* $ctor(::HashedString const& contextId, ::HashedString const& bindingId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
