#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionActiveHotbarChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionActiveHotbarChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk85d3b7;
    ::ll::UntypedStorage<8, 48> mUnkeeadc1;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionActiveHotbarChangedPayload& operator=(HotbarCollectionActiveHotbarChangedPayload const&);
    HotbarCollectionActiveHotbarChangedPayload(HotbarCollectionActiveHotbarChangedPayload const&);
    HotbarCollectionActiveHotbarChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionActiveHotbarChangedPayload() /*override*/;
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
