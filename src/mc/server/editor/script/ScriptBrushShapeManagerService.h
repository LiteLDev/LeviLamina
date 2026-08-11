#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Editor::Services { class BrushShapeManagerServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
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
    ScriptBrushShapeManagerService(ScriptBrushShapeManagerService const&);
    ScriptBrushShapeManagerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBrushShapeManagerService(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );

    MCNAPI void _onBrushPaintCompletion(::Editor::Brush::BrushPaintCompletionState state);

    MCNAPI ::Scripting::Result_deprecated<void>
    beginPainting(::Scripting::Closure<void(::Editor::Brush::BrushPaintCompletionState)> const& closureEvent);

    MCNAPI void setBlockFacePlacementBasedOnCamera(bool const enable);

    MCNAPI void setBrushShapeVisible(bool const visible);

    MCNAPI void setElevationBrushRadius(int const elevationBrushRadius);

    MCNAPI void setElevationFalloff(int const elevationFalloff);

    MCNAPI void setElevationSampleLayers(int const elevationSampleLayers);

    MCNAPI void setFlattenSmoothing(int const flattenSmoothing);

    MCNAPI void setFloorBlockOverride(bool const floorBlockOverride);

    MCNAPI void setInverseEraseMode(bool const inverseEraseMode);

    MCNAPI void setTerrainStrength(int const terrainStrength);

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
    MCNAPI void* $ctor(
        ::Editor::Services::BrushShapeManagerServiceProvider& serviceProvider,
        ::Player&                                             player,
        ::Scripting::WeakLifetimeScope&                       scope
    );
    // NOLINTEND
};

} // namespace Editor::ScriptModule
