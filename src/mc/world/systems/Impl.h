#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

namespace VanillaWorldSystems {

class Impl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAWORLDSYSTEMS_IMPL
public:
    Impl& operator=(Impl const&) = delete;
    Impl(Impl const&)            = delete;
    Impl()                       = delete;
#endif

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
    );
    /**
     * @symbol ?mInstance\@Impl\@VanillaWorldSystems\@\@2V?$weak_ptr\@VImpl\@VanillaWorldSystems\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class VanillaWorldSystems::Impl> mInstance;
};

}; // namespace VanillaWorldSystems
