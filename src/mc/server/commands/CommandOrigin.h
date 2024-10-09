#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/UUID.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class CommandOrigin {
public:
    mce::UUID mUuid; // this+0x8

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOrigin() = default;

    // vIndex: 1
    virtual std::string const& getRequestId() const = 0;

    // vIndex: 2
    virtual std::string getName() const = 0;

    // vIndex: 3
    virtual class BlockPos getBlockPosition() const = 0;

    // vIndex: 4
    virtual class Vec3 getWorldPosition() const = 0;

    // vIndex: 5
    virtual std::optional<class Vec2> getRotation() const = 0;

    // vIndex: 6
    virtual class Level* getLevel() const = 0;

    // vIndex: 7
    virtual class Dimension* getDimension() const = 0;

    // vIndex: 8
    virtual class Actor* getEntity() const = 0;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const = 0;

    // vIndex: 11
    virtual std::optional<class BlockPos> getCursorHitBlockPos() const;

    // vIndex: 12
    virtual std::optional<class Vec3> getCursorHitPos() const;

    // vIndex: 13
    virtual bool hasChatPerms() const;

    // vIndex: 14
    virtual bool hasTellPerms() const;

    // vIndex: 15
    virtual bool canUseAbility(::AbilitiesIndex ability) const;

    // vIndex: 16
    virtual bool isWorldBuilder() const;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 20
    virtual ::SubClientId getSourceSubId() const;

    // vIndex: 21
    virtual class CommandOrigin const& getOutputReceiver() const;

    // vIndex: 22
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const = 0;

    // vIndex: 24
    virtual struct CommandOriginData toCommandOriginData() const;

    // vIndex: 25
    virtual class mce::UUID const& getUUID() const;

    // vIndex: 26
    virtual void handleCommandOutputCallback(int, std::string&&) const;

    // vIndex: 27
    virtual void updateValues();

    // vIndex: 28
    virtual class Vec3 const getExecutePosition(int version, class CommandPositionFloat const& commandPosition) const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const = 0;

    // vIndex: 31
    virtual void _setUUID(class mce::UUID const& uuid);

    MCAPI CommandOrigin();

    MCAPI std::unique_ptr<class CommandArea> getAreaAt(class BlockPos const& pos, int commandVersion) const;

    MCAPI std::unique_ptr<class CommandArea>
    getAreaAt(class BlockPos const& min, class BlockPos const& max, int commandVersion, bool allowUnloadedChunks) const;

    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(class BlockPos const& pos, int commandVersion) const;

    MCAPI std::unique_ptr<class CommandArea> getAreaAtWithBuffer(
        class BlockPos const& min,
        class BlockPos const& max,
        int                   commandVersion,
        bool                  allowUnloadedChunks
    ) const;

    MCAPI static std::unique_ptr<class CommandOrigin> fromCommandOriginData(
        struct CommandOriginData const&                     data,
        class Bedrock::NonOwnerPointer<class ILevel> const& level,
        class NetworkIdentifier const&                      sourceId,
        ::SubClientId                                       sourceSubId
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class NetworkIdentifier sUnknownSource;

    // NOLINTEND
};
