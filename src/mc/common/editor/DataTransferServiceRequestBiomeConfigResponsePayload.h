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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServiceRequestBiomeConfigResponsePayload&
    operator=(DataTransferServiceRequestBiomeConfigResponsePayload const&);
    DataTransferServiceRequestBiomeConfigResponsePayload(DataTransferServiceRequestBiomeConfigResponsePayload const&);
    DataTransferServiceRequestBiomeConfigResponsePayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServiceRequestBiomeConfigResponsePayload(DataTransferServiceRequestBiomeConfigResponsePayload const&);
    DataTransferServiceRequestBiomeConfigResponsePayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload&
    operator=(::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload const&);
#endif
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
