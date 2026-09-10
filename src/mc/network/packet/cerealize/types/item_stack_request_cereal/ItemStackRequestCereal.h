#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemDescriptor;
class ItemStackRequestAction;
class ItemStackRequestData;
class NetworkItemInstanceDescriptor;
class RecipeIngredient;
namespace ItemStackRequestCereal { struct BeaconPaymentActionData; }
namespace ItemStackRequestCereal { struct ConsumeActionData; }
namespace ItemStackRequestCereal { struct CraftCreativeActionData; }
namespace ItemStackRequestCereal { struct CraftLoomActionData; }
namespace ItemStackRequestCereal { struct CraftNonImplementedActionData; }
namespace ItemStackRequestCereal { struct CraftRecipeActionData; }
namespace ItemStackRequestCereal { struct CraftRecipeAutoActionData; }
namespace ItemStackRequestCereal { struct CraftRecipeOptionalActionData; }
namespace ItemStackRequestCereal { struct CraftRepairAndDisenchantActionData; }
namespace ItemStackRequestCereal { struct CraftResultsActionData; }
namespace ItemStackRequestCereal { struct CreateActionData; }
namespace ItemStackRequestCereal { struct DestroyActionData; }
namespace ItemStackRequestCereal { struct DropActionData; }
namespace ItemStackRequestCereal { struct EmptyItemDescriptorData; }
namespace ItemStackRequestCereal { struct ItemNameDescriptorData; }
namespace ItemStackRequestCereal { struct ItemTagDescriptorData; }
namespace ItemStackRequestCereal { struct LabTableCombineActionData; }
namespace ItemStackRequestCereal { struct MineBlockActionData; }
namespace ItemStackRequestCereal { struct MolangItemDescriptorData; }
namespace ItemStackRequestCereal { struct NetworkItemInstanceDescriptorData; }
namespace ItemStackRequestCereal { struct PlaceActionData; }
namespace ItemStackRequestCereal { struct RecipeIngredientData; }
namespace ItemStackRequestCereal { struct RequestData; }
namespace ItemStackRequestCereal { struct SwapActionData; }
namespace ItemStackRequestCereal { struct TakeActionData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ItemStackRequestCereal {
// functions
// NOLINTBEGIN
MCAPI void bindActionData(::cereal::ReflectionCtx& ctx);

MCAPI void bindItemDescriptorData(::cereal::ReflectionCtx& ctx);

MCAPI void bindNetworkItemInstanceDescriptorData(::cereal::ReflectionCtx& ctx);

MCAPI void bindRequestData(::cereal::ReflectionCtx& ctx);

MCAPI void bindSlotInfoData(::cereal::ReflectionCtx& ctx);

MCAPI void bindTextProcessingEventOrigin(::cereal::ReflectionCtx& ctx);

MCAPI ::std::unique_ptr<::ItemStackRequestData> requestFromSerializedData(::ItemStackRequestCereal::RequestData data);

MCAPI ::std::variant<
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
    ::ItemStackRequestCereal::CraftResultsActionData>
toActionData(::ItemStackRequestAction const& action);

MCAPI ::ItemDescriptor toItemDescriptor(
    ::std::variant<
        ::ItemStackRequestCereal::EmptyItemDescriptorData,
        ::ItemStackRequestCereal::ItemNameDescriptorData,
        ::ItemStackRequestCereal::MolangItemDescriptorData,
        ::ItemStackRequestCereal::ItemTagDescriptorData> const& data
);

MCAPI ::std::variant<
    ::ItemStackRequestCereal::EmptyItemDescriptorData,
    ::ItemStackRequestCereal::ItemNameDescriptorData,
    ::ItemStackRequestCereal::MolangItemDescriptorData,
    ::ItemStackRequestCereal::ItemTagDescriptorData>
toItemDescriptorData(::ItemDescriptor const& descriptor);

MCAPI ::std::unique_ptr<::ItemStackRequestAction> toItemStackRequestAction(
    ::std::variant<
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
        ::ItemStackRequestCereal::CraftResultsActionData> const& data
);

MCAPI ::NetworkItemInstanceDescriptor
toNetworkItemInstanceDescriptor(::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const& data);

MCAPI ::std::vector<::ItemStackRequestCereal::NetworkItemInstanceDescriptorData>
toNetworkItemInstanceDescriptorDataList(::std::vector<::NetworkItemInstanceDescriptor> const& descriptors);

MCAPI ::std::vector<::NetworkItemInstanceDescriptor> toNetworkItemInstanceDescriptors(
    ::std::vector<::ItemStackRequestCereal::NetworkItemInstanceDescriptorData> const& dataDescriptors
);

MCAPI ::std::vector<::ItemStackRequestCereal::RecipeIngredientData>
toRecipeIngredientDataList(::std::vector<::RecipeIngredient> const& ingredients);

MCAPI ::std::vector<::RecipeIngredient>
toRecipeIngredients(::std::vector<::ItemStackRequestCereal::RecipeIngredientData> const& dataIngredients);

MCAPI ::ItemStackRequestCereal::RequestData toRequestData(::ItemStackRequestData const& request);
// NOLINTEND

} // namespace ItemStackRequestCereal
