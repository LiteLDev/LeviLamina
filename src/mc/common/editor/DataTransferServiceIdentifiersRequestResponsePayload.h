#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceIdentifiersRequestResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceIdentifiersRequestResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk811a51;
    ::ll::UntypedStorage<8, 24> mUnkecf48c;
    ::ll::UntypedStorage<1, 1>  mUnk1f1cfe;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceIdentifiersRequestResponsePayload&
    operator=(DataTransferServiceIdentifiersRequestResponsePayload const&);
    DataTransferServiceIdentifiersRequestResponsePayload(DataTransferServiceIdentifiersRequestResponsePayload const&);
    DataTransferServiceIdentifiersRequestResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataTransferServiceIdentifiersRequestResponsePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DataTransferServiceIdentifiersRequestResponsePayload() /*override*/;
#endif

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
