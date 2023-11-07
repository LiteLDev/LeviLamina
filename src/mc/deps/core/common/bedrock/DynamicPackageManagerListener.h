#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Bedrock::DynamicPackage {

class DynamicPackageManagerListener : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    DynamicPackageManagerListener& operator=(DynamicPackageManagerListener const&);
    DynamicPackageManagerListener(DynamicPackageManagerListener const&);
    DynamicPackageManagerListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DynamicPackageManagerListener@DynamicPackage@Bedrock@@UEAA@XZ
    virtual ~DynamicPackageManagerListener() = default;

    // NOLINTEND
};

}; // namespace Bedrock::DynamicPackage
