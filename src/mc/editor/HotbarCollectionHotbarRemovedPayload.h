#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionHotbarRemovedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionHotbarRemovedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk4efdb9;
    ::ll::UntypedStorage<8, 48> mUnk3aea36;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionHotbarRemovedPayload& operator=(HotbarCollectionHotbarRemovedPayload const&);
    HotbarCollectionHotbarRemovedPayload(HotbarCollectionHotbarRemovedPayload const&);
    HotbarCollectionHotbarRemovedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionHotbarRemovedPayload() /*override*/;
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
