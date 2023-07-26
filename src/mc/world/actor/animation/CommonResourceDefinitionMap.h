#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommonResourceDefinitionMap {

public:
    // prevent constructor by default
    CommonResourceDefinitionMap& operator=(CommonResourceDefinitionMap const&) = delete;
    CommonResourceDefinitionMap(CommonResourceDefinitionMap const&)            = delete;

public:
    /**
     * @symbol ??0CommonResourceDefinitionMap\@\@QEAA\@XZ
     */
    MCAPI CommonResourceDefinitionMap(); // NOLINT
    /**
     * @symbol
     * ?getAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct NamedMolangScript> const& getAnimateScriptArray() const; // NOLINT
    /**
     * @symbol
     * ?getAnimationControllers\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorAnimationControllerPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorAnimationControllerPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class HashedString,
        class ActorAnimationControllerPtr,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, class ActorAnimationControllerPtr>>> const&
    getAnimationControllers() const; // NOLINT
    /**
     * @symbol
     * ?getAnimations\@CommonResourceDefinitionMap\@\@QEBAAEBV?$unordered_map\@VHashedString\@\@VActorSkeletalAnimationPtr\@\@U?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@4\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@std\@\@\@4\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class HashedString,
        class ActorSkeletalAnimationPtr,
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<struct std::pair<class HashedString const, class ActorSkeletalAnimationPtr>>> const&
    getAnimations() const; // NOLINT
    /**
     * @symbol
     * ?getVariableSettings\@CommonResourceDefinitionMap\@\@QEBAAEBV?$vector\@UMolangVariableSettings\@\@V?$allocator\@UMolangVariableSettings\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct MolangVariableSettings> const& getVariableSettings() const; // NOLINT
    /**
     * @symbol ?isCommonResourceDefinitionMapEmpty\@CommonResourceDefinitionMap\@\@QEBA_NXZ
     */
    MCAPI bool isCommonResourceDefinitionMapEmpty() const; // NOLINT
    /**
     * @symbol
     * ?mergeActorAnimateScriptArray\@CommonResourceDefinitionMap\@\@QEAAXAEBV?$vector\@UNamedMolangScript\@\@V?$allocator\@UNamedMolangScript\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void mergeActorAnimateScriptArray(std::vector<struct NamedMolangScript> const&); // NOLINT
    /**
     * @symbol
     * ?mergeAnimation\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorSkeletalAnimationPtr\@\@\@Z
     */
    MCAPI void mergeAnimation(class HashedString const&, class ActorSkeletalAnimationPtr); // NOLINT
    /**
     * @symbol
     * ?mergeAnimationController\@CommonResourceDefinitionMap\@\@QEAAXAEBVHashedString\@\@VActorAnimationControllerPtr\@\@\@Z
     */
    MCAPI void mergeAnimationController(class HashedString const&, class ActorAnimationControllerPtr); // NOLINT

    // private:
    /**
     * @symbol ?_getAnimationResourceDefinitionLock\@CommonResourceDefinitionMap\@\@CAAEAVrecursive_mutex\@std\@\@XZ
     */
    MCAPI static class std::recursive_mutex& _getAnimationResourceDefinitionLock(); // NOLINT

private:
};
