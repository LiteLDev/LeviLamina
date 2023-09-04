#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Bedrock {

class IApplicationDataStores : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IApplicationDataStores inner types define
    enum class DataStores {};

public:
    // prevent constructor by default
    IApplicationDataStores& operator=(IApplicationDataStores const&) = delete;
    IApplicationDataStores(IApplicationDataStores const&)            = delete;
    IApplicationDataStores()                                         = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IApplicationDataStores@Bedrock@@UEAA@XZ
    MCVAPI ~IApplicationDataStores();

    // NOLINTEND
};

}; // namespace Bedrock
