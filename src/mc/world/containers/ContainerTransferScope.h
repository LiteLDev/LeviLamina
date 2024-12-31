#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
// clang-format on

struct ContainerTransferScope {
public:
    // prevent constructor by default
    ContainerTransferScope& operator=(ContainerTransferScope const&);
    ContainerTransferScope(ContainerTransferScope const&);
    ContainerTransferScope();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerTransferScope() = default;

    // vIndex: 1
    virtual void createItem(::ItemStack const&, ::std::shared_ptr<::SimpleSparseContainer>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
