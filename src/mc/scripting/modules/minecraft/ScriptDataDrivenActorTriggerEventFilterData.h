#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptDataDrivenActorTriggerEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk39ab08;
    ::ll::UntypedStorage<8, 56> mUnk5d0576;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerEventFilterData& operator=(ScriptDataDrivenActorTriggerEventFilterData const&);
    ScriptDataDrivenActorTriggerEventFilterData(ScriptDataDrivenActorTriggerEventFilterData const&);
    ScriptDataDrivenActorTriggerEventFilterData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptDataDrivenActorTriggerEventFilterData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ScriptModuleMinecraft::EventFilters::ScriptDataDrivenActorTriggerEventFilterData>
    create(
        ::std::string const&                                                              eventType,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& actor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
