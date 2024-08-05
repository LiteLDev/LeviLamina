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
MCAPI class PackCapabilityRegistry createRegistry(
    class Bedrock::NonOwnerPointer<class IAdvancedGraphicsOptions>,
    std::optional<bool>,
    class PackCapabilityRegistry
);
// NOLINTEND

}; // namespace PackCapabilities::Detail
