#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { template<typename T0> class NonOwnerPointer; }
namespace VanillaWorldSystems { class Impl; }
// clang-format on

namespace VanillaWorldSystems {
// NOLINTBEGIN
/**
 * @symbol
 * ?init\@VanillaWorldSystems\@\@YA?AV?$shared_ptr\@VImpl\@VanillaWorldSystems\@\@\@std\@\@AEBV?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@VItemRegistryRef\@\@\@Z
 */
MCAPI std::shared_ptr<class VanillaWorldSystems::Impl> init(
    class Bedrock::NonOwnerPointer<class Level> const&,
    class Experiments const&,
    class BaseGameVersion const&,
    class ResourcePackManager*,
    class ItemRegistryRef
);
// NOLINTEND

}; // namespace VanillaWorldSystems
