#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapMapSizePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapMapSizePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkec2120;
    ::ll::UntypedStorage<4, 4>  mUnk29d822;
    ::ll::UntypedStorage<4, 4>  mUnkb6dba7;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapMapSizePayload& operator=(MinimapMapSizePayload const&);
    MinimapMapSizePayload(MinimapMapSizePayload const&);
    MinimapMapSizePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinimapMapSizePayload() /*override*/ = default;
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
