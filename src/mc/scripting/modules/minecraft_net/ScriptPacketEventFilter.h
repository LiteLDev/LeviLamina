#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilterData; }
// clang-format on

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbf85e1;
    ::ll::UntypedStorage<8, 32> mUnkc0ccd7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketEventFilter(ScriptPacketEventFilter const&);
    ScriptPacketEventFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraftNet::EventFilters::ScriptPacketEventFilter&
    operator=(::ScriptModuleMinecraftNet::EventFilters::ScriptPacketEventFilter const&);

    MCNAPI ~ScriptPacketEventFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<
        ::ScriptModuleMinecraftNet::EventFilters::ScriptPacketEventFilter>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet::EventFilters
