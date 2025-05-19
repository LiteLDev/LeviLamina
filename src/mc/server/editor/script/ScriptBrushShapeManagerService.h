#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"

// auto generated forward declare list
// clang-format off
class Player;
class Vec3;
namespace Editor::ScriptModule { class ScriptBlockMaskList; }
namespace Editor::ScriptModule { class ScriptBrushShape; }
namespace Editor::ScriptModule { class ScriptUIElement; }
namespace Editor::Services { class BrushShapeManagerServiceProvider; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBrushShapeManagerService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkec6894;
    ::ll::UntypedStorage<8, 8>   mUnke91993;
    ::ll::UntypedStorage<8, 24>  mUnkde8b6f;
    ::ll::UntypedStorage<8, 40>  mUnke0ee94;
    ::ll::UntypedStorage<8, 64>  mUnkaa7a0e;
    ::ll::UntypedStorage<8, 232> mUnk7c5ced;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBrushShapeManagerService& operator=(ScriptBrushShapeManagerService const&);
    ScriptBrushShapeManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBrushShapeManagerService(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);

    MCNAPI ScriptBrushShapeManagerService(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );

    MCNAPI void _onBrushPaintCompletion(::Editor::Brush::BrushPaintCompletionState state);

    MCNAPI void activateBrushTool();

    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    beginPainting(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCNAPI void deactivateBrushTool();

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> endPainting(bool cancelled);

    MCNAPI ::std::vector<::Editor::ScriptModule::ScriptBrushShape> getBrushShapeList() const;

    MCNAPI ::Vec3 getBrushShapeOffset() const;

    MCNAPI ::std::optional<::Editor::ScriptModule::ScriptBrushShape> getCurrentBrushShape();

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>>
    getCurrentBrushVolume();

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>,
        ::Scripting::Error>
    getSettingsUIElements(::std::string const& brushName);

    MCNAPI ::Scripting::Result<void, ::Scripting::Error> registerBrushShape(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuild,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    setBrushMask(::Editor::ScriptModule::ScriptBlockMaskList const& mask);

    MCNAPI void setBrushShape(
        ::std::variant<
            ::std::vector<::Vec3>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& shape
    );

    MCNAPI void setBrushShapeOffset(::Vec3 const& offset);

    MCNAPI void setBrushShapeVisible(bool visible);

    MCNAPI void setFlattenHeight(int flattenHeight);

    MCNAPI void setFlattenRadius(int flattenRadius);

    MCNAPI void setTerrainStrength(int terrainStrength);

    MCNAPI ::Scripting::Result<void, ::Scripting::Error>
    singlePaint(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCNAPI void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
        ::Scripting::Error>
    switchBrushShape(::std::string const& brushName);

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> uiElementValueChanged(
        ::std::string const&                               elementName,
        ::std::variant<float, bool, ::Vec3, ::std::string> newValue
    );

    MCNAPI ~ScriptBrushShapeManagerService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBrushShapeManagerService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);

    MCNAPI void* $ctor(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
