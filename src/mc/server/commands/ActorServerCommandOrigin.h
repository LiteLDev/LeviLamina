#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/ActorCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ActorServerCommandOrigin : public ::ActorCommandOrigin {
public:
    // prevent constructor by default
    ActorServerCommandOrigin& operator=(ActorServerCommandOrigin const&);
    ActorServerCommandOrigin(ActorServerCommandOrigin const&);
    ActorServerCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorServerCommandOrigin@@UEAA@XZ
    virtual ~ActorServerCommandOrigin() = default;

    // vIndex: 9, symbol: ?getPermissionsLevel@ActorServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@ActorServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@ActorServerCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@ActorServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@ActorServerCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // symbol: ?getTargetOther@ActorServerCommandOrigin@@QEBA?AUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID getTargetOther() const;

    // symbol: ?setTargetOther@ActorServerCommandOrigin@@QEAAXUActorUniqueID@@@Z
    MCAPI void setTargetOther(struct ActorUniqueID);

    // symbol:
    // ?load@ActorServerCommandOrigin@@SA?AV?$unique_ptr@VActorServerCommandOrigin@@U?$default_delete@VActorServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static std::unique_ptr<class ActorServerCommandOrigin> load(class CompoundTag const& tag, class Level& level);

    // NOLINTEND
};
