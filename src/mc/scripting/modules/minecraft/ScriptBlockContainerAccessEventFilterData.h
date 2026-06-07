#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptBlockContainerAccessEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                                              mBlock;
    ::ll::TypedStorage<8, 104, ::std::optional<::ScriptModuleMinecraft::ScriptActorData>> mAccessSourceActorData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptBlockContainerAccessEventFilterData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::EventFilters
