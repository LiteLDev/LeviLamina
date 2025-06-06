#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPlaytestLauncher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkedb14b;
    ::ll::UntypedStorage<8, 8>  mUnk2af753;
    ::ll::UntypedStorage<8, 24> mUnk6c9ff7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlaytestLauncher& operator=(ScriptPlaytestLauncher const&);
    ScriptPlaytestLauncher(ScriptPlaytestLauncher const&);
    ScriptPlaytestLauncher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlaytestLauncher() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindClass();

    MCNAPI static ::Scripting::EnumBinding bindSessionResultEnums();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
