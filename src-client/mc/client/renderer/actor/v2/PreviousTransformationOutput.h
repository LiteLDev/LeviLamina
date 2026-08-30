#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PreviousTransformationData;
// clang-format on

struct PreviousTransformationOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PreviousTransformationData&> mNextFrameData;
    ::ll::TypedStorage<8, 16, ::gsl::span<::glm::mat4x4>>   mFramePreviousActorTransforms;
    ::ll::TypedStorage<8, 16, ::gsl::span<::glm::mat4x4>>   mFramePreviousActorBones;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviousTransformationOutput& operator=(PreviousTransformationOutput const&);
    PreviousTransformationOutput(PreviousTransformationOutput const&);
    PreviousTransformationOutput();
};
