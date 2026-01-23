#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/BrushElevationMode.h"
#include "mc/common/editor/DirectionalPlacementMode.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/editor/services/native_brush/BrushFlattenMode.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"
#include "mc/server/editor/serviceproviders/BrushShapeManagerServiceProvider.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Vec3;
namespace Editor { class RelativeVolumeListBlockVolume; }
namespace Editor::BlockMask { class BlockMaskList; }
namespace Editor::Network { class NativeBrushBlockChangeListPayload; }
namespace Editor::Network { class NativeBrushClientResponsePayload; }
namespace Editor::Network { class NativeBrushPaintEventPayload; }
// clang-format on

namespace Editor::Brush {

class BrushShapeManagerService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::BrushShapeManagerServiceProvider,
                                 public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6af011;
    ::ll::UntypedStorage<8, 88> mUnka4cddc;
    ::ll::UntypedStorage<8, 64> mUnk51d4db;
    ::ll::UntypedStorage<4, 12> mUnk37d1f3;
    ::ll::UntypedStorage<4, 4>  mUnkc4a1dd;
    ::ll::UntypedStorage<4, 4>  mUnkbbaf84;
    ::ll::UntypedStorage<4, 4>  mUnka573ba;
    ::ll::UntypedStorage<1, 1>  mUnke46fbe;
    ::ll::UntypedStorage<4, 4>  mUnk84cce9;
    ::ll::UntypedStorage<4, 4>  mUnk13e9dc;
    ::ll::UntypedStorage<4, 4>  mUnk467727;
    ::ll::UntypedStorage<4, 4>  mUnkae7855;
    ::ll::UntypedStorage<1, 1>  mUnk97eafd;
    ::ll::UntypedStorage<4, 4>  mUnkca6267;
    ::ll::UntypedStorage<1, 1>  mUnk205ad5;
    ::ll::UntypedStorage<8, 48> mUnke94b7f;
    ::ll::UntypedStorage<8, 24> mUnkeaa4d2;
    ::ll::UntypedStorage<1, 1>  mUnk718da0;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushShapeManagerService& operator=(BrushShapeManagerService const&);
    BrushShapeManagerService(BrushShapeManagerService const&);
    BrushShapeManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrushShapeManagerService() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Editor::RelativeVolumeListBlockVolume const& getCurrentBrushVolume() const /*override*/;

    virtual void activateBrushTool() /*override*/;

    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode) /*override*/;

    virtual void setBrushShape(::std::vector<::Vec3> const& shapeOffsets) /*override*/;

    virtual void setBrushShape(::Editor::RelativeVolumeListBlockVolume const& volume) /*override*/;

    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const& mask) /*override*/;

    virtual void
    beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    virtual void endPainting(bool const cancelled) /*override*/;

    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    virtual void deactivateBrushTool() /*override*/;

    virtual void setBrushShapeOffset(::Vec3 const& offset) /*override*/;

    virtual ::Vec3 getBrushShapeOffset() const /*override*/;

    virtual void setTerrainStrength(int const terrainStrength) /*override*/;

    virtual void setFlattenMode(::Editor::Brush::BrushFlattenMode flattenMode) /*override*/;

    virtual void setFlattenSmoothing(int const flattenSmoothing) /*override*/;

    virtual void setFloorBlockOverride(bool const floorBlockOverride) /*override*/;

    virtual void setElevationMode(::Editor::Brush::BrushElevationMode elevationMode) /*override*/;

    virtual void setElevationFalloff(int const elevationFalloff) /*override*/;

    virtual void setElevationSampleLayers(int const elevationSampleLayers) /*override*/;

    virtual void setElevationBrushRadius(int const elevationBrushRadius) /*override*/;

    virtual void setBrushShapeVisible(bool const visible) /*override*/;

    virtual bool isBusy() /*override*/;

    virtual void
    setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode directionalPlacementMode) /*override*/;

    virtual ::Editor::Brush::DirectionalPlacementMode getDirectionalPlacementMode() const /*override*/;

    virtual void setInverseEraseMode(bool const inverseErase) /*override*/;

    virtual bool getInverseEraseMode() const /*override*/;

    virtual void setItemPlacement(::HashedString const& itemName) /*override*/;

    virtual ::HashedString const& getItemPlacement() const /*override*/;

    virtual bool const isItemPlacementActive() const /*override*/;

    virtual void pushBlockStateOverride(
        ::HashedString const&                           stateName,
        ::std::variant<int, ::std::string, bool> const& stateValue
    ) /*override*/;

    virtual void clearBlockStateOverrides() /*override*/;

    virtual void setBlockFacePlacementBasedOnCamera(bool const enable) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleBlockChangePayload(::Editor::Network::NativeBrushBlockChangeListPayload const& payload);

    MCNAPI void _handleClientResponsePayload(::Editor::Network::NativeBrushClientResponsePayload const& payload);

    MCNAPI void _handlePaintEventPayload(::Editor::Network::NativeBrushPaintEventPayload const& payload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Editor::RelativeVolumeListBlockVolume const& $getCurrentBrushVolume() const;

    MCNAPI void $activateBrushTool();

    MCNAPI void $switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode);

    MCNAPI void $setBrushShape(::std::vector<::Vec3> const& shapeOffsets);

    MCNAPI void $setBrushShape(::Editor::RelativeVolumeListBlockVolume const& volume);

    MCNAPI void $setBrushMask(::Editor::BlockMask::BlockMaskList const& mask);

    MCNAPI void $beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback);

    MCNAPI void $endPainting(bool const cancelled);

    MCNAPI void $singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback);

    MCNAPI void $deactivateBrushTool();

    MCNAPI void $setBrushShapeOffset(::Vec3 const& offset);

    MCNAPI ::Vec3 $getBrushShapeOffset() const;

    MCNAPI void $setTerrainStrength(int const terrainStrength);

    MCNAPI void $setFlattenMode(::Editor::Brush::BrushFlattenMode flattenMode);

    MCNAPI void $setFlattenSmoothing(int const flattenSmoothing);

    MCNAPI void $setFloorBlockOverride(bool const floorBlockOverride);

    MCNAPI void $setElevationMode(::Editor::Brush::BrushElevationMode elevationMode);

    MCNAPI void $setElevationFalloff(int const elevationFalloff);

    MCNAPI void $setElevationSampleLayers(int const elevationSampleLayers);

    MCNAPI void $setElevationBrushRadius(int const elevationBrushRadius);

    MCNAPI void $setBrushShapeVisible(bool const visible);

    MCNAPI bool $isBusy();

    MCNAPI void $setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode directionalPlacementMode);

    MCNAPI ::Editor::Brush::DirectionalPlacementMode $getDirectionalPlacementMode() const;

    MCNAPI void $setInverseEraseMode(bool const inverseErase);

    MCNAPI bool $getInverseEraseMode() const;

    MCNAPI void $setItemPlacement(::HashedString const& itemName);

    MCNAPI ::HashedString const& $getItemPlacement() const;

    MCNAPI bool const $isItemPlacementActive() const;

    MCNAPI void $pushBlockStateOverride(
        ::HashedString const&                           stateName,
        ::std::variant<int, ::std::string, bool> const& stateValue
    );

    MCNAPI void $clearBlockStateOverrides();

    MCNAPI void $setBlockFacePlacementBasedOnCamera(bool const enable);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForBrushShapeManagerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Brush
