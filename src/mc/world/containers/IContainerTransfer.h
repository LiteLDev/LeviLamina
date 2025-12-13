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
    virtual ~IContainerTransfer() = default;

    virtual ::std::unique_ptr<::ContainerTransferScope> preTransfer() = 0;

    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
