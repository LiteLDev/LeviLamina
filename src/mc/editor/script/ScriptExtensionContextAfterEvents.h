#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/editor/Mode.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Position; }
namespace Editor::Services { class EditorSettingsServiceProvider; }
namespace Editor::Services { struct SelectionEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptExtensionContextAfterEvents
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptExtensionContextAfterEvents> {
public:
    // ScriptExtensionContextAfterEvents inner types declare
    // clang-format off
    class ScriptExtensionContextAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptExtensionContextAfterEvents inner types define
    class ScriptExtensionContextAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::Editor::ScriptModule::ScriptExtensionContextAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 4
        virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker
        ) /*override*/;

        // vIndex: 0
        virtual ~ScriptExtensionContextAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk71fe3f;
    ::ll::UntypedStorage<8, 16> mUnk86589b;
    ::ll::UntypedStorage<8, 8>  mUnk586770;
    ::ll::UntypedStorage<8, 24> mUnkb230da;
    ::ll::UntypedStorage<8, 8>  mUnk6d997e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExtensionContextAfterEvents& operator=(ScriptExtensionContextAfterEvents const&);
    ScriptExtensionContextAfterEvents(ScriptExtensionContextAfterEvents const&);
    ScriptExtensionContextAfterEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptExtensionContextAfterEvents(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);

    MCAPI void _handleClipboardItemChangeEvent(::mce::UUID const& itemId, bool isPrimary);

    MCAPI void _handleCurrentThemeChanged(
        ::Editor::Services::EditorSettingsServiceProvider* settingsServiceProvider,
        ::std::string const&                               themeId
    );

    MCAPI void _handleCursorPositionChanged(
        ::std::optional<::Editor::Cursor::Position> const& newPosition,
        ::Editor::Cursor::CursorState const&               cursorState
    );

    MCAPI void
    _handleCursorStateChanged(::Editor::Cursor::CursorState const& from, ::Editor::Cursor::CursorState const& to);

    MCAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCAPI void _handleSelectionEvent(::Editor::Services::SelectionEvent const& selectionEvent);

    MCAPI void _handleThemeColorUpdated(
        ::Editor::Services::EditorSettingsServiceProvider* settingsServiceProvider,
        ::std::string const&                               themeId,
        ::Editor::Settings::ThemeSettingsColorKey          colorKey,
        ::mce::Color const&                                color
    );

    MCAPI ::Editor::ScriptModule::ScriptExtensionContextAfterEvents&
    operator=(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);

    MCAPI void registerListeners(::Editor::ServiceProviderCollection& serviceProviders);

    MCAPI ~ScriptExtensionContextAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static ::ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        ::Editor::ScriptModule::ScriptExtensionContextAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
