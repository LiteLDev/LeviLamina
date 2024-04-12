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

class VirtualCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    VirtualCommandOrigin& operator=(VirtualCommandOrigin const&);
    VirtualCommandOrigin(VirtualCommandOrigin const&);
    VirtualCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VirtualCommandOrigin@@UEAA@XZ
    virtual ~VirtualCommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@VirtualCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@VirtualCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@VirtualCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@VirtualCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@VirtualCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@VirtualCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@VirtualCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@VirtualCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@VirtualCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@VirtualCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 13, symbol: ?hasChatPerms@VirtualCommandOrigin@@UEBA_NXZ
    virtual bool hasChatPerms() const;

    // vIndex: 14, symbol: ?hasTellPerms@VirtualCommandOrigin@@UEBA_NXZ
    virtual bool hasTellPerms() const;

    // vIndex: 15, symbol: ?canUseAbility@VirtualCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@VirtualCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@VirtualCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19, symbol: ?getSourceId@VirtualCommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 21, symbol: ?getOutputReceiver@VirtualCommandOrigin@@UEBAAEBVCommandOrigin@@XZ
    virtual class CommandOrigin const& getOutputReceiver() const;

    // vIndex: 22, symbol: ?getIdentity@VirtualCommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23, symbol: ?getOriginType@VirtualCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 27, symbol: ?updateValues@VirtualCommandOrigin@@UEAAXXZ
    virtual void updateValues();

    // vIndex: 28, symbol: ?getExecutePosition@VirtualCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
    virtual class Vec3 const getExecutePosition(int version, class CommandPositionFloat const& commandPosition) const;

    // vIndex: 29, symbol: ?serialize@VirtualCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@VirtualCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@AEAVActor@@AEBVCommandPositionFloat@@H@Z
    MCAPI VirtualCommandOrigin(
        class CommandOrigin const&        outputReceiver,
        class Actor&                      entity,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    // symbol: ??0VirtualCommandOrigin@@QEAA@AEBVCommandOrigin@@0AEBVCommandPositionFloat@@H@Z
    MCAPI VirtualCommandOrigin(
        class CommandOrigin const&        outputReceiver,
        class CommandOrigin const&        source,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    // symbol:
    // ??0VirtualCommandOrigin@@QEAA@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@0AEBVCommandPositionFloat@@H@Z
    MCAPI VirtualCommandOrigin(
        std::unique_ptr<class CommandOrigin> outputReceiver,
        std::unique_ptr<class CommandOrigin> source,
        class CommandPositionFloat const&    commandPosition,
        int                                  version
    );

    // symbol: ?getOrigin@VirtualCommandOrigin@@QEBAPEAVCommandOrigin@@XZ
    MCAPI class CommandOrigin* getOrigin() const;

    // symbol:
    // ?load@VirtualCommandOrigin@@SA?AV?$unique_ptr@VVirtualCommandOrigin@@U?$default_delete@VVirtualCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
    MCAPI static std::unique_ptr<class VirtualCommandOrigin>
    load(class CompoundTag const& tag, class ServerLevel& level);

    // NOLINTEND
};
