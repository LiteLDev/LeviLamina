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

class KeyBindingStatePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::KeyBindingStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk4b85c8;
    ::ll::UntypedStorage<8, 48> mUnk95b3b0;
    ::ll::UntypedStorage<4, 8>  mUnkfd7467;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyBindingStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyBindingStatePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyBindingStatePayload(::Editor::Network::KeyBindingStatePayload const&);

    MCNAPI KeyBindingStatePayload(
        ::HashedString const& contextId,
        ::HashedString const& bindingId,
        ::std::optional<int>  processingState
    );

    MCNAPI ::Editor::Network::KeyBindingStatePayload& operator=(::Editor::Network::KeyBindingStatePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::KeyBindingStatePayload const&);

    MCNAPI void*
    $ctor(::HashedString const& contextId, ::HashedString const& bindingId, ::std::optional<int> processingState);
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
