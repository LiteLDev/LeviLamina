#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushBlockChangeListPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushBlockChangeListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk498d75;
    ::ll::UntypedStorage<8, 24> mUnk6cf873;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushBlockChangeListPayload& operator=(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NativeBrushBlockChangeListPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
