#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class IContainerTransfer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IContainerTransfer() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::ContainerTransferScope> preTransfer() = 0;

    // vIndex: 2
    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
