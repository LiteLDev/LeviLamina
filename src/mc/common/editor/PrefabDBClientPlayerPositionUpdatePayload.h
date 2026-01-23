#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PrefabDBClientPlayerPositionUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBClientPlayerPositionUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk160794;
    ::ll::UntypedStorage<4, 4>  mUnkf5822a;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBClientPlayerPositionUpdatePayload& operator=(PrefabDBClientPlayerPositionUpdatePayload const&);
    PrefabDBClientPlayerPositionUpdatePayload(PrefabDBClientPlayerPositionUpdatePayload const&);
    PrefabDBClientPlayerPositionUpdatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBClientPlayerPositionUpdatePayload() /*override*/ = default;
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
