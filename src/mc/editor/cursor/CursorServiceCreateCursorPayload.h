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

class CursorServiceCreateCursorPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServiceCreateCursorPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 60> mUnka730bd;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServiceCreateCursorPayload& operator=(CursorServiceCreateCursorPayload const&);
    CursorServiceCreateCursorPayload(CursorServiceCreateCursorPayload const&);
    CursorServiceCreateCursorPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CursorServiceCreateCursorPayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CursorServiceCreateCursorPayload(::Editor::Cursor::CursorState const& state);
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
