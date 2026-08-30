#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorIndex;
// clang-format on

struct DataDrivenRendererDerivitiveData {
public:
    // DataDrivenRendererDerivitiveData inner types declare
    // clang-format off
    struct RenderControllerEntry;
    // clang-format on

    // DataDrivenRendererDerivitiveData inner types define
    struct RenderControllerEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mRenderControllerIdx;
        ::ll::TypedStorage<4, 4, uint> mSubRenderLayerIndex;
        ::ll::TypedStorage<4, 4, uint> mCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRendererDerivitiveData::RenderControllerEntry>>
                                                           mRenderControllers;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorIndex>> mRenderControllerToActorIdx;
    // NOLINTEND
};
