#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

class ISparseContainerSetListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISparseContainerSetListener() = default;

    // vIndex: 1
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*) = 0;

    // vIndex: 2
    virtual bool postSetItem(::Container*, ::ItemStack&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
