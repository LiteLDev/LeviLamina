#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AttachablesResources.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
struct BakedAttachableData;
// clang-format on

struct ProcessedAttachableRenderers {
public:
    // ProcessedAttachableRenderers inner types declare
    // clang-format off
    struct RemappingData;
    // clang-format on

    // ProcessedAttachableRenderers inner types define
    struct RemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mIndex;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::entt::dense_map<::ActorRenderer const*, ::ProcessedAttachableRenderers::RemappingData>>
                                                                    mSupportedAttachableRemapping;
    ::ll::TypedStorage<8, 24, ::AttachablesResources>               mAttachableResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedAttachableData>> mAttachables;
    // NOLINTEND
};
