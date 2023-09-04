#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace CodeBuilder {

class IManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IManager& operator=(IManager const&) = delete;
    IManager(IManager const&)            = delete;
    IManager()                           = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IManager@CodeBuilder@@UEAA@XZ
    MCVAPI ~IManager();

    // NOLINTEND
};

}; // namespace CodeBuilder
