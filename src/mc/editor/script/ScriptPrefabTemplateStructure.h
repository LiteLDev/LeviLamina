#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateStructure
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplateStructure> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39ddd0;
    ::ll::UntypedStorage<8, 8>  mUnkae5593;
    ::ll::UntypedStorage<8, 16> mUnkd44537;
    ::ll::UntypedStorage<8, 16> mUnka791b8;
    ::ll::UntypedStorage<8, 16> mUnkbfe6d0;
    ::ll::UntypedStorage<8, 16> mUnk507ffe;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateStructure& operator=(ScriptPrefabTemplateStructure const&);
    ScriptPrefabTemplateStructure(ScriptPrefabTemplateStructure const&);
    ScriptPrefabTemplateStructure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplateStructure() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
