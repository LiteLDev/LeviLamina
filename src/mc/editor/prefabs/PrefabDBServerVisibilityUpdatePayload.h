#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PrefabDBServerVisibilityUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBServerVisibilityUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcaed7d;
    ::ll::UntypedStorage<8, 24> mUnk59d79f;
    ::ll::UntypedStorage<8, 24> mUnkc30848;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServerVisibilityUpdatePayload& operator=(PrefabDBServerVisibilityUpdatePayload const&);
    PrefabDBServerVisibilityUpdatePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PrefabDBServerVisibilityUpdatePayload(::Editor::Network::PrefabDBServerVisibilityUpdatePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::PrefabDBServerVisibilityUpdatePayload const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
