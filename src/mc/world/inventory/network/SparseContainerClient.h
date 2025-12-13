#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/SparseContainer.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/SparseContainerBackingSetType.h"

// auto generated forward declare list
// clang-format off
class Container;
class IPlayerContainerSetter;
class ISparseContainerSetListener;
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
    // prevent constructor by default
    SparseContainerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainerClient() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C SparseContainerClient(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );

    MCNAPI void _networkUpdateItem(int slot, ::ItemStack const& newItem);

    MCNAPI_C void _pushHistoricPredictionItem(
        int                                        slot,
        int                                        amount,
        ::ItemStackNetId const&                    itemStackNetId,
        ::Bedrock::Safety::RedactableString const& customName,
        short                                      durabilityCorrection,
        ::ItemStack&&                              item
    );

    MCNAPI_C ::ItemStack const&
    _setCreatedItem(::ItemStackRequestId const& currentRequestId, int slot, ::ItemStack const& item);

    MCNAPI_C void clearAllPredictions(::ItemStackRequestId const& requestId, bool shouldBeEmpty, ::Player& player);

    MCNAPI_C ::SparseContainerClient::PushSlotPredictionResult tryPushSlotPrediction(
        ::ItemStackRequestId const&                requestId,
        int                                        requestedSlot,
        int                                        backingSlot,
        int                                        amount,
        ::ItemStackNetId const&                    itemStackNetId,
        ::Bedrock::Safety::RedactableString const& customName,
        ::ItemStack*                               zeroedOutItem,
        short                                      durabilityCorrection
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<::SparseContainerClient::PushSlotPredictionResult, ::std::string> const&
    pushSlotPredictionResultMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Container&                                     backingContainer,
        ::SparseContainerBackingSetType                  backingSetType,
        bool                                             isItemStackNetManagerEnabled,
        ::std::unique_ptr<::ISparseContainerSetListener> netManagerSetter,
        ::std::unique_ptr<::IPlayerContainerSetter>      playerSetter
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainerContentChangeListener();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
