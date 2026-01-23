#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
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
    virtual ~KeyBindingUnregisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyBindingUnregisterPayload(::Editor::Network::KeyBindingUnregisterPayload const&);

    MCNAPI KeyBindingUnregisterPayload(::HashedString const& contextId, ::HashedString const& bindingId);

    MCNAPI ::Editor::Network::KeyBindingUnregisterPayload&
    operator=(::Editor::Network::KeyBindingUnregisterPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::KeyBindingUnregisterPayload const&);

    MCNAPI void* $ctor(::HashedString const& contextId, ::HashedString const& bindingId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
