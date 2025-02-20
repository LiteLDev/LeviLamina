#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationPlayer;
class AnimationComponentID;
class BoneOrientation;
class CommonResourceDefinitionMap;
class ExpressionNode;
class HashedString;
class MolangVariableMap;
// clang-format on

class AnimationComponent {
public:
    // AnimationComponent inner types declare
    // clang-format off
    struct ChildAnimationComponentInfo;
    // clang-format on

    // AnimationComponent inner types define
    struct ChildAnimationComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk301dd5;
        ::ll::UntypedStorage<8, 56> mUnkb77211;
        ::ll::UntypedStorage<8, 16> mUnka46f8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChildAnimationComponentInfo& operator=(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk598a18;
    ::ll::UntypedStorage<8, 24>  mUnkf3e183;
    ::ll::UntypedStorage<8, 24>  mUnk42e54c;
    ::ll::UntypedStorage<8, 64>  mUnkcb5e24;
    ::ll::UntypedStorage<8, 496> mUnk323831;
    ::ll::UntypedStorage<8, 16>  mUnke37e59;
    ::ll::UntypedStorage<8, 8>   mUnk46fcee;
    ::ll::UntypedStorage<8, 16>  mUnk666a77;
    ::ll::UntypedStorage<8, 8>   mUnkd23b12;
    ::ll::UntypedStorage<8, 64>  mUnk47f31e;
    ::ll::UntypedStorage<8, 24>  mUnk9b9031;
    ::ll::UntypedStorage<8, 64>  mUnkef9142;
    ::ll::UntypedStorage<1, 1>   mUnkfe723c;
    ::ll::UntypedStorage<4, 4>   mUnkfb87d6;
    ::ll::UntypedStorage<8, 8>   mUnkd62667;
    ::ll::UntypedStorage<8, 8>   mUnk202620;
    ::ll::UntypedStorage<8, 8>   mUnk921ace;
    ::ll::UntypedStorage<8, 16>  mUnkcd5ccb;
    ::ll::UntypedStorage<1, 1>   mUnk215963;
    ::ll::UntypedStorage<1, 1>   mUnk9f6884;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponent& operator=(AnimationComponent const&);
    AnimationComponent(AnimationComponent const&);
    AnimationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    AnimationComponent(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);

    MCAPI void applyAnimations(bool setDefaultPose);

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&                                    friendlyName,
        ::ExpressionNode const&                                  blendExpression,
        ::std::set<::HashedString, ::std::hash<::HashedString>>& animationControllerNameStack
    );

    MCAPI ::std::vector<::BoneOrientation>*
    getBoneOrientations(::SkeletalHierarchyIndex skeletalHierarchyIndex, bool missingIsOkay);

    MCAPI void initInstanceSpecificAnimationData(::MolangVariableMap* variableMap);

    MCAPI void initializeServerAnimationComponent(
        ::Actor&                                         actor,
        ::std::shared_ptr<::CommonResourceDefinitionMap> animationResourceDefinition,
        ::std::function<void(::ActorAnimationPlayer&)>   animationComponentInitFunction
    );

    MCAPI void serverUpdate(::Actor& actor);

    MCAPI void setDirty();

    MCAPI ~AnimationComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::atomic<int64>& mClientFrameIndex();

    MCAPI static ::std::atomic<int64>& mReloadTimeStampClient();

    MCAPI static ::std::atomic<int64>& mServerFrameIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AnimationComponentGroupType animationComponentGroup, ::AnimationComponentID const& ownerUUID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
