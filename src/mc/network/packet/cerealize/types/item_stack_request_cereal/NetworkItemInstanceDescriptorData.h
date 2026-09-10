#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/EmptyItemDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/ItemNameDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/ItemTagDescriptorData.h"
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/MolangItemDescriptorData.h"

namespace ItemStackRequestCereal {

struct NetworkItemInstanceDescriptorData {
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
    ::ll::TypedStorage<2, 2, ushort>         mStackSize;
    ::ll::TypedStorage<4, 4, uint>           mBlockRuntimeId;
    ::ll::TypedStorage<8, 32, ::std::string> mUserDataBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkItemInstanceDescriptorData& operator=(NetworkItemInstanceDescriptorData const&);
    NetworkItemInstanceDescriptorData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkItemInstanceDescriptorData(::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackRequestCereal::NetworkItemInstanceDescriptorData const&);
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
