#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/ActorServerCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class GameDirectorEntityServerCommandOrigin : public ::ActorServerCommandOrigin {
public:
    // prevent constructor by default
    GameDirectorEntityServerCommandOrigin& operator=(GameDirectorEntityServerCommandOrigin const&);
    GameDirectorEntityServerCommandOrigin(GameDirectorEntityServerCommandOrigin const&);
    GameDirectorEntityServerCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameDirectorEntityServerCommandOrigin() = default;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    MCAPI explicit GameDirectorEntityServerCommandOrigin(class Actor& origin);

    // NOLINTEND
};
