#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class UIControl;
class UIRenderContext;
struct BatchClippingState;
struct BatchKey;
struct BatchVisualState;
struct ClippedControlMetadata;
struct CustomRenderComponent;
struct GridComponent;
struct RenderControlMetadata;
struct TextureState;
// clang-format on

class ScreenRenderBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderControlMetadata>>       mRenderControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::ComponentRenderBatch>>        mRenderBatches;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::TextureState>> mTextureStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _addRenderControl(
        ::UIControl&                control,
        ::BatchClippingState const& batchClippingState,
        ::BatchVisualState const&   batchVisualState,
        ::ClippedControlMetadata&   clippedControlData,
        bool                        hasRenderableComponent
    );

    MCAPI void _addToRenderBatch(
        ::UIRenderContext&             renderContext,
        int                            depth,
        ::CustomRenderComponent* const customRender,
        ::BatchClippingState const&    batchClippingState,
        ::BatchVisualState const&      batchVisualState
    );

    MCAPI ::ComponentRenderBatch& _findOrAddRenderBatch(::BatchKey&& batchKey);

    MCAPI void _populateRenderBatch(::UIRenderContext& renderContext);

    MCAPI bool _populateRenderControlsCollection(
        ::UIControl&                control,
        ::BatchClippingState const& batchClippingState,
        ::BatchClippingState const& unclippedBatchClippingState,
        ::BatchVisualState const&   batchVisualState,
        ::ClippedControlMetadata&   clippedControlData,
        bool                        checkIfRendered
    );

    MCAPI void _populateRenderControlsGrid(
        ::UIControl&                control,
        ::GridComponent&            gridComponent,
        ::BatchClippingState const& childBatchClippingState,
        ::BatchClippingState const& unclippedBatchClippingState,
        ::BatchVisualState const&   childBatchVisualState,
        ::ClippedControlMetadata&   clippedControlData
    );

    MCAPI void _storeTextureState(::UIControl& control, bool state);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::pair<int, int>>& GRID_DIMENSIONS();
    // NOLINTEND
};
