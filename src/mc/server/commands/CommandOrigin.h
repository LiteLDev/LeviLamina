#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/mce/UUID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class CommandOrigin {
public:
    mce::UUID mUuid; // this+0x8

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CommandOrigin@@UEAA@XZ
    virtual ~CommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@ActorCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const = 0;

    // vIndex: 2, symbol:
    // ?getName@ActorCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const = 0;

    // vIndex: 3, symbol: ?getBlockPosition@ActorCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const = 0;

    // vIndex: 4, symbol: ?getWorldPosition@ActorCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const = 0;

    // vIndex: 5, symbol: ?getRotation@ActorCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const = 0;

    // vIndex: 6, symbol: ?getLevel@ActorCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const = 0;

    // vIndex: 7, symbol: ?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const = 0;

    // vIndex: 8, symbol: ?getEntity@ActorCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const = 0;

    // vIndex: 9, symbol: ?getPermissionsLevel@ActorCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

    // vIndex: 10, symbol:
    // ?clone@ActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const = 0;

    // vIndex: 11, symbol: ?getCursorHitBlockPos@CommandOrigin@@UEBA?AV?$optional@VBlockPos@@@std@@XZ
    virtual std::optional<class BlockPos> getCursorHitBlockPos() const;

    // vIndex: 12, symbol: ?getCursorHitPos@CommandOrigin@@UEBA?AV?$optional@VVec3@@@std@@XZ
    virtual std::optional<class Vec3> getCursorHitPos() const;

    // vIndex: 13, symbol: ?hasChatPerms@CommandOrigin@@UEBA_NXZ
    virtual bool hasChatPerms() const;

    // vIndex: 14, symbol: ?hasTellPerms@CommandOrigin@@UEBA_NXZ
    virtual bool hasTellPerms() const;

    // vIndex: 15, symbol: ?canUseAbility@CommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
    virtual bool canUseAbility(::AbilitiesIndex ability) const;

    // vIndex: 16, symbol: ?isWorldBuilder@CommandOrigin@@UEBA_NXZ
    virtual bool isWorldBuilder() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@CommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@CommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19, symbol: ?getSourceId@CommandOrigin@@UEBAAEBVNetworkIdentifier@@XZ
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 20, symbol: ?getSourceSubId@CommandOrigin@@UEBA?AW4SubClientId@@XZ
    virtual ::SubClientId getSourceSubId() const;

    // vIndex: 21, symbol: ?getOutputReceiver@CommandOrigin@@UEBAAEBV1@XZ
    virtual class CommandOrigin const& getOutputReceiver() const;

    // vIndex: 22, symbol: ?getIdentity@CommandOrigin@@UEBA?AUCommandOriginIdentity@@XZ
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23, symbol: ?getOriginType@ActorCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const = 0;

    // vIndex: 24, symbol: ?toCommandOriginData@CommandOrigin@@UEBA?AUCommandOriginData@@XZ
    virtual struct CommandOriginData toCommandOriginData() const;

    // vIndex: 25, symbol: ?getUUID@CommandOrigin@@UEBAAEBVUUID@mce@@XZ
    virtual class mce::UUID const& getUUID() const;

    // vIndex: 26, symbol:
    // ?handleCommandOutputCallback@CommandOrigin@@UEBAXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@@Z
    virtual void handleCommandOutputCallback(int, std::string&&, class Json::Value&&) const;

    // vIndex: 27, symbol: ?updateValues@CommandOrigin@@UEAAXXZ
    virtual void updateValues();

    // vIndex: 28, symbol: ?getExecutePosition@CommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
    virtual class Vec3 const getExecutePosition(int version, class CommandPositionFloat const& commandPosition) const;

    // vIndex: 29, symbol: ?serialize@CommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@ActorCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const = 0;

    // vIndex: 31, symbol: ?_setUUID@CommandOrigin@@MEAAXAEBVUUID@mce@@@Z
    virtual void _setUUID(class mce::UUID const& uuid);

    // symbol: ??0CommandOrigin@@QEAA@XZ
    MCAPI CommandOrigin();

    // symbol:
    // ?getAreaAt@CommandOrigin@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H@Z
    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const& pos, int commandVersion) const;

    // symbol:
    // ?getAreaAt@CommandOrigin@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N@Z
    MCAPI std::unique_ptr<class CommandArea>
    getAreaAt(class BlockPos const& min, class BlockPos const& max, int commandVersion, bool allowUnloadedChunks) const;

    // symbol:
    // ?getAreaAtWithBuffer@CommandOrigin@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@H@Z
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const& pos, int commandVersion) const;

    // symbol:
    // ?getAreaAtWithBuffer@CommandOrigin@@QEBA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVBlockPos@@0H_N@Z
    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(
        class BlockPos const& min,
        class BlockPos const& max,
        int                   commandVersion,
        bool                  allowUnloadedChunks
    ) const;

    // symbol:
    // ?fromCommandOriginData@CommandOrigin@@SA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBUCommandOriginData@@AEBV?$NonOwnerPointer@VILevel@@@Bedrock@@AEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI static std::unique_ptr<class CommandOrigin> fromCommandOriginData(
        struct CommandOriginData const&                     data,
        class Bedrock::NonOwnerPointer<class ILevel> const& level,
        class NetworkIdentifier const&                      sourceId,
        ::SubClientId                                       sourceSubId
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?sUnknownSource@CommandOrigin@@1VNetworkIdentifier@@A
    MCAPI static class NetworkIdentifier sUnknownSource;

    // NOLINTEND
};
