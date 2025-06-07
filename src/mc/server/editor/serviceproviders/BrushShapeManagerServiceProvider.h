#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockMask { class BlockMaskList; }
// clang-format on

namespace Editor::Services {

class BrushShapeManagerServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushShapeManagerServiceProvider() = default;

    // vIndex: 1
    virtual ::Editor::RelativeVolumeListBlockVolume const& getCurrentBrushVolume() const = 0;

    // vIndex: 2
    virtual void activateBrushTool() = 0;

    // vIndex: 3
    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode) = 0;

    // vIndex: 5
    virtual void setBrushShape(::std::vector<::Vec3> const&) = 0;

    // vIndex: 4
    virtual void setBrushShape(::Editor::RelativeVolumeListBlockVolume const&) = 0;

    // vIndex: 6
    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const&) = 0;

    // vIndex: 7
    virtual void beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    // vIndex: 8
    virtual void endPainting(bool const) = 0;

    // vIndex: 9
    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)>) = 0;

    // vIndex: 10
    virtual void deactivateBrushTool() = 0;

    // vIndex: 11
    virtual void setBrushShapeOffset(::Vec3 const&) = 0;

    // vIndex: 12
    virtual ::Vec3 getBrushShapeOffset() const = 0;

    // vIndex: 13
    virtual void setTerrainStrength(int const) = 0;

    // vIndex: 14
    virtual void setFlattenHeight(int const) = 0;

    // vIndex: 15
    virtual void setFlattenRadius(int const) = 0;

    // vIndex: 16
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
