#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushSwitchBrushPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushSwitchBrushPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1c5257;
    ::ll::UntypedStorage<4, 8> mUnk62d372;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushSwitchBrushPayload& operator=(NativeBrushSwitchBrushPayload const&);
    NativeBrushSwitchBrushPayload(NativeBrushSwitchBrushPayload const&);
    NativeBrushSwitchBrushPayload();

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
