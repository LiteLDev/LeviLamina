#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabTemplateMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbf50fd;
    ::ll::UntypedStorage<8, 32> mUnk1bcb6f;
    ::ll::UntypedStorage<8, 32> mUnkfd60cd;
    ::ll::UntypedStorage<8, 32> mUnkdb43f5;
    ::ll::UntypedStorage<8, 32> mUnk41ce83;
    ::ll::UntypedStorage<8, 24> mUnkdaaead;
    ::ll::UntypedStorage<4, 4>  mUnkdbfb45;
    ::ll::UntypedStorage<4, 4>  mUnk8ff97e;
    ::ll::UntypedStorage<4, 4>  mUnkd6b590;
    ::ll::UntypedStorage<1, 1>  mUnkb1e734;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplateMetadata(::Editor::ScriptModule::ScriptPrefabTemplateMetadata&&);

    MCNAPI ScriptPrefabTemplateMetadata(::Editor::ScriptModule::ScriptPrefabTemplateMetadata const&);

    MCNAPI explicit ScriptPrefabTemplateMetadata(::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> templateRef);

    MCNAPI ::Editor::ScriptModule::ScriptPrefabTemplateMetadata&
    operator=(::Editor::ScriptModule::ScriptPrefabTemplateMetadata&&);

    MCNAPI ::Editor::ScriptModule::ScriptPrefabTemplateMetadata&
    operator=(::Editor::ScriptModule::ScriptPrefabTemplateMetadata const&);

    MCNAPI ~ScriptPrefabTemplateMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptPrefabTemplateMetadata&&);

    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptPrefabTemplateMetadata const&);

    MCNAPI void* $ctor(::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> templateRef);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
