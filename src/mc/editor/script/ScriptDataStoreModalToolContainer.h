#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreModalToolContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf88096;
    ::ll::UntypedStorage<8, 8>  mUnk16164e;
    ::ll::UntypedStorage<8, 32> mUnk12984e;
    ::ll::UntypedStorage<1, 1>  mUnk517e55;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolContainer& operator=(ScriptDataStoreModalToolContainer const&);
    ScriptDataStoreModalToolContainer(ScriptDataStoreModalToolContainer const&);
    ScriptDataStoreModalToolContainer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
