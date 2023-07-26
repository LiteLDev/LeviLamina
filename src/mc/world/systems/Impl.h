#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Experiments;
class ItemRegistryRef;
class Level;
class ResourcePackManager;
// clang-format on

namespace VanillaWorldSystems {

class Impl {

public:
    // prevent constructor by default
    Impl& operator=(Impl const&) = delete;
    Impl(Impl const&)            = delete;
    Impl()                       = delete;

public:
    /**
     * @symbol
     * ??0Impl\@VanillaWorldSystems\@\@QEAA\@AEBV?$NonOwnerPointer\@VLevel\@\@\@Bedrock\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@PEAVResourcePackManager\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI Impl(
        class Bedrock::NonOwnerPointer<class Level> const&,
        class Experiments const&,
        class BaseGameVersion const&,
        class ResourcePackManager*,
        class ItemRegistryRef
    ); // NOLINT
    /**
     * @symbol ?mInstance\@Impl\@VanillaWorldSystems\@\@2V?$weak_ptr\@VImpl\@VanillaWorldSystems\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class VanillaWorldSystems::Impl> mInstance; // NOLINT
};

}; // namespace VanillaWorldSystems
