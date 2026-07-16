#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

namespace ScriptModuleMinecraftServerUI {

struct DataDrivenScreenCallbacks : public ::DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd49092;
    ::ll::UntypedStorage<8, 64> mUnk456224;
    ::ll::UntypedStorage<8, 64> mUnkbf6963;
    ::ll::UntypedStorage<8, 32> mUnkdc9d82;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenScreenCallbacks& operator=(DataDrivenScreenCallbacks const&);
    DataDrivenScreenCallbacks(DataDrivenScreenCallbacks const&);
    DataDrivenScreenCallbacks();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenScreenCallbacks() = default;

    virtual void resolve(::DataDrivenScreenClosedReason) /*override*/;

    virtual void reject(::DataDrivenScreenRejectReason) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
