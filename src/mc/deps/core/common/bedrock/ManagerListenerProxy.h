#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/DynamicPackageManagerListener.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DynamicPackage { class DynamicPackageManagerListener; }
// clang-format on

namespace DynamicPackageControl {

class ManagerListenerProxy : public ::Bedrock::DynamicPackage::DynamicPackageManagerListener {
public:
    // prevent constructor by default
    ManagerListenerProxy& operator=(ManagerListenerProxy const&);
    ManagerListenerProxy(ManagerListenerProxy const&);
    ManagerListenerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ManagerListenerProxy@DynamicPackageControl@@UEAA@XZ
    virtual ~ManagerListenerProxy() = default;

    // NOLINTEND
};

}; // namespace DynamicPackageControl
