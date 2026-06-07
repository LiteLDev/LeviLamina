#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushParameterChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushParameterChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk19ee05;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushParameterChangePayload& operator=(NativeBrushParameterChangePayload const&);
    NativeBrushParameterChangePayload(NativeBrushParameterChangePayload const&);
    NativeBrushParameterChangePayload();

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
