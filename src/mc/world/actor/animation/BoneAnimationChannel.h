#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/BoneTransformType.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class KeyFrameTransform;
class RenderParams;
struct BoneAnimationChannelPlayer;
// clang-format on

class BoneAnimationChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BoneTransformType>                 mBoneTransformType;
    ::ll::TypedStorage<8, 24, ::std::vector<::KeyFrameTransform>> mKeyFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::KeyFrameTransform& addKeyFrame(float time);

    MCAPI_C void animate(
        ::RenderParams&               renderParams,
        ::BoneOrientation&            destBoneOrientation,
        float                         scale,
        ::BoneAnimationChannelPlayer* boneAnimationChannelPlayer
    ) const;
    // NOLINTEND
};
