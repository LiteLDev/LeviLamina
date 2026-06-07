#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { struct DataTransferServiceSendNewDataOptions; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceSendDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceSendDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd2ba27;
    ::ll::UntypedStorage<8, 32> mUnk17e16c;
    ::ll::UntypedStorage<8, 32> mUnk3b5148;
    ::ll::UntypedStorage<1, 1>  mUnk497cd7;
    ::ll::UntypedStorage<8, 24> mUnk518bc7;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSendDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceSendDataPayload(::Editor::Network::DataTransferServiceSendDataPayload const&);

    MCNAPI DataTransferServiceSendDataPayload(
        ::std::string const&                                                      collectionName,
        ::std::string const&                                                      identifier,
        ::std::string const&                                                      jsonData,
        bool                                                                      lockToBiome,
        ::std::optional<::Editor::Network::DataTransferServiceSendNewDataOptions> options
    );

    MCNAPI ::Editor::Network::DataTransferServiceSendDataPayload&
    operator=(::Editor::Network::DataTransferServiceSendDataPayload&&);

    MCNAPI ::Editor::Network::DataTransferServiceSendDataPayload&
    operator=(::Editor::Network::DataTransferServiceSendDataPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::DataTransferServiceSendDataPayload const&);

    MCNAPI void* $ctor(
        ::std::string const&                                                      collectionName,
        ::std::string const&                                                      identifier,
        ::std::string const&                                                      jsonData,
        bool                                                                      lockToBiome,
        ::std::optional<::Editor::Network::DataTransferServiceSendNewDataOptions> options
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
