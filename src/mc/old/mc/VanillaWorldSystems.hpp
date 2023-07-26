/**
 * @file  VanillaWorldSystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace VanillaWorldSystems.
 *
 */
namespace VanillaWorldSystems {

#define AFTER_EXTRA
// Add Member There
class Impl {
public:
    Impl() = delete;
    Impl(Impl const&) = delete;
    Impl(Impl const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @symbol  ?init\@VanillaWorldSystems\@\@YA?AV?$shared_ptr\@VImpl\@VanillaWorldSystems\@\@\@std\@\@PEAVLevel\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI class std::shared_ptr<class VanillaWorldSystems::Impl> init(class Level *, class Experiments const &, class BaseGameVersion const &, class ResourcePackManager *, class ItemRegistryRef);

};