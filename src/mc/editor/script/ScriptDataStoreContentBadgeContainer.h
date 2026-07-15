#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreContentBadgeContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8d45e7;
    ::ll::UntypedStorage<8, 8>  mUnk4bd778;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreContentBadgeContainer& operator=(ScriptDataStoreContentBadgeContainer const&);
    ScriptDataStoreContentBadgeContainer(ScriptDataStoreContentBadgeContainer const&);
    ScriptDataStoreContentBadgeContainer();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
