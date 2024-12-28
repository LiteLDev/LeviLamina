#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptMemoryTierBuilder {
public:
    // prevent constructor by default
    ScriptMemoryTierBuilder& operator=(ScriptMemoryTierBuilder const&);
    ScriptMemoryTierBuilder(ScriptMemoryTierBuilder const&);
    ScriptMemoryTierBuilder();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
