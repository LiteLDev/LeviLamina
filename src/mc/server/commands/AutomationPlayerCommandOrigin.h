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
namespace Json { class Value; }
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
    // vIndex: 0, symbol: __gen_??1AutomationPlayerCommandOrigin@@UEAA@XZ
    virtual ~AutomationPlayerCommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@AutomationPlayerCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@AutomationPlayerCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 10, symbol:
    // ?clone@AutomationPlayerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 19, symbol: ?getSourceId@AutomationPlayerCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 23, symbol: ?getOriginType@AutomationPlayerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 24, symbol: ?toCommandOriginData@AutomationPlayerCommandOrigin@@UEBA?AUCommandOriginData@@XZ
    virtual struct CommandOriginData toCommandOriginData() const;

    // vIndex: 29, symbol: ?serialize@AutomationPlayerCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@AutomationPlayerCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol:
    // ??0AutomationPlayerCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVPlayer@@@Z
    MCAPI AutomationPlayerCommandOrigin(std::string const& requestId, class Player& origin);

    // symbol:
    // ??0AutomationPlayerCommandOrigin@@QEAA@UActorUniqueID@@AEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVNetworkIdentifier@@@Z
    MCAPI
    AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level&, std::string const&, class NetworkIdentifier const&);

    // NOLINTEND
};
