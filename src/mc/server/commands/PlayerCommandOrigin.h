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

class PlayerCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    PlayerCommandOrigin& operator=(PlayerCommandOrigin const&);
    PlayerCommandOrigin(PlayerCommandOrigin const&);
    PlayerCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerCommandOrigin@@UEAA@XZ
    virtual ~PlayerCommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@PlayerCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@PlayerCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@PlayerCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@PlayerCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@PlayerCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@PlayerCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@PlayerCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@PlayerCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@PlayerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@PlayerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 11, symbol: ?getCursorHitBlockPos@PlayerCommandOrigin@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getCursorHitBlockPos() const;

    // vIndex: 12, symbol: ?getCursorHitPos@PlayerCommandOrigin@@UEBA?AV?$optional@VVec3@@@std@@XZ
    virtual std::optional<class Vec3> getCursorHitPos() const;

    // vIndex: 15, symbol: ?canUseAbility@PlayerCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
    virtual bool canUseAbility(::AbilitiesIndex) const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@PlayerCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19, symbol: ?getSourceId@PlayerCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 20, symbol: ?getSourceSubId@PlayerCommandOrigin@@UEBA?AW4SubClientId@@XZ
    virtual ::SubClientId getSourceSubId() const;

    // vIndex: 22, symbol: ?getIdentity@PlayerCommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23, symbol: ?getOriginType@PlayerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@PlayerCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@PlayerCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0PlayerCommandOrigin@@QEAA@AEAVPlayer@@@Z
    MCAPI explicit PlayerCommandOrigin(class Player&);

    // NOLINTEND
};
