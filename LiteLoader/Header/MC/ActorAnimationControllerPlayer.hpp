// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorAnimationControllerPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERPLAYER
public:
    class ActorAnimationControllerPlayer& operator=(class ActorAnimationControllerPlayer const &) = delete;
    ActorAnimationControllerPlayer(class ActorAnimationControllerPlayer const &) = delete;
    ActorAnimationControllerPlayer() = delete;
#endif

public:
    /*0*/ virtual ~ActorAnimationControllerPlayer();
    /*1*/ virtual void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    /*2*/ virtual void resetAnimation();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
    /*5*/ virtual void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
    /*6*/ virtual bool hasAnimationFinished() const;
    /*7*/ virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const &);
    /*8*/ virtual enum ActorAnimationType getAnimationType() const;
    /*9*/ virtual class HashedString const & getRawName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONCONTROLLERPLAYER
public:
#endif
    MCAPI ActorAnimationControllerPlayer(class HashedString const &, class ActorAnimationControllerPtr const &, class AnimationComponent &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    MCAPI void applyStateAnimationToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    MCAPI void blendViaShortestPath(class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float, float);
    MCAPI void transitionToState(int);



};