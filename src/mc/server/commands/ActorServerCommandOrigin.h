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
    // vIndex: 0
    virtual ~ActorServerCommandOrigin() = default;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    MCAPI struct ActorUniqueID getTargetOther() const;

    MCAPI void setTargetOther(struct ActorUniqueID);

    // NOLINTEND
};
