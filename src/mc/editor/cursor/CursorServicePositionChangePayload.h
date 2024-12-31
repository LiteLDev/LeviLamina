#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class CursorServicePositionChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServicePositionChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnk53742e;
    ::ll::UntypedStorage<4, 16> mUnkc675c0;
    ::ll::UntypedStorage<1, 2>  mUnka76729;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServicePositionChangePayload& operator=(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CursorServicePositionChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
