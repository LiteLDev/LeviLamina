#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRequestDefaultBiomeConfigPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRequestDefaultBiomeConfigPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka188e8;
    ::ll::UntypedStorage<8, 48> mUnke5b92b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestDefaultBiomeConfigPayload&
    operator=(DataTransferServiceRequestDefaultBiomeConfigPayload const&);
    DataTransferServiceRequestDefaultBiomeConfigPayload(DataTransferServiceRequestDefaultBiomeConfigPayload const&);
    DataTransferServiceRequestDefaultBiomeConfigPayload();

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
