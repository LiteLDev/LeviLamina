#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"


class IdentityDefinition {
public:
    // IdentityDefinition inner types define
    enum class Type : uchar {
        Invalid    = 0x0,
        Player     = 0x1,
        Entity     = 0x2,
        FakePlayer = 0x3,
    };

    ScoreboardId       mScoreboardId;       // this+0x0
    bool               mIsHiddenFakePlayer; // this+0x10
    PlayerScoreboardId mPlayerId;           // this+0x18
    ActorUniqueID      mEntityId;           // this+0x20
    std::string        mPlayerName;         // this+0x28
    Type               mIdentityType;       // this+0x48

public:
    // prevent constructor by default
    IdentityDefinition();

public:
    // NOLINTBEGIN
    // symbol: ??0IdentityDefinition@@QEAA@$$QEAV0@@Z
    MCAPI IdentityDefinition(class IdentityDefinition&& o);

    // symbol: ??0IdentityDefinition@@QEAA@AEBV0@@Z
    MCAPI IdentityDefinition(class IdentityDefinition const& o);

    // symbol: ?getEntityId@IdentityDefinition@@QEBAAEBUActorUniqueID@@XZ
    MCAPI struct ActorUniqueID const& getEntityId() const;

    // symbol:
    // ?getFakePlayerName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFakePlayerName() const;

    // symbol: ?getIdentityType@IdentityDefinition@@QEBA?AW4Type@1@XZ
    MCAPI ::IdentityDefinition::Type getIdentityType() const;

    // symbol:
    // ?getName@IdentityDefinition@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$function@$$A6AAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorUniqueID@@@Z@3@@Z
    MCAPI std::string const& getName(std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver
    ) const;

    // symbol: ?getPlayerId@IdentityDefinition@@QEBAAEBUPlayerScoreboardId@@XZ
    MCAPI struct PlayerScoreboardId const& getPlayerId() const;

    // symbol: ?getScoreboardId@IdentityDefinition@@QEBAAEBUScoreboardId@@XZ
    MCAPI struct ScoreboardId const& getScoreboardId() const;

    // symbol: ?isEntityType@IdentityDefinition@@QEBA_NXZ
    MCAPI bool isEntityType() const;

    // symbol: ?isPlayerType@IdentityDefinition@@QEBA_NXZ
    MCAPI bool isPlayerType() const;

    // symbol: ?isValid@IdentityDefinition@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??4IdentityDefinition@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition&& o);

    // symbol: ??4IdentityDefinition@@QEAAAEAV0@AEBV0@@Z
    MCAPI class IdentityDefinition& operator=(class IdentityDefinition const& o);

    // symbol: ??1IdentityDefinition@@QEAA@XZ
    MCAPI ~IdentityDefinition();

    // symbol: ?Invalid@IdentityDefinition@@2V1@B
    MCAPI static class IdentityDefinition const Invalid;

    // NOLINTEND
};
