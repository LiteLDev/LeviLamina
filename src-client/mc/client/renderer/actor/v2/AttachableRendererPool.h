#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/AttachablesResources.h"

// auto generated forward declare list
// clang-format off
struct BakedAttachableData;
// clang-format on

struct AttachableRendererPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::AttachablesResources>               mAttachableResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::BakedAttachableData>> mAttachables;
    // NOLINTEND
};
