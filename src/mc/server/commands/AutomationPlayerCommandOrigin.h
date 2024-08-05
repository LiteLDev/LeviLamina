#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {
public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin& operator=(AutomationPlayerCommandOrigin const&);
    AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin const&);
    AutomationPlayerCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutomationPlayerCommandOrigin() = default;

    // vIndex: 1
    virtual std::string const& getRequestId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 19
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 24
    virtual struct CommandOriginData toCommandOriginData() const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const;

    MCAPI AutomationPlayerCommandOrigin(std::string const& requestId, class Player& origin);

    MCAPI
    AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level&, std::string const&, class NetworkIdentifier const&);

    // NOLINTEND
};
