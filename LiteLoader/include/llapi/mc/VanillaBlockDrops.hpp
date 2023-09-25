/**
 * @file  VanillaBlockDrops.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace VanillaBlockDrops {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?add\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@V?$unique_ptr\@VIResourceDropsStrategy\@\@U?$default_delete\@VIResourceDropsStrategy\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void add(class HashedString const &, std::unique_ptr<class IResourceDropsStrategy>);
    /**
     * @symbol ?configureBlockDrops\@VanillaBlockDrops\@\@YAXAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI void configureBlockDrops(class BaseGameVersion const &, class Experiments const &);
    /**
     * @symbol ?dropOther\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@0\@Z
     */
    MCAPI void dropOther(class HashedString const &, class HashedString const &);
    /**
     * @symbol ?dropSelf\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@V?$vector\@PEBVBlockState\@\@V?$allocator\@PEBVBlockState\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void dropSelf(class HashedString const &, std::vector<class BlockState const *>);
    /**
     * @symbol ?dropSelfOnlyWhenSilkTouched\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@\@Z
     */
    MCAPI void dropSelfOnlyWhenSilkTouched(class HashedString const &);

};