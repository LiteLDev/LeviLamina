#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentClipboardOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboard : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk192ed4;
    ::ll::UntypedStorage<1, 1>  mUnk81f975;
    ::ll::UntypedStorage<1, 1>  mUnkd4706b;
    ::ll::UntypedStorage<4, 12> mUnk62bf0a;
    ::ll::UntypedStorage<4, 12> mUnk865513;
    ::ll::UntypedStorage<1, 1>  mUnkba9362;
    ::ll::UntypedStorage<4, 24> mUnk86fec1;
    ::ll::UntypedStorage<4, 24> mUnkaa0b3f;
    ::ll::UntypedStorage<4, 24> mUnk75e7a4;
    ::ll::UntypedStorage<4, 24> mUnk118379;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboard& operator=(ScriptWidgetComponentClipboard const&);
    ScriptWidgetComponentClipboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentClipboard() /*override*/;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentClipboard(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCNAPI ScriptWidgetComponentClipboard(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::std::variant<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>>> const&
                                                                                       optClipboardOrStructure,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _scriptGetClipboardOffset() const;

    MCNAPI ::Scripting::Result_deprecated<void> _scriptSetClipboardOffset(::Vec3 const& offset);

    MCNAPI void _setClipboardOffset(::Vec3 const& offset);

    MCNAPI void _setHighlightHullColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI void _setHighlightOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI void _setHullColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI void _setMirror(::Mirror m);

    MCNAPI void _setNormalizedOrigin(::Vec3 const& pivot);

    MCNAPI void _setOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI void _setRotation(::Rotation r);

    MCNAPI void _setShowOutline(bool visible);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentClipboard const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                     serviceProviders,
        ::mce::UUID const&                                                       componentId,
        ::std::string const&                                                     componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner,
        ::Editor::ScriptModule::ScriptWidgetService&                             parentService,
        ::std::optional<::std::variant<
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptClipboardItem>,
            ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptEditorStructure>>> const&
                                                                                       optClipboardOrStructure,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentClipboardOptions> options
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
