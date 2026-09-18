#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptCustomBiomeSource
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptCustomBiomeSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9705fc;
    ::ll::UntypedStorage<8, 16> mUnk54edc0;
    ::ll::UntypedStorage<8, 16> mUnk34b4c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomBiomeSource& operator=(ScriptCustomBiomeSource const&);
    ScriptCustomBiomeSource(ScriptCustomBiomeSource const&);
    ScriptCustomBiomeSource();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindType();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
