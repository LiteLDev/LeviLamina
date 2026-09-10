#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/DataDrivenRendererResources.h"
#include "mc/client/renderer/actor/v2/RenderControllerResources.h"

// auto generated forward declare list
// clang-format off
struct BakedDataDrivenRenderData;
struct BakedDataDrivenRenderDataInfrequentAccess;
struct BakedRenderControllerPartVisibilityData;
struct BakedRenderControllerUniformData;
struct BakedResourceExtendedOffsets;
struct BakedResourceOffsets;
struct DataDrivenRenderCounts;
// clang-format on

struct DataDrivenRendererPool {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DataDrivenRendererPool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
