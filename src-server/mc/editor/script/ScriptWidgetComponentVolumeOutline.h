#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/RelativeVolumeListBlockVolumeAction.h"
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/versionless/util/Mirror.h"
#include "mc/versionless/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class SimpleBlockVolume;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetComponentVolumeOutlineOptions; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentVolumeOutline : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk139812;
    ::ll::UntypedStorage<4, 24> mUnk95e828;
    ::ll::UntypedStorage<4, 24> mUnke9a2bb;
    ::ll::UntypedStorage<4, 24> mUnk60460d;
    ::ll::UntypedStorage<1, 1> mUnk2f03b2;
    ::ll::UntypedStorage<1, 1> mUnkf0ef0f;
    ::ll::UntypedStorage<1, 1> mUnk31ee18;
    ::ll::UntypedStorage<1, 1> mUnk9a64c6;
    ::ll::UntypedStorage<4, 12> mUnk12f3ff;
    ::ll::UntypedStorage<4, 12> mUnk155b18;
    ::ll::UntypedStorage<4, 32> mUnk64b844;
    ::ll::UntypedStorage<8, 40> mUnkd6102c;
    ::ll::UntypedStorage<8, 16> mUnk18a8be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentVolumeOutline& operator=(ScriptWidgetComponentVolumeOutline const&);
    ScriptWidgetComponentVolumeOutline(ScriptWidgetComponentVolumeOutline const&);
    ScriptWidgetComponentVolumeOutline();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ScriptWidgetComponentVolumeOutline() /*override*/;

    // vIndex: 3
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentVolumeOutline(::Editor::ServiceProviderCollection& serviceProviders, ::mce::UUID const& componentId, ::std::string const& componentName, ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::std::variant<::Vec3, ::std::vector<::Vec3>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>>> const& volume, ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions> options);

    MCNAPI void _calculateOrientationTransformations();

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getHighlightHullColor() const;

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getHighlightOutlineColor() const;

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getHullColor() const;

    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getMirror() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getNormalizedOrigin() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getOffset() const;

    MCNAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getOutlineColor() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getRotation() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getShowHighlightOutline() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getShowOutline() const;

    MCNAPI ::Scripting::Result<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getTransformedWorldVolume() const;

    MCNAPI ::Scripting::Result<::std::optional<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _getVolume() const;

    MCNAPI void _handleVolumeChangeEvent(::Editor::RelativeVolumeListBlockVolume const&, ::Editor::RelativeVolumeListBlockVolumeAction action, ::std::variant<::Vec3 const, ::std::vector<::Vec3> const, ::Editor::RelativeVolumeListBlockVolume const, ::SimpleBlockVolume const> const& variantData);

    MCNAPI ::Vec3 _resolveSize();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _scriptSetVolume(::std::optional<::std::variant<::Vec3, ::std::vector<::Vec3>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>>> const& volume);

    MCNAPI void _sendAddPayload();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setHighlightHullColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setHighlightOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setHullColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setMirror(::Mirror m);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setNormalizedOrigin(::Vec3 const& normalizedOrigin);

    MCNAPI ::Scripting::Result_deprecated<void> _setOffset(::Vec3 const& offset);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setRotation(::Rotation r);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setShowHighlightOutline(bool visible);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent> _setShowOutline(bool visible);

    MCNAPI void _setVolume(::std::optional<::std::variant<::Vec3, ::std::vector<::Vec3>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>>> const& volume, bool suppressClientUpdate);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders, ::mce::UUID const& componentId, ::std::string const& componentName, ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget> owner, ::Editor::ScriptModule::ScriptWidgetService& parentService, ::std::optional<::std::variant<::Vec3, ::std::vector<::Vec3>, ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase>>> const& volume, ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentVolumeOutlineOptions> options);
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

}
