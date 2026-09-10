#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/BeaconPaymentActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/ConsumeActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftCreativeActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftLoomActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftNonImplementedActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftRecipeActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftRecipeAutoActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftRecipeOptionalActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftRepairAndDisenchantActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CraftResultsActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/CreateActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/DestroyActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/DropActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/LabTableCombineActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/MineBlockActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/PlaceActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/SwapActionData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/TakeActionData.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
struct ItemStackRequestIdTag;
// clang-format on

namespace ItemStackRequestPacketData {

struct RequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackRequestId> mClientRequestId;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::ItemStackRequestCereal::TakeActionData,
            ::ItemStackRequestCereal::PlaceActionData,
            ::ItemStackRequestCereal::SwapActionData,
            ::ItemStackRequestCereal::DropActionData,
            ::ItemStackRequestCereal::DestroyActionData,
            ::ItemStackRequestCereal::ConsumeActionData,
            ::ItemStackRequestCereal::CreateActionData,
            ::ItemStackRequestCereal::LabTableCombineActionData,
            ::ItemStackRequestCereal::BeaconPaymentActionData,
            ::ItemStackRequestCereal::MineBlockActionData,
            ::ItemStackRequestCereal::CraftRecipeActionData,
            ::ItemStackRequestCereal::CraftRecipeAutoActionData,
            ::ItemStackRequestCereal::CraftCreativeActionData,
            ::ItemStackRequestCereal::CraftRecipeOptionalActionData,
            ::ItemStackRequestCereal::CraftRepairAndDisenchantActionData,
            ::ItemStackRequestCereal::CraftLoomActionData,
            ::ItemStackRequestCereal::CraftNonImplementedActionData,
            ::ItemStackRequestCereal::CraftResultsActionData>>>
                                                            mActions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mStringsToFilter;
    ::ll::TypedStorage<4, 4, ::TextProcessingEventOrigin>   mStringsToFilterOrigin;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::ItemStackRequestPacketData::RequestData const&) const;
    // NOLINTEND
};

} // namespace ItemStackRequestPacketData
