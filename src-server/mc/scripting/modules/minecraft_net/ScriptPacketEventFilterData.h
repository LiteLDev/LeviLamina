#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet::EventFilters {

struct ScriptPacketEventFilterData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6633f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketEventFilterData& operator=(ScriptPacketEventFilterData const&);
    ScriptPacketEventFilterData(ScriptPacketEventFilterData const&);
    ScriptPacketEventFilterData();
};

} // namespace ScriptModuleMinecraftNet::EventFilters
