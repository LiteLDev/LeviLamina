#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerTransfer.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class ContainerTransferClient : public ::IContainerTransfer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContainerManagerController>> mContainerManagerController;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerTransferClient() /*override*/ = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::ContainerTransferScope> preTransfer() /*override*/;

    // vIndex: 2
    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
