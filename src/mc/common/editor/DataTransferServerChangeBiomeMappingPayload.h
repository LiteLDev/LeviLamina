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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServerChangeBiomeMappingPayload& operator=(DataTransferServerChangeBiomeMappingPayload const&);
    DataTransferServerChangeBiomeMappingPayload(DataTransferServerChangeBiomeMappingPayload const&);
    DataTransferServerChangeBiomeMappingPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServerChangeBiomeMappingPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI
    DataTransferServerChangeBiomeMappingPayload(::Editor::Network::DataTransferServerChangeBiomeMappingPayload const&);

    MCNAPI ::Editor::Network::DataTransferServerChangeBiomeMappingPayload&
    operator=(::Editor::Network::DataTransferServerChangeBiomeMappingPayload&&);

    MCNAPI ::Editor::Network::DataTransferServerChangeBiomeMappingPayload&
    operator=(::Editor::Network::DataTransferServerChangeBiomeMappingPayload const&);
#endif
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
    MCNAPI void* $ctor(::Editor::Network::DataTransferServerChangeBiomeMappingPayload const&);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
