#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MouseCursorIconPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MouseCursorIconPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk17f8e4;
    ::ll::UntypedStorage<4, 8>  mUnkb88d35;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseCursorIconPayload& operator=(MouseCursorIconPayload const&);
    MouseCursorIconPayload(MouseCursorIconPayload const&);
    MouseCursorIconPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MouseCursorIconPayload() /*override*/ = default;
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
