#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBlockUtilityService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptBlockUtilityService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf57135;
    ::ll::UntypedStorage<8, 8>  mUnkd4df07;
    ::ll::UntypedStorage<8, 8>  mUnk23c0a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockUtilityService& operator=(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService(ScriptBlockUtilityService const&);
    ScriptBlockUtilityService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindContiguousSelectionTypeEnums();

    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
