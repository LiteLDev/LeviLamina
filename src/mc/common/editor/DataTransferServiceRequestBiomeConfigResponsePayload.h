#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRequestBiomeConfigResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk8eb748;
    ::ll::UntypedStorage<8, 32>  mUnkaccb3e;
    ::ll::UntypedStorage<8, 272> mUnk9a82ab;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestBiomeConfigResponsePayload&
    operator=(DataTransferServiceRequestBiomeConfigResponsePayload const&);
    DataTransferServiceRequestBiomeConfigResponsePayload(DataTransferServiceRequestBiomeConfigResponsePayload const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataTransferServiceRequestBiomeConfigResponsePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DataTransferServiceRequestBiomeConfigResponsePayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceRequestBiomeConfigResponsePayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
