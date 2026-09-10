#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/item_stack_request_packet_data/RequestData.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestBatch;
namespace ItemStackRequestPacketData { struct RequestData; }
// clang-format on

struct ItemStackRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackRequestPacketData::RequestData>> mRequests;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ItemStackRequestPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit ItemStackRequestPacketPayload(::ItemStackRequestBatch const& batch);
#endif

    MCAPI ::std::unique_ptr<::ItemStackRequestBatch> toRequestBatch() const;

#ifdef LL_PLAT_C
    MCAPI ~ItemStackRequestPacketPayload();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemStackRequestBatch const& batch);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
