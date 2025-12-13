#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk20dab8;
    ::ll::UntypedStorage<4, 8>  mUnk772d97;
    ::ll::UntypedStorage<4, 8>  mUnkc74b8d;
    ::ll::UntypedStorage<4, 8>  mUnkc554cd;
    ::ll::UntypedStorage<4, 8>  mUnke0846d;
    ::ll::UntypedStorage<4, 16> mUnk6de076;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActorQueryOptions& operator=(ScriptActorQueryOptions const&);
    ScriptActorQueryOptions(ScriptActorQueryOptions const&);
    ScriptActorQueryOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptActorQueryOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
