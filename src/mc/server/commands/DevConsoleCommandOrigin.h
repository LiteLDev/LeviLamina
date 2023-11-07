#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class DevConsoleCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    DevConsoleCommandOrigin& operator=(DevConsoleCommandOrigin const&);
    DevConsoleCommandOrigin(DevConsoleCommandOrigin const&);
    DevConsoleCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DevConsoleCommandOrigin() = default;

    // NOLINTEND
};
