/**
 * @file  ActorAnimationControllerStatePlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerStatePlayer.
 *
 */
class ActorAnimationControllerStatePlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATEPLAYER
public:
    class ActorAnimationControllerStatePlayer& operator=(class ActorAnimationControllerStatePlayer const &) = delete;
    ActorAnimationControllerStatePlayer(class ActorAnimationControllerStatePlayer const &) = delete;
    ActorAnimationControllerStatePlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorAnimationControllerStatePlayer();
    /**
     * @hash   241670595
     * @vftbl  1
     * @symbol ?applyToPose@ActorAnimationControllerStatePlayer@@UEAAXAEAVRenderParams@@AEAV?$unordered_map@W4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@U?$hash@W4SkeletalHierarchyIndex@@@3@U?$equal_to@W4SkeletalHierarchyIndex@@@3@V?$allocator@U?$pair@$$CBW4SkeletalHierarchyIndex@@V?$vector@VBoneOrientation@@V?$allocator@VBoneOrientation@@@std@@@std@@@std@@@3@@std@@M@Z
     */
    virtual void applyToPose(class RenderParams &, class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> &, float);
    /**
     * @hash   -1490232139
     * @vftbl  2
     * @symbol ?resetAnimation@ActorAnimationControllerStatePlayer@@UEAAXXZ
     */
    virtual void resetAnimation();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   245803501
     * @vftbl  6
     * @symbol ?hasAnimationFinished@ActorAnimationControllerStatePlayer@@UEBA_NXZ
     */
    virtual bool hasAnimationFinished() const;
    /**
     * @hash   -223624336
     * @vftbl  7
     * @symbol ?findAnimation@ActorAnimationControllerStatePlayer@@UEAA?AV?$shared_ptr@VActorAnimationPlayer@@@std@@AEBVHashedString@@@Z
     */
    virtual class std::shared_ptr<class ActorAnimationPlayer> findAnimation(class HashedString const &);
    /**
     * @hash   308826104
     * @vftbl  8
     * @symbol ?getAnimationType@ActorAnimationControllerStatePlayer@@UEBA?AW4ActorAnimationType@@XZ
     */
    virtual enum ActorAnimationType getAnimationType() const;
    /**
     * @hash   -1397028827
     * @vftbl  9
     * @symbol ?getRawName@ActorAnimationControllerStatePlayer@@UEBAAEBVHashedString@@XZ
     */
    virtual class HashedString const & getRawName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONCONTROLLERSTATEPLAYER
    /**
     * @hash   343749507
     * @symbol ?bindParticleEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z
     */
    MCVAPI void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
    /**
     * @hash   -2119430104
     * @symbol ?bindSoundEffects@ActorAnimationControllerStatePlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
     */
    MCVAPI void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
#endif
    /**
     * @hash   1795705744
     * @symbol ??0ActorAnimationControllerStatePlayer@@QEAA@AEBVHashedString@@AEAVActorAnimationControllerPlayer@@V?$shared_ptr@VActorAnimationControllerState@@@std@@AEAVAnimationComponent@@AEBVExpressionNode@@AEAV?$set@VHashedString@@U?$hash@VHashedString@@@std@@V?$allocator@VHashedString@@@3@@4@@Z
     */
    MCAPI ActorAnimationControllerStatePlayer(class HashedString const &, class ActorAnimationControllerPlayer &, class std::shared_ptr<class ActorAnimationControllerState>, class AnimationComponent &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    /**
     * @hash   -372839888
     * @symbol ?allAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
     */
    MCAPI bool allAnimationsFinished() const;
    /**
     * @hash   -1036090864
     * @symbol ?anyAnimationsFinished@ActorAnimationControllerStatePlayer@@QEBA_NXZ
     */
    MCAPI bool anyAnimationsFinished() const;

};