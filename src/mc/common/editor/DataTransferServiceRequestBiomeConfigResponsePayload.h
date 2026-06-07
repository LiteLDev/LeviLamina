#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { struct BiomeConfigIdentifierMappings; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
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
    DataTransferServiceRequestBiomeConfigResponsePayload(DataTransferServiceRequestBiomeConfigResponsePayload const&);
    DataTransferServiceRequestBiomeConfigResponsePayload();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DataTransferServiceRequestBiomeConfigResponsePayload(
        ::mce::UUID                                             requestId,
        ::std::string const&                                    biomeIdentifier,
        ::Editor::Network::BiomeConfigIdentifierMappings const& mappings
    );
#endif

    MCNAPI ::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload&
    operator=(::Editor::Network::DataTransferServiceRequestBiomeConfigResponsePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::mce::UUID                                             requestId,
        ::std::string const&                                    biomeIdentifier,
        ::Editor::Network::BiomeConfigIdentifierMappings const& mappings
    );
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
