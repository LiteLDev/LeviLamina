#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    DataTransferServiceSendDataPayload& operator=(DataTransferServiceSendDataPayload const&);
    DataTransferServiceSendDataPayload(DataTransferServiceSendDataPayload const&);
    DataTransferServiceSendDataPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    DataTransferServiceSendDataPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI DataTransferServiceSendDataPayload(::Editor::Network::DataTransferServiceSendDataPayload const&);

    MCNAPI ::Editor::Network::DataTransferServiceSendDataPayload&
    operator=(::Editor::Network::DataTransferServiceSendDataPayload&&);

    MCNAPI ::Editor::Network::DataTransferServiceSendDataPayload&
    operator=(::Editor::Network::DataTransferServiceSendDataPayload const&);
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
    MCNAPI void* $ctor(::Editor::Network::DataTransferServiceSendDataPayload const&);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
