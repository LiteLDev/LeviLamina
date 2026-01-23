#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptPrefabServiceInstanceInteractionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf29a3c;
    ::ll::UntypedStorage<4, 4>  mUnke7b712;
    ::ll::UntypedStorage<4, 16> mUnkdc6021;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabServiceInstanceInteractionEvent& operator=(ScriptPrefabServiceInstanceInteractionEvent const&);
    ScriptPrefabServiceInstanceInteractionEvent(ScriptPrefabServiceInstanceInteractionEvent const&);
    ScriptPrefabServiceInstanceInteractionEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBinding bindEnum();

    MCNAPI static ::Scripting::ClassBinding bindEventScript();

    MCNAPI static ::Scripting::ClassBinding bindPublisherScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
