#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Bedrock::Http {

class DispatcherInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    DispatcherInterface& operator=(DispatcherInterface const&);
    DispatcherInterface(DispatcherInterface const&);
    DispatcherInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DispatcherInterface@Http@@@UEAA@XZ
    virtual ~DispatcherInterface();

    // NOLINTEND
};

}; // namespace Bedrock::Http
