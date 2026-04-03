#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServerChangeBiomeMappingPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServerChangeBiomeMappingPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk111ee0;
    ::ll::UntypedStorage<8, 32> mUnkb620bb;
    ::ll::UntypedStorage<8, 32> mUnke53d84;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServerChangeBiomeMappingPayload(DataTransferServerChangeBiomeMappingPayload const&);
    DataTransferServerChangeBiomeMappingPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataTransferServerChangeBiomeMappingPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::DataTransferServerChangeBiomeMappingPayload&
    operator=(::Editor::Network::DataTransferServerChangeBiomeMappingPayload&&);

    MCNAPI ::Editor::Network::DataTransferServerChangeBiomeMappingPayload&
    operator=(::Editor::Network::DataTransferServerChangeBiomeMappingPayload const&);
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
