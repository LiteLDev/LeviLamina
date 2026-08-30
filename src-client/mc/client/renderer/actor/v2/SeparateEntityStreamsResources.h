#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BakedResourceExtendedOffsets;
struct BakedResourceOffsets;
struct RenderControllerResources;
// clang-format on

struct SeparateEntityStreamsResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::RenderControllerResources const&>                 mResources;
    ::ll::TypedStorage<8, 16, ::gsl::span<::BakedResourceOffsets const>>         mResourceOffsets;
    ::ll::TypedStorage<8, 16, ::gsl::span<::BakedResourceExtendedOffsets const>> mExtendedOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    SeparateEntityStreamsResources& operator=(SeparateEntityStreamsResources const&);
    SeparateEntityStreamsResources(SeparateEntityStreamsResources const&);
    SeparateEntityStreamsResources();
};
