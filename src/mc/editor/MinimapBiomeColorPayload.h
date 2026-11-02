#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapBiomeColorPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapBiomeColorPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7c442a;
    ::ll::UntypedStorage<8, 64> mUnka481e3;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapBiomeColorPayload& operator=(MinimapBiomeColorPayload const&);
    MinimapBiomeColorPayload(MinimapBiomeColorPayload const&);
    MinimapBiomeColorPayload();

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
