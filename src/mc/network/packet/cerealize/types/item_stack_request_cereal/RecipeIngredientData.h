#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/EmptyItemDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/ItemNameDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/ItemTagDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/MolangItemDescriptorData.h"

namespace ItemStackRequestCereal {

struct RecipeIngredientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::ItemStackRequestCereal::EmptyItemDescriptorData,
            ::ItemStackRequestCereal::ItemNameDescriptorData,
            ::ItemStackRequestCereal::MolangItemDescriptorData,
            ::ItemStackRequestCereal::ItemTagDescriptorData>>
                                     mItemDescriptor;
    ::ll::TypedStorage<2, 2, ushort> mStackSize;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
