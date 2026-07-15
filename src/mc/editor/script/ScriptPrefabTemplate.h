#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplate : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplate> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka0e710;
    ::ll::UntypedStorage<8, 8>  mUnk3757bf;
    ::ll::UntypedStorage<8, 16> mUnk798cbd;
    ::ll::UntypedStorage<8, 16> mUnkf6df99;
    ::ll::UntypedStorage<8, 16> mUnk1eef67;
    ::ll::UntypedStorage<8, 16> mUnkf8ab6c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplate& operator=(ScriptPrefabTemplate const&);
    ScriptPrefabTemplate(ScriptPrefabTemplate const&);
    ScriptPrefabTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplate() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
