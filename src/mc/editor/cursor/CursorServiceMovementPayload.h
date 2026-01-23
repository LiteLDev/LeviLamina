#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class CursorServiceMovementPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServiceMovementPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1ea835;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServiceMovementPayload& operator=(CursorServiceMovementPayload const&);
    CursorServiceMovementPayload(CursorServiceMovementPayload const&);
    CursorServiceMovementPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CursorServiceMovementPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
