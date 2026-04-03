#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapActiveStatusPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapActiveStatusPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkec9df2;
    ::ll::UntypedStorage<1, 1>  mUnk6739d4;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapActiveStatusPayload& operator=(MinimapActiveStatusPayload const&);
    MinimapActiveStatusPayload(MinimapActiveStatusPayload const&);
    MinimapActiveStatusPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinimapActiveStatusPayload() /*override*/ = default;
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
