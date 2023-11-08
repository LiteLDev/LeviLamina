#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Social {

class MultiplayerServiceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    MultiplayerServiceManager& operator=(MultiplayerServiceManager const&);
    MultiplayerServiceManager(MultiplayerServiceManager const&);
    MultiplayerServiceManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MultiplayerServiceManager@Social@@UEAA@XZ
    virtual ~MultiplayerServiceManager() = default;

    // NOLINTEND
};

}; // namespace Social
