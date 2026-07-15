#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreActionBarContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk83c0ae;
    ::ll::UntypedStorage<8, 8>  mUnk972917;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreActionBarContainer& operator=(ScriptDataStoreActionBarContainer const&);
    ScriptDataStoreActionBarContainer(ScriptDataStoreActionBarContainer const&);
    ScriptDataStoreActionBarContainer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
