#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerTransferScope.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class SimpleSparseContainer;
// clang-format on

struct ContainerTransferClientScope : public ::ContainerTransferScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk808ea7;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerTransferClientScope& operator=(ContainerTransferClientScope const&);
    ContainerTransferClientScope(ContainerTransferClientScope const&);
    ContainerTransferClientScope();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void createItem(::ItemStack const&, ::std::shared_ptr<::SimpleSparseContainer>) /*override*/;

    // vIndex: 0
    virtual ~ContainerTransferClientScope() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
