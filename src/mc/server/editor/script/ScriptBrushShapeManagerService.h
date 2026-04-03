#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/DirectionalPlacementMode.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptBlockMaskList; }
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptBrushShapeManagerService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkec6894;
    ::ll::UntypedStorage<8, 8>   mUnke91993;
    ::ll::UntypedStorage<8, 24>  mUnkde8b6f;
    ::ll::UntypedStorage<8, 40>  mUnk26d3cf;
    ::ll::UntypedStorage<8, 112> mUnk7c5ced;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBrushShapeManagerService& operator=(ScriptBrushShapeManagerService const&);
    ScriptBrushShapeManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBrushShapeManagerService(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);

    MCNAPI void _onBrushPaintCompletion(::Editor::Brush::BrushPaintCompletionState state);

    MCNAPI ::Scripting::Result_deprecated<void>
    beginPainting(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCNAPI void deactivateBrushTool();

    MCNAPI void enableItemPlacement(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemType> const& itemTypeArg,
        ::std::optional<int const> const&                                                    aux
    );

    MCNAPI ::Scripting::Result_deprecated<void> endPainting(bool cancelled);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptRelativeVolumeListBlockVolume>>
    getCurrentBrushVolume();

    MCNAPI void
    pushBlockStateOverride(::std::string const& stateName, ::std::variant<int, ::std::string, bool> const& stateValue);

    MCNAPI ::Scripting::Result_deprecated<void> setBrushMask(::Editor::ScriptModule::ScriptBlockMaskList const& mask);

    MCNAPI void setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode directionalPlacementMode);

    MCNAPI ::Scripting::Result_deprecated<void>
    singlePaint(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptBrushShapeManagerService const&);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
