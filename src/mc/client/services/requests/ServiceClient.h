#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ServiceClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ServiceClient& operator=(ServiceClient const&);
    ServiceClient(ServiceClient const&);
    ServiceClient();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ServiceClient() = default;

    // NOLINTEND
};
