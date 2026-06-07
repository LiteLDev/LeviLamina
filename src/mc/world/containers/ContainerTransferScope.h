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

#ifdef LL_PLAT_S
    virtual void createItem(::ItemStack const&, ::std::shared_ptr<::SimpleSparseContainer>);
#else // LL_PLAT_C
    virtual void createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $createItem(::ItemStack const& item, ::std::shared_ptr<::SimpleSparseContainer> createdOutputContainer);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
