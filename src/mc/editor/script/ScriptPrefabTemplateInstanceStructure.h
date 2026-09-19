#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateInstanceStructure
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabTemplateInstanceStructure> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdb779d;
    ::ll::UntypedStorage<8, 8>  mUnkd34a82;
    ::ll::UntypedStorage<8, 16> mUnk442333;
    ::ll::UntypedStorage<8, 16> mUnkae160a;
    ::ll::UntypedStorage<8, 16> mUnk95edfd;
    ::ll::UntypedStorage<8, 16> mUnk1fac14;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateInstanceStructure& operator=(ScriptPrefabTemplateInstanceStructure const&);
    ScriptPrefabTemplateInstanceStructure(ScriptPrefabTemplateInstanceStructure const&);
    ScriptPrefabTemplateInstanceStructure();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrefabTemplateInstanceStructure() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
