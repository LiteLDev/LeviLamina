#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/BrushElevationMode.h"
#include "mc/common/editor/DirectionalPlacementMode.h"
#include "mc/editor/services/native_brush/BrushFlattenMode.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockMask { class BlockMaskList; }
// clang-format on

namespace Editor::Services {

class BrushShapeManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrushShapeManagerServiceProvider() = default;

    virtual ::Editor::RelativeVolumeListBlockVolume const& getCurrentBrushVolume() const = 0;

    virtual void activateBrushTool() = 0;

    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode) = 0;

    virtual void setBrushShape(::std::vector<::Vec3> const&) = 0;

    virtual void setBrushShape(::Editor::RelativeVolumeListBlockVolume const&) = 0;

    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const&) = 0;

    virtual void beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    virtual void endPainting(bool const) = 0;

    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    virtual void deactivateBrushTool() = 0;

    virtual void setBrushShapeOffset(::Vec3 const&) = 0;

    virtual ::Vec3 getBrushShapeOffset() const = 0;

    virtual void setTerrainStrength(int const) = 0;

    virtual void setFlattenMode(::Editor::Brush::BrushFlattenMode) = 0;

    virtual void setFlattenSmoothing(int const) = 0;

    virtual void setFloorBlockOverride(bool const) = 0;

    virtual void setElevationMode(::Editor::Brush::BrushElevationMode) = 0;

    virtual void setElevationFalloff(int const) = 0;

    virtual void setElevationSampleLayers(int const) = 0;

    virtual void setElevationBrushRadius(int const) = 0;

    virtual void setBrushShapeVisible(bool const) = 0;

    virtual bool isBusy() = 0;

    virtual void setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode) = 0;

    virtual ::Editor::Brush::DirectionalPlacementMode getDirectionalPlacementMode() const = 0;

    virtual void setInverseEraseMode(bool const) = 0;

    virtual bool getInverseEraseMode() const = 0;

    virtual void setItemPlacement(::HashedString const&) = 0;

    virtual ::HashedString const& getItemPlacement() const = 0;

    virtual bool const isItemPlacementActive() const = 0;

    virtual void pushBlockStateOverride(::HashedString const&, ::std::variant<int, ::std::string, bool> const&) = 0;

    virtual void clearBlockStateOverrides() = 0;

    virtual void setBlockFacePlacementBasedOnCamera(bool const) = 0;
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
