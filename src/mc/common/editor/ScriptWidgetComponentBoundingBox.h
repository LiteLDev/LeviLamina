#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"
#include "mc/scripting/Axis.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Editor::ScriptModule { class ScriptWidget; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBoundingBoxOptions; }
namespace Editor::ScriptModule { class ScriptWidgetComponentBoundingBoxStateChangeEventParameters; }
namespace Editor::ScriptModule { class ScriptWidgetComponentErrorInvalidComponent; }
namespace Editor::ScriptModule { class ScriptWidgetService; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBoundingBox : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24>  mUnkbedf59;
    ::ll::UntypedStorage<4, 24>  mUnk465970;
    ::ll::UntypedStorage<1, 1>   mUnk528215;
    ::ll::UntypedStorage<1, 1>   mUnkc088ec;
    ::ll::UntypedStorage<1, 1>   mUnk9d6c75;
    ::ll::UntypedStorage<4, 12>  mUnk7bd12f;
    ::ll::UntypedStorage<4, 12>  mUnked29f8;
    ::ll::UntypedStorage<4, 12>  mUnkf59555;
    ::ll::UntypedStorage<4, 32>  mUnke160c5;
    ::ll::UntypedStorage<8, 232> mUnke648d7;
    ::ll::UntypedStorage<1, 1>   mUnk3f23b7;
    ::ll::UntypedStorage<4, 4>   mUnk3c1e79;
    ::ll::UntypedStorage<4, 12>  mUnk6e6251;
    ::ll::UntypedStorage<4, 12>  mUnkba49de;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBoundingBox& operator=(ScriptWidgetComponentBoundingBox const&);
    ScriptWidgetComponentBoundingBox();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~ScriptWidgetComponentBoundingBox() /*override*/ = default;

    // vIndex: 3
    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;

    // vIndex: 0
    virtual void
    _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload) /*override*/;

    // vIndex: 1
    virtual void _onOwnerPositionUpdate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWidgetComponentBoundingBox(::Editor::ScriptModule::ScriptWidgetComponentBoundingBox const&);

    MCNAPI ScriptWidgetComponentBoundingBox(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::Vec3 const&                                                                    size,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions> options
    );

    MCNAPI void _calculateOrientationTransformations();

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _deactivateHandles();

    MCNAPI ::Scripting::Result<::Scripting::Axis, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getEnableResizeHandles() const;

    MCNAPI ::Scripting::
        Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
        _getHullColor() const;

    MCNAPI ::Scripting::Result<::Mirror, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getMirror() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getNormalizedOrigin() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getOffset() const;

    MCNAPI ::Scripting::
        Result<::ScriptModuleMinecraft::ScriptRGBA, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
        _getOutlineColor() const;

    MCNAPI ::Scripting::Result<::Rotation, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getRotation() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getShowTerminator() const;

    MCNAPI ::Scripting::Result<::Vec3, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getSize() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSimpleBlockVolume>,
        ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getTransformedWorldVolume() const;

    MCNAPI ::Scripting::Result<bool, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _getVisibleHull() const;

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setEnableResizeHandles(::Scripting::Axis enableResizeHandles);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setHullColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setMirror(::Mirror m);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setNormalizedOrigin(::Vec3 const& normalizedOrigin);

    MCNAPI ::Scripting::Result_deprecated<void> _setOffset(::Vec3 const& offset);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setOutlineColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setRotation(::Rotation r);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setShowTerminator(bool showTerminator);

    MCNAPI ::Scripting::Result_deprecated<void> _setSize(::Vec3 const& size);

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setStateChangeEventClosure(
        ::std::optional<::Scripting::Closure<
            void(::Scripting::StrongTypedObjectHandle<
                 ::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxStateChangeEventParameters>)>> const& closure
    );

    MCNAPI ::Scripting::Result<void, ::Editor::ScriptModule::ScriptWidgetComponentErrorInvalidComponent>
    _setVisibleHull(bool visible);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptWidgetComponentBoundingBox const&);

    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                                             serviceProviders,
        ::mce::UUID const&                                                               componentId,
        ::std::string const&                                                             componentName,
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptWidget>         owner,
        ::Editor::ScriptModule::ScriptWidgetService&                                     parentService,
        ::Vec3 const&                                                                    size,
        ::std::optional<::Editor::ScriptModule::ScriptWidgetComponentBoundingBoxOptions> options
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Editor::Widgets::WidgetComponentType const $getComponentType() const;

    MCNAPI void $_handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const& payload);

    MCNAPI void $_onOwnerPositionUpdate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
