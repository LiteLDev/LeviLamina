#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/DataDrivenScreenPromise.h"
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

namespace ScriptModuleMinecraftServerUIPrivateBindings {

struct ScriptDataDrivenScreenPromise : public ::DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk61639a;
    ::ll::UntypedStorage<1, 1>  mUnkd53c03;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenScreenPromise& operator=(ScriptDataDrivenScreenPromise const&);
    ScriptDataDrivenScreenPromise(ScriptDataDrivenScreenPromise const&);
    ScriptDataDrivenScreenPromise();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void resolve(::DataDrivenScreenClosedReason resolution) /*override*/;

    virtual void reject(::DataDrivenScreenRejectReason rejection) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $resolve(::DataDrivenScreenClosedReason resolution);

    MCNAPI void $reject(::DataDrivenScreenRejectReason rejection);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUIPrivateBindings
