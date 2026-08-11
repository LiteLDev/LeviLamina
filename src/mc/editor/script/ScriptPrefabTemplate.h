#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PrefabSource.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorInvalidTemplate; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorServiceError; }
namespace Editor::ScriptModule { struct ScriptPrefabErrorStringInvalidLength; }
namespace Scripting { class WeakLifetimeScope; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPrefabTemplate(
        ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> templateRef,
        ::Editor::ServiceProviderCollection&           serviceProviders,
        ::Scripting::WeakLifetimeScope const&          scope
    );

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getDescription() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getDisplayName() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getName() const;

    MCNAPI ::Scripting::Result<::std::string, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
    _getNotes() const;

    MCNAPI ::Scripting::
        Result<::Editor::Prefabs::PrefabSource, ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate>
        _getSource() const;

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setDescription(::std::string const& newDescription);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setDisplayName(::std::string const& newName);

    MCNAPI ::Scripting::Result<
        void,
        ::Editor::ScriptModule::ScriptPrefabErrorServiceError,
        ::Editor::ScriptModule::ScriptPrefabErrorInvalidTemplate,
        ::Editor::ScriptModule::ScriptPrefabErrorStringInvalidLength>
    _setNotes(::std::string const& newNotes);

    MCNAPI ::StackRefResult<::Editor::Prefabs::PrefabDBTemplate> getTemplate();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
