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
    ::ll::UntypedStorage<8, 8>  mUnkec6894;
    ::ll::UntypedStorage<8, 8>  mUnke91993;
    ::ll::UntypedStorage<8, 24> mUnkde8b6f;
    ::ll::UntypedStorage<8, 40> mUnke0ee94;
    ::ll::UntypedStorage<8, 64> mUnkaa7a0e;
    ::ll::UntypedStorage<8, 88> mUnk7c5ced;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBrushShapeManagerService& operator=(ScriptBrushShapeManagerService const&);
    ScriptBrushShapeManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBrushShapeManagerService(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);

    MCAPI ScriptBrushShapeManagerService(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );

    MCAPI void _onBrushPaintCompletion(::Editor::Brush::BrushPaintCompletionState state);

    MCFOLD void activateBrushTool();

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    beginPainting(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCAPI void deactivateBrushTool();

    MCAPI ::Scripting::Result<void, ::Scripting::Error> endPainting(bool cancelled);

    MCAPI ::std::vector<::Editor::ScriptModule::ScriptBrushShape> getBrushShapeList() const;

    MCAPI ::std::optional<::Editor::ScriptModule::ScriptBrushShape> getCurrentBrushShape();

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>>
    getCurrentBrushVolume();

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>,
        ::Scripting::Error>
    getSettingsUIElements(::std::string const& brushName);

    MCAPI ::Scripting::Result<void, ::Scripting::Error> registerBrushShape(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuild,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    );

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    setBrushMask(::Editor::ScriptModule::ScriptBlockMaskList const& mask);

    MCAPI void
    setBrushShape(::std::variant<
                  ::std::vector<::Vec3>,
                  ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>> const& shape
    );

    MCFOLD void setFlattenHeight(int flattenHeight);

    MCFOLD void setFlattenRadius(int flattenRadius);

    MCFOLD void setTerrainStrength(int terrainStrength);

    MCAPI ::Scripting::Result<void, ::Scripting::Error>
    singlePaint(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCAPI void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>,
        ::Scripting::Error>
    switchBrushShape(::std::string const& brushName);

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> uiElementValueChanged(
        ::std::string const&                               elementName,
        ::std::variant<float, bool, ::Vec3, ::std::string> newValue
    );

    MCAPI ~ScriptBrushShapeManagerService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptBrushShapeManagerService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);

    MCAPI void* $ctor(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
