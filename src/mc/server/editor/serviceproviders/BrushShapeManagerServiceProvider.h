#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class Vec3;
namespace Editor::BlockMask { class BlockMaskList; }
namespace Editor::Brush { class BrushShape; }
namespace Editor::Brush { class UIElement; }
namespace Editor::ScriptModule { class ScriptUIElement; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
// clang-format on

namespace Editor::Services {

class BrushShapeManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushShapeManagerServiceProvider() = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Editor::Brush::BrushShape> getCurrentBrushShape() const = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::CompoundBlockVolume> getCurrentBrushVolume() const = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::CompoundBlockVolume> switchBrushShape(::std::string const&) = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::std::vector<::std::shared_ptr<::Editor::Brush::UIElement>>>
    getUIElements(::std::string const&) = 0;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool>
    uiElementValueChanged(::std::string const&, ::std::variant<float, bool, ::Vec3, ::std::string>) = 0;

    // vIndex: 6
    virtual ::std::vector<::std::shared_ptr<::Editor::Brush::BrushShape>> getBrushShapeList() const = 0;

    // vIndex: 7
    virtual void registerBrushShape(
        ::std::string const&,
        ::std::string const&,
        ::Scripting::Closure<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
    ) = 0;

    // vIndex: 8
    virtual void activateBrushTool() = 0;

    // vIndex: 9
    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode) = 0;

    // vIndex: 11
    virtual void setBrushShape(::std::vector<::Vec3> const&) = 0;

    // vIndex: 10
    virtual void setBrushShape(::CompoundBlockVolume const&) = 0;

    // vIndex: 12
    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const&) = 0;

    // vIndex: 13
    virtual void beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    // vIndex: 14
    virtual void endPainting(bool const) = 0;

    // vIndex: 15
    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    // vIndex: 16
    virtual void deactivateBrushTool() = 0;

    // vIndex: 17
    virtual void setBrushShapeOffset(::Vec3 const&) = 0;

    // vIndex: 18
    virtual ::Vec3 getBrushShapeOffset() const = 0;

    // vIndex: 19
    virtual void setTerrainStrength(int const) = 0;

    // vIndex: 20
    virtual void setFlattenHeight(int const) = 0;

    // vIndex: 21
    virtual void setFlattenRadius(int const) = 0;

    // vIndex: 22
    virtual void setBrushShapeVisible(bool const) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
