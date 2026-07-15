#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptLoggingService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptLoggingService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2eada6;
    ::ll::UntypedStorage<8, 8>  mUnk4209f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLoggingService& operator=(ScriptLoggingService const&);
    ScriptLoggingService(ScriptLoggingService const&);
    ScriptLoggingService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
