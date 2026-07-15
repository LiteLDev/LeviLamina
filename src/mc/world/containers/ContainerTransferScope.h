#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
// clang-format on

struct ContainerTransferScope {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerTransferScope() = default;

    virtual void createItem(::ItemStack const&, ::std::shared_ptr<::SimpleSparseContainer>);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
