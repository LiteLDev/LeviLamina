#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerTransfer.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class ContainerTransferClient : public ::IContainerTransfer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk37cc58;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerTransferClient& operator=(ContainerTransferClient const&);
    ContainerTransferClient(ContainerTransferClient const&);
    ContainerTransferClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerTransferClient() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::ContainerTransferScope> preTransfer() /*override*/;

    // vIndex: 2
    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::ContainerTransferScope> $preTransfer();

    MCAPI void $postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&);
    // NOLINTEND
};
