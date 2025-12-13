#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptBlockCustomComponentAfterEventIntermediateStorage.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage
: public ::ScriptModuleMinecraft::ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage inner types declare
    // clang-format off
    struct BlockCause;
    // clang-format on

    // ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage inner types define
    struct BlockCause {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnkb9ac1c;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockCause& operator=(BlockCause const&);
        BlockCause(BlockCause const&);
        BlockCause();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnkb9f6c0;
    ::ll::UntypedStorage<4, 16>  mUnk23bc09;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage(
        ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage const&
    );
    ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentBlockBreakAfterEventIntermediateStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
