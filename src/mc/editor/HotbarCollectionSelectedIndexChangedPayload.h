#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionSelectedIndexChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionSelectedIndexChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkca53cf;
    ::ll::UntypedStorage<8, 8>  mUnkcd31d5;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionSelectedIndexChangedPayload& operator=(HotbarCollectionSelectedIndexChangedPayload const&);
    HotbarCollectionSelectedIndexChangedPayload(HotbarCollectionSelectedIndexChangedPayload const&);
    HotbarCollectionSelectedIndexChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionSelectedIndexChangedPayload() /*override*/ = default;
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
