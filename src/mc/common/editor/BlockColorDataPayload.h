#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BlockColorDataPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::BlockColorDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfff3b0;
    ::ll::UntypedStorage<8, 24> mUnk323ef3;
    ::ll::UntypedStorage<4, 4>  mUnkc9cafc;
    ::ll::UntypedStorage<1, 1>  mUnk1bbe48;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockColorDataPayload& operator=(BlockColorDataPayload const&);
    BlockColorDataPayload(BlockColorDataPayload const&);
    BlockColorDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockColorDataPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
