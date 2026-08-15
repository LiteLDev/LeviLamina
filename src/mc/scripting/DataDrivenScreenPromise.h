#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

struct DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mFormId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void resolve(::DataDrivenScreenClosedReason resolution) = 0;

    virtual void reject(::DataDrivenScreenRejectReason rejection) = 0;
    // NOLINTEND
};
