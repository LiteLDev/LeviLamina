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
    virtual ~ContainerTransferScope();

    virtual void createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
#endif


    // NOLINTEND
};
