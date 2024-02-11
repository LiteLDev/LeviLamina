#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

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

class Level;

class ActorCommandOrigin : public ::CommandOrigin {
public:
    ActorUniqueID mEntityId;
    Level*        mLevel;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorCommandOrigin@@UEAA@XZ
    virtual ~ActorCommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@ActorCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@ActorCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@ActorCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@ActorCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@ActorCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@ActorCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@ActorCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@ActorCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@ActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@ActorCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@ActorCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@ActorCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@ActorCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0ActorCommandOrigin@@QEAA@AEAVActor@@@Z
    MCAPI explicit ActorCommandOrigin(class Actor& origin);

    // symbol:
    // ?load@ActorCommandOrigin@@SA?AV?$unique_ptr@VActorCommandOrigin@@U?$default_delete@VActorCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static std::unique_ptr<class ActorCommandOrigin> load(class CompoundTag const& tag, class Level& level);

    // NOLINTEND
};
