#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenRendererResources.h"
#include "mc/client/renderer/actor/v2/ProcessedAttachableRenderers.h"
#include "mc/client/renderer/actor/v2/RenderControllerResources.h"
#include "mc/common/GameVersion.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
struct BakedDataDrivenRenderData;
struct BakedDataDrivenRenderDataInfrequentAccess;
struct BakedRenderControllerPartVisibilityData;
struct BakedRenderControllerUniformData;
struct BakedResourceExtendedOffsets;
struct BakedResourceOffsets;
struct DataDrivenRenderCounts;
// clang-format on

struct ProcessedDataDrivenRenderers {
public:
    // ProcessedDataDrivenRenderers inner types declare
    // clang-format off
    struct RemappingData;
    // clang-format on

    // ProcessedDataDrivenRenderers inner types define
    struct RemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mIndex;
        ::ll::TypedStorage<1, 1, bool> mAttachablesSupported;
        ::ll::TypedStorage<1, 1, bool> mHideArmor;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::GameVersion> mMinCompatibleGameVersion;
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::ActorRenderer const*, ::ProcessedDataDrivenRenderers::RemappingData>>
                                                                          mSupportedDataDrivenRendererRemapping;
    ::ll::TypedStorage<8, 312, ::RenderControllerResources>               mRenderControllerResources;
    ::ll::TypedStorage<8, 144, ::DataDrivenRendererResources>             mDataDrivenRendererResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedDataDrivenRenderData>> mDataDrivenRenderers;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedDataDrivenRenderDataInfrequentAccess>>
                                                                             mDataDrivenRenderersInfrequentData;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRenderCounts>>       mDataDrivenRendererCounts;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedResourceOffsets>>         mRenderControllerResourceOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedResourceExtendedOffsets>> mRenderControllerResourceExtendedOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedRenderControllerUniformData>>        mRenderControllerUniformData;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedRenderControllerPartVisibilityData>> mRenderControllerPartVisibility;
    ::ll::TypedStorage<8, 120, ::ProcessedAttachableRenderers>                          mAttachables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ProcessedDataDrivenRenderers();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
