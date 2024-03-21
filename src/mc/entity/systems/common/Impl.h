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
// clang-format on

namespace VanillaWorldSystems {

class Impl {
public:
    // prevent constructor by default
    Impl& operator=(Impl const&);
    Impl(Impl const&);
    Impl();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0Impl@VanillaWorldSystems@@QEAA@AEBV?$NonOwnerPointer@VLevel@@@Bedrock@@AEBVExperiments@@AEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI Impl(
        class Bedrock::NonOwnerPointer<class Level> const&,
        class Experiments const&,
        class BaseGameVersion const&,
        class ItemRegistryRef
    );

    // symbol: ?mInstance@Impl@VanillaWorldSystems@@2V?$weak_ptr@VImpl@VanillaWorldSystems@@@std@@A
    MCAPI static std::weak_ptr<class VanillaWorldSystems::Impl> mInstance;

    // NOLINTEND
};

}; // namespace VanillaWorldSystems
