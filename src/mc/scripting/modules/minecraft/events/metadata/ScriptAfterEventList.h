#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraft { struct ScriptAfterEventSignalHandle; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptAfterEventSignalHandle>> mSignalHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void deferredFlush(::ScriptDeferredFlushTracker& deferredTracker);

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptAfterEventSignalHandle const*>
    getAllSignalsByEventType(uint64 signalHashCode) const;

    MCAPI void postFlush();

    MCAPI void preFlush();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
