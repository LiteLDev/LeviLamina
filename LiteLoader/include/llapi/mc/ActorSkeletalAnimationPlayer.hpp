/**
 * @file  MC/ActorSkeletalAnimationPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorSkeletalAnimationPlayer.
 *
 */
class ActorSkeletalAnimationPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSKELETALANIMATIONPLAYER
public:
    class ActorSkeletalAnimationPlayer& operator=(class ActorSkeletalAnimationPlayer const &) = delete;
    ActorSkeletalAnimationPlayer(class ActorSkeletalAnimationPlayer const &) = delete;
    ActorSkeletalAnimationPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorSkeletalAnimationPlayer();
    /**
     * @hash   1539725571
     * @vftbl  1
     * @symbol ?applyToPose@ActorSkeletalAnimationPlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
     */
    virtual void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    /**
     * @hash   -2013189931
     * @vftbl  2
     * @symbol ?resetAnimation@ActorSkeletalAnimationPlayer@@UEAAXXZ
     */
    virtual void resetAnimation();
    /**
     * @hash   -320000515
     * @vftbl  3
     * @symbol ?buildBoneToPartMapping@ActorSkeletalAnimationPlayer@@UEAAXAEAVAnimationComponent@@@Z
     */
    virtual void buildBoneToPartMapping(class AnimationComponent &);
    /**
     * @hash   1498040851
     * @vftbl  4
     * @symbol ?bindParticleEffects@ActorSkeletalAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
     */
    virtual void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
    /**
     * @hash   -1242290552
     * @vftbl  5
     * @symbol ?bindSoundEffects@ActorSkeletalAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
     */
    virtual void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
    /**
     * @hash   -752901955
     * @vftbl  6
     * @symbol ?hasAnimationFinished@ActorSkeletalAnimationPlayer@@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const;
    /**
     * @hash   -2006545168
     * @vftbl  7
     * @symbol ?findAnimation@ActorSkeletalAnimationPlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
     */
    virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const &);
    /**
     * @hash   -451764024
     * @vftbl  8
     * @symbol ?getAnimationType@ActorSkeletalAnimationPlayer@@UEBA?AW4ActorAnimationType@@XZ
     */
    virtual enum ActorAnimationType getAnimationType() const;
    /**
     * @hash   -1556004267
     * @vftbl  9
     * @symbol ?getRawName@ActorSkeletalAnimationPlayer@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getRawName() const;
    /**
     * @hash   -702452293
     * @symbol ??0ActorSkeletalAnimationPlayer@@QEAA@AEBVHashedString@@VActorSkeletalAnimationPtr@@AEAVAnimationComponent@@AEBVExpressionNode@@@Z
     */
    MCAPI ActorSkeletalAnimationPlayer(class HashedString const &, class ActorSkeletalAnimationPtr, class AnimationComponent &, class ExpressionNode const &);

};