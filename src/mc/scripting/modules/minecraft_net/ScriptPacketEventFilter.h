#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet::EventFilters { struct ScriptPacketEventFilterData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk688221;
    ::ll::UntypedStorage<8, 32> mUnked9f60;
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
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet::EventFilters
