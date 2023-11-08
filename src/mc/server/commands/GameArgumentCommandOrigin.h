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

class GameArgumentCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    GameArgumentCommandOrigin& operator=(GameArgumentCommandOrigin const&);
    GameArgumentCommandOrigin(GameArgumentCommandOrigin const&);
    GameArgumentCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameArgumentCommandOrigin@@UEAA@XZ
    virtual ~GameArgumentCommandOrigin() = default;

    // NOLINTEND
};
