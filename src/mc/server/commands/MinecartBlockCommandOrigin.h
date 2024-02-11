#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/BlockCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class MinecartBlockCommandOrigin : public ::BlockCommandOrigin {
public:
    // prevent constructor by default
    MinecartBlockCommandOrigin& operator=(MinecartBlockCommandOrigin const&);
    MinecartBlockCommandOrigin(MinecartBlockCommandOrigin const&);
    MinecartBlockCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecartBlockCommandOrigin@@UEAA@XZ
    virtual ~MinecartBlockCommandOrigin() = default;

    // vIndex: 3, symbol: ?getBlockPosition@MinecartBlockCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@MinecartBlockCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@MinecartBlockCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 8, symbol: ?getEntity@MinecartBlockCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 10, symbol:
    // ?clone@MinecartBlockCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@MinecartBlockCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 23, symbol: ?getOriginType@MinecartBlockCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@MinecartBlockCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@MinecartBlockCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 32, symbol:
    // ?_getBaseCommandBlock@MinecartBlockCommandOrigin@@MEBAPEAVBaseCommandBlock@@AEAVBlockSource@@@Z
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource& region) const;

    // vIndex: 33, symbol: ?_getBlockEntity@MinecartBlockCommandOrigin@@MEBAPEAVCommandBlockActor@@AEAVBlockSource@@@Z
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource& region) const;

    // symbol: ??0MinecartBlockCommandOrigin@@QEAA@AEAVBlockSource@@AEBUActorUniqueID@@@Z
    MCAPI MinecartBlockCommandOrigin(class BlockSource& region, struct ActorUniqueID const& minecartId);

    // symbol:
    // ?load@MinecartBlockCommandOrigin@@SA?AV?$unique_ptr@VMinecartBlockCommandOrigin@@U?$default_delete@VMinecartBlockCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin>
    load(class CompoundTag const& tag, class Level& level);

    // NOLINTEND
};
