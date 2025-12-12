#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/ThemeSettingsColorKey.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/editor/Mode.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace Editor { class ServiceProviderCollection; }
namespace Editor { struct EditorBlockPaletteEventActivePaletteChanged; }
namespace Editor { struct EditorBlockPaletteEventItemUpdated; }
namespace Editor { struct EditorBlockPaletteEventPaletteRemoved; }
namespace Editor { struct EditorBlockPaletteEventPaletteUpdated; }
namespace Editor { struct EditorBlockPaletteEventSelectedItemIndexChanged; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Position; }
namespace Editor::Selection { struct SelectionVolumeEvent; }
namespace Editor::Services { class EditorBlockPaletteServiceProvider; }
namespace Editor::Services { class EditorSettingsServiceProvider; }
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
        virtual void
        onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

        virtual ~ScriptExtensionContextAfterEventsDeferredEventListener() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf45d6d;
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
    MCNAPI ScriptExtensionContextAfterEvents(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);

    MCNAPI void _handleBlockPaletteChanged(
        ::Editor::Services::EditorBlockPaletteServiceProvider const* paletteService,
        ::std::variant<
            ::Editor::EditorBlockPaletteEventItemUpdated,
            ::Editor::EditorBlockPaletteEventSelectedItemIndexChanged,
            ::Editor::EditorBlockPaletteEventActivePaletteChanged,
            ::Editor::EditorBlockPaletteEventPaletteUpdated,
            ::Editor::EditorBlockPaletteEventPaletteRemoved> const& blockPaletteEvent
    );

    MCNAPI void _handleClipboardItemChangeEvent(::mce::UUID const& itemId, bool isPrimary);

    MCNAPI void _handleCurrentThemeChanged(
        ::Editor::Services::EditorSettingsServiceProvider* settingsServiceProvider,
        ::std::string const&                               themeId
    );

    MCNAPI void _handleCursorPositionChanged(
        ::std::optional<::Editor::Cursor::Position> const& newPosition,
        ::Editor::Cursor::CursorState const&               cursorState
    );

    MCNAPI void
    _handleCursorStateChanged(::Editor::Cursor::CursorState const& from, ::Editor::Cursor::CursorState const& to);

    MCNAPI void _handleModeChanged(::Editor::Mode from, ::Editor::Mode to);

    MCNAPI void _handleSelectionVolumeEvent(::Editor::Selection::SelectionVolumeEvent const& selectionEvent);

    MCNAPI void _handleThemeColorUpdated(
        ::Editor::Services::EditorSettingsServiceProvider* settingsServiceProvider,
        ::std::string const&                               themeId,
        ::Editor::Settings::ThemeSettingsColorKey          colorKey,
        ::mce::Color const&                                color
    );

    MCNAPI ::Editor::ScriptModule::ScriptExtensionContextAfterEvents&
    operator=(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);

    MCNAPI void registerListeners(::Editor::ServiceProviderCollection& serviceProviders);

    MCNAPI ~ScriptExtensionContextAfterEvents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::Editor::ScriptModule::ScriptExtensionContextAfterEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptExtensionContextAfterEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
