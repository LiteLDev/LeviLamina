#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/BrushFlattenMode.h"
#include "mc/common/editor/DirectionalPlacementMode.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
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

class BrushShapeManagerService : public ::Editor::Services::IEditorService, public ::Editor::Services::BrushShapeManagerServiceProvider, public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6af011;
    ::ll::UntypedStorage<8, 88> mUnka4cddc;
    ::ll::UntypedStorage<8, 64> mUnk51d4db;
    ::ll::UntypedStorage<4, 12> mUnk37d1f3;
    ::ll::UntypedStorage<4, 4> mUnkc4a1dd;
    ::ll::UntypedStorage<4, 4> mUnkbbaf84;
    ::ll::UntypedStorage<4, 4> mUnka573ba;
    ::ll::UntypedStorage<1, 1> mUnke46fbe;
    ::ll::UntypedStorage<1, 1> mUnk97eafd;
    ::ll::UntypedStorage<4, 4> mUnkca6267;
    ::ll::UntypedStorage<1, 1> mUnk205ad5;
    ::ll::UntypedStorage<8, 48> mUnke94b7f;
    ::ll::UntypedStorage<8, 24> mUnkeaa4d2;
    ::ll::UntypedStorage<1, 1> mUnk718da0;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushShapeManagerService& operator=(BrushShapeManagerService const&);
    BrushShapeManagerService(BrushShapeManagerService const&);
    BrushShapeManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushShapeManagerService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Editor::RelativeVolumeListBlockVolume const& getCurrentBrushVolume() const /*override*/;

    // vIndex: 2
    virtual void activateBrushTool() /*override*/;

    // vIndex: 3
    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode) /*override*/;

    // vIndex: 5
    virtual void setBrushShape(::std::vector<::Vec3> const& shapeOffsets) /*override*/;

    // vIndex: 4
    virtual void setBrushShape(::Editor::RelativeVolumeListBlockVolume const& volume) /*override*/;

    // vIndex: 6
    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const& mask) /*override*/;

    // vIndex: 7
    virtual void beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    // vIndex: 8
    virtual void endPainting(bool const cancelled) /*override*/;

    // vIndex: 9
    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    // vIndex: 10
    virtual void deactivateBrushTool() /*override*/;

    // vIndex: 11
    virtual void setBrushShapeOffset(::Vec3 const& offset) /*override*/;

    // vIndex: 12
    virtual ::Vec3 getBrushShapeOffset() const /*override*/;

    // vIndex: 13
    virtual void setTerrainStrength(int const terrainStrength) /*override*/;

    // vIndex: 14
    virtual void setFlattenMode(::Editor::Brush::BrushFlattenMode flattenMode) /*override*/;

    // vIndex: 15
    virtual void setFlattenSmoothing(int const flattenSmoothing) /*override*/;

    // vIndex: 16
    virtual void setFloorBlockOverride(bool const floorBlockOverride) /*override*/;

    // vIndex: 17
    virtual void setBrushShapeVisible(bool const visible) /*override*/;

    // vIndex: 18
    virtual bool isBusy() /*override*/;

    // vIndex: 19
    virtual void setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode directionalPlacementMode) /*override*/;

    // vIndex: 20
    virtual ::Editor::Brush::DirectionalPlacementMode getDirectionalPlacementMode() const /*override*/;

    // vIndex: 21
    virtual void setInverseEraseMode(bool const inverseErase) /*override*/;

    // vIndex: 22
    virtual bool getInverseEraseMode() const /*override*/;

    // vIndex: 23
    virtual void setItemPlacement(::HashedString const& itemName) /*override*/;

    // vIndex: 24
    virtual ::HashedString const& getItemPlacement() const /*override*/;

    // vIndex: 25
    virtual bool const isItemPlacementActive() const /*override*/;

    // vIndex: 26
    virtual void pushBlockStateOverride(::HashedString const& stateName, ::std::variant<int, ::std::string, bool> const& stateValue) /*override*/;

    // vIndex: 27
    virtual void clearBlockStateOverrides() /*override*/;

    // vIndex: 28
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

    MCNAPI void $setBrushShapeVisible(bool const visible);

    MCNAPI bool $isBusy();

    MCNAPI void $setDirectionalPlacementMode(::Editor::Brush::DirectionalPlacementMode directionalPlacementMode);

    MCNAPI ::Editor::Brush::DirectionalPlacementMode $getDirectionalPlacementMode() const;

    MCNAPI void $setInverseEraseMode(bool const inverseErase);

    MCNAPI bool $getInverseEraseMode() const;

    MCNAPI void $setItemPlacement(::HashedString const& itemName);

    MCNAPI ::HashedString const& $getItemPlacement() const;

    MCNAPI bool const $isItemPlacementActive() const;

    MCNAPI void $pushBlockStateOverride(::HashedString const& stateName, ::std::variant<int, ::std::string, bool> const& stateValue);

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

}
