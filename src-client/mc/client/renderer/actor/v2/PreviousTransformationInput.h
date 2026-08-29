#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct AnimationRemappingInfo;
struct DataDrivenRendererEntry;
struct PreviousTransformationData;
struct SkinnedMeshRemappingData;
namespace mce::framebuilder { struct RenderBatchActorInstanceDescription; }
// clang-format on

struct PreviousTransformationInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<::DataDrivenRendererEntry> const>  mFrameRenderers;
    ::ll::TypedStorage<8, 16, ::gsl::span<::Actor*> const>                   mFrameActors;
    ::ll::TypedStorage<8, 16, ::gsl::span<::AnimationRemappingInfo> const>   mFrameActorAnimationRemapping;
    ::ll::TypedStorage<8, 16, ::gsl::span<::SkinnedMeshRemappingData> const> mFrameSkinnedMeshRemapping;
    ::ll::TypedStorage<8, 8, ::std::vector<::glm::mat4x4> const&>            mFrameBoneData;
    ::ll::TypedStorage<8, 16, ::gsl::span<::mce::framebuilder::RenderBatchActorInstanceDescription> const>
                                                                  mFrameActorDescriptions;
    ::ll::TypedStorage<8, 8, ::PreviousTransformationData const&> mPreviousFrameData;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviousTransformationInput& operator=(PreviousTransformationInput const&);
    PreviousTransformationInput(PreviousTransformationInput const&);
    PreviousTransformationInput();
};
