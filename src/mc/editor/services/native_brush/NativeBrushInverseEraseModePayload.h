#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushInverseEraseModePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushInverseEraseModePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnkc463f8;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushInverseEraseModePayload& operator=(NativeBrushInverseEraseModePayload const&);
    NativeBrushInverseEraseModePayload(NativeBrushInverseEraseModePayload const&);
    NativeBrushInverseEraseModePayload();

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
