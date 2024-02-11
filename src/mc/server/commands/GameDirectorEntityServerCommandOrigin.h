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
namespace Json { class Value; }
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
    // vIndex: 0, symbol: __gen_??1GameDirectorEntityServerCommandOrigin@@UEAA@XZ
    virtual ~GameDirectorEntityServerCommandOrigin() = default;

    // vIndex: 9, symbol: ?getPermissionsLevel@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@GameDirectorEntityServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@GameDirectorEntityServerCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@GameDirectorEntityServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // symbol: ??0GameDirectorEntityServerCommandOrigin@@QEAA@AEAVActor@@@Z
    MCAPI explicit GameDirectorEntityServerCommandOrigin(class Actor& origin);

    // symbol:
    // ?load@GameDirectorEntityServerCommandOrigin@@SA?AV?$unique_ptr@VGameDirectorEntityServerCommandOrigin@@U?$default_delete@VGameDirectorEntityServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static std::unique_ptr<class GameDirectorEntityServerCommandOrigin>
    load(class CompoundTag const& tag, class Level& level);

    // NOLINTEND
};
