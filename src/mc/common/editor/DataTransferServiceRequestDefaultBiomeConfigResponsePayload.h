#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRequestDefaultBiomeConfigResponsePayload
: public ::Editor::Network::NetworkPayload<
      ::Editor::Network::DataTransferServiceRequestDefaultBiomeConfigResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkc76932;
    ::ll::UntypedStorage<8, 32>  mUnke5f2cf;
    ::ll::UntypedStorage<8, 272> mUnkb0f825;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServiceRequestDefaultBiomeConfigResponsePayload&
    operator=(DataTransferServiceRequestDefaultBiomeConfigResponsePayload const&);
    DataTransferServiceRequestDefaultBiomeConfigResponsePayload(
        DataTransferServiceRequestDefaultBiomeConfigResponsePayload const&
    );
    DataTransferServiceRequestDefaultBiomeConfigResponsePayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServiceRequestDefaultBiomeConfigResponsePayload(
        DataTransferServiceRequestDefaultBiomeConfigResponsePayload const&
    );
    DataTransferServiceRequestDefaultBiomeConfigResponsePayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Editor::Network::DataTransferServiceRequestDefaultBiomeConfigResponsePayload&
    operator=(::Editor::Network::DataTransferServiceRequestDefaultBiomeConfigResponsePayload const&);
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
