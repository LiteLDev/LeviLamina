#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { struct DataTransferServiceRequestDataOptions; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRequestDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRequestDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk73ce7c;
    ::ll::UntypedStorage<8, 32> mUnk5788f0;
    ::ll::UntypedStorage<8, 48> mUnk3833a6;
    ::ll::UntypedStorage<1, 1>  mUnke3b760;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestDataPayload& operator=(DataTransferServiceRequestDataPayload const&);
    DataTransferServiceRequestDataPayload(DataTransferServiceRequestDataPayload const&);
    DataTransferServiceRequestDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceRequestDataPayload(
        ::mce::UUID const&                                              requestId,
        ::std::string const&                                            collectionName,
        bool                                                            useSnapshot,
        ::Editor::Network::DataTransferServiceRequestDataOptions const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&                                              requestId,
        ::std::string const&                                            collectionName,
        bool                                                            useSnapshot,
        ::Editor::Network::DataTransferServiceRequestDataOptions const& options
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
