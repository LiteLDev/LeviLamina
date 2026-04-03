#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

struct DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk277a07;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenScreenPromise& operator=(DataDrivenScreenPromise const&);
    DataDrivenScreenPromise(DataDrivenScreenPromise const&);
    DataDrivenScreenPromise();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void resolve(::DataDrivenScreenClosedReason) = 0;

    virtual void reject(::DataDrivenScreenRejectReason) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
