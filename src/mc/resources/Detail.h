#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class PackCapabilityRegistry;
// clang-format on

namespace PackCapabilities::Detail {
// NOLINTBEGIN
// symbol:
// ?createRegistry@Detail@PackCapabilities@@YA?AVPackCapabilityRegistry@@V?$NonOwnerPointer@VIAdvancedGraphicsOptions@@@Bedrock@@V?$optional@_N@std@@V3@@Z
MCAPI class PackCapabilityRegistry createRegistry(
    class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>,
    std::optional<bool>,
    class PackCapabilityRegistry
);
// NOLINTEND

}; // namespace PackCapabilities::Detail
