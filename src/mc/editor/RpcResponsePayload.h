#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RpcResponsePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::RpcResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk30fee5;
    ::ll::UntypedStorage<8, 32> mUnkd8a56c;
    ::ll::UntypedStorage<1, 1>  mUnk8c5197;
    ::ll::UntypedStorage<8, 32> mUnk7eecbd;
    // NOLINTEND

public:
    // prevent constructor by default
    RpcResponsePayload& operator=(RpcResponsePayload const&);
    RpcResponsePayload(RpcResponsePayload const&);
    RpcResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RpcResponsePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
