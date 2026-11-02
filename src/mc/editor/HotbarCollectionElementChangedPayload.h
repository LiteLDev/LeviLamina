#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionElementChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionElementChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk438162;
    ::ll::UntypedStorage<8, 48> mUnkb315b0;
    ::ll::UntypedStorage<8, 8>  mUnkf78477;
    ::ll::UntypedStorage<8, 96> mUnkead045;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionElementChangedPayload& operator=(HotbarCollectionElementChangedPayload const&);
    HotbarCollectionElementChangedPayload(HotbarCollectionElementChangedPayload const&);
    HotbarCollectionElementChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionElementChangedPayload() /*override*/;
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
