#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Cursor { struct Position; }
namespace Editor::Cursor { struct Ray; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class CursorServicePositionChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::CursorServicePositionChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 36> mUnk53742e;
    ::ll::UntypedStorage<4, 32> mUnkc71f1e;
    // NOLINTEND

public:
    // prevent constructor by default
    CursorServicePositionChangePayload& operator=(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload(CursorServicePositionChangePayload const&);
    CursorServicePositionChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CursorServicePositionChangePayload() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI
    CursorServicePositionChangePayload(::Editor::Cursor::Ray ray, ::std::optional<::Editor::Cursor::Position> newPos);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Editor::Cursor::Ray ray, ::std::optional<::Editor::Cursor::Position> newPos);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
