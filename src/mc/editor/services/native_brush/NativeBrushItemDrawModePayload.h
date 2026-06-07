#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushItemDrawModePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushItemDrawModePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk48ec3b;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushItemDrawModePayload& operator=(NativeBrushItemDrawModePayload const&);
    NativeBrushItemDrawModePayload(NativeBrushItemDrawModePayload const&);
    NativeBrushItemDrawModePayload();

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
