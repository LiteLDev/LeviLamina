#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace CodeBuilder {

class IClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IClient& operator=(IClient const&) = delete;
    IClient(IClient const&)            = delete;
    IClient()                          = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IClient@CodeBuilder@@UEAA@XZ
    MCVAPI ~IClient();

    // NOLINTEND
};

}; // namespace CodeBuilder
