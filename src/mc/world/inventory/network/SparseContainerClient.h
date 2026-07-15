#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/SparseContainer.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
struct ItemStackNetIdTag;
struct ItemStackRequestIdTag;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SparseContainerClient : public ::SparseContainer {
public:
    // SparseContainerClient inner types define
    enum class PushSlotPredictionResult : int {
        Succeeded                  = 0,
        FailedWithFuturePrediction = 1,
        FailedWithError            = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainerClient() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _networkUpdateItem(int slot, ::ItemStack const& newItem);

#ifdef LL_PLAT_C
    MCNAPI void _pushHistoricPredictionItem(
        int                                        slot,
        int                                        amount,
        ::ItemStackNetId const&                    itemStackNetId,
        ::Bedrock::Safety::RedactableString const& customName,
        short                                      durabilityCorrection,
        ::ItemStack&&                              item
    );

    MCNAPI ::ItemStack const&
    _setCreatedItem(::ItemStackRequestId const& currentRequestId, int slot, ::ItemStack const& item);

    MCNAPI void clearAllPredictions(::ItemStackRequestId const& requestId, bool shouldBeEmpty, ::Player& player);

    MCNAPI ::SparseContainerClient::PushSlotPredictionResult tryPushSlotPrediction(
        ::ItemStackRequestId const&                requestId,
        int                                        requestedSlot,
        int                                        backingSlot,
        int                                        amount,
        ::ItemStackNetId const&                    itemStackNetId,
        ::Bedrock::Safety::RedactableString const& customName,
        ::ItemStack*                               zeroedOutItem,
        short                                      durabilityCorrection
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string const
    getPushSlotPredictionResultName(::SparseContainerClient::PushSlotPredictionResult result);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
