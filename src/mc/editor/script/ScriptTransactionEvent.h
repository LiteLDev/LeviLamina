#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkb4da9e;
    ::ll::UntypedStorage<4, 4>   mUnk4c2f16;
    ::ll::UntypedStorage<8, 224> mUnk1c1cd2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransactionEvent& operator=(ScriptTransactionEvent const&);
    ScriptTransactionEvent(ScriptTransactionEvent const&);
    ScriptTransactionEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::EnumBinding bindStateEnum();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
