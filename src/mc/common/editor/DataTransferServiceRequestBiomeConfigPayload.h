#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class DataTransferServiceRequestBiomeConfigPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::DataTransferServiceRequestBiomeConfigPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk49155f;
    ::ll::UntypedStorage<8, 48> mUnk13b66f;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestBiomeConfigPayload& operator=(DataTransferServiceRequestBiomeConfigPayload const&);
    DataTransferServiceRequestBiomeConfigPayload(DataTransferServiceRequestBiomeConfigPayload const&);
    DataTransferServiceRequestBiomeConfigPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataTransferServiceRequestBiomeConfigPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataTransferServiceRequestBiomeConfigPayload(::mce::UUID requestId, ::HashedString identifier);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID requestId, ::HashedString identifier);
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
