#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor::Network {

class MouseBindingUnregisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MouseBindingUnregisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk80d815;
    ::ll::UntypedStorage<8, 48> mUnk9979ae;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseBindingUnregisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MouseBindingUnregisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MouseBindingUnregisterPayload(::Editor::Network::MouseBindingUnregisterPayload const&);

    MCNAPI MouseBindingUnregisterPayload(::HashedString const& contextId, ::HashedString const& bindingId);

    MCNAPI ::Editor::Network::MouseBindingUnregisterPayload&
    operator=(::Editor::Network::MouseBindingUnregisterPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MouseBindingUnregisterPayload const&);

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
