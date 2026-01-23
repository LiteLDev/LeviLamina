#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~CursorServiceCreateCursorPayload() /*override*/ = default;
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
