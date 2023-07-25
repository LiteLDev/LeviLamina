#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaBlockDrops {
/**
 * @symbol
 * ?add\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@V?$unique_ptr\@VIResourceDropsStrategy\@\@U?$default_delete\@VIResourceDropsStrategy\@\@\@std\@\@\@std\@\@\@Z
 */
MCAPI void add(class HashedString const&, std::unique_ptr<class IResourceDropsStrategy>);
/**
 * @symbol ?configureBlockDrops\@VanillaBlockDrops\@\@YAXAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
 */
MCAPI void configureBlockDrops(class BaseGameVersion const&, class Experiments const&);
/**
 * @symbol ?dropSelf\@VanillaBlockDrops\@\@YAXAEBVHashedString\@\@\@Z
 */
MCAPI void dropSelf(class HashedString const&);

}; // namespace VanillaBlockDrops
