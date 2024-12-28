#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Cursor { struct CursorState; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class CursorServiceChangeStatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServiceChangeStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 60> mUnk3217ad;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServiceChangeStatePayload& operator=(CursorServiceChangeStatePayload const&);
    CursorServiceChangeStatePayload(CursorServiceChangeStatePayload const&);
    CursorServiceChangeStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CursorServiceChangeStatePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CursorServiceChangeStatePayload(::Editor::Cursor::CursorState const& state);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::Cursor::CursorState const& state);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
