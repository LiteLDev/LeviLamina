#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor::Input { class MouseBinding; }
// clang-format on

namespace Editor::Network {

class MouseBindingRegisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MouseBindingRegisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7135e9;
    ::ll::UntypedStorage<8, 48> mUnk192cd4;
    ::ll::UntypedStorage<4, 4>  mUnkf381c3;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBindingRegisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MouseBindingRegisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MouseBindingRegisterPayload(::Editor::Network::MouseBindingRegisterPayload const&);

    MCNAPI MouseBindingRegisterPayload(
        ::HashedString const&                contextId,
        ::HashedString const&                bindingId,
        ::Editor::Input::MouseBinding const& binding
    );

    MCNAPI ::Editor::Network::MouseBindingRegisterPayload&
    operator=(::Editor::Network::MouseBindingRegisterPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MouseBindingRegisterPayload const&);

    MCNAPI void* $ctor(
        ::HashedString const&                contextId,
        ::HashedString const&                bindingId,
        ::Editor::Input::MouseBinding const& binding
    );
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
