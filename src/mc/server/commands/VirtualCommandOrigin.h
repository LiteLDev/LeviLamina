#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~VirtualCommandOrigin() = default;

    // vIndex: 1
    virtual std::string const& getRequestId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 3
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6
    virtual class Level* getLevel() const;

    // vIndex: 7
    virtual class Dimension* getDimension() const;

    // vIndex: 8
    virtual class Actor* getEntity() const;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 13
    virtual bool hasChatPerms() const;

    // vIndex: 14
    virtual bool hasTellPerms() const;

    // vIndex: 15
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 21
    virtual class CommandOrigin const& getOutputReceiver() const;

    // vIndex: 22
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 27
    virtual void updateValues();

    // vIndex: 28
    virtual class Vec3 const getExecutePosition(int version, class CommandPositionFloat const& commandPosition) const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const;

    MCAPI VirtualCommandOrigin(
        class CommandOrigin const&        outputReceiver,
        class Actor&                      entity,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    MCAPI VirtualCommandOrigin(
        class CommandOrigin const&        outputReceiver,
        class CommandOrigin const&        source,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    MCAPI VirtualCommandOrigin(
        std::unique_ptr<class CommandOrigin> outputReceiver,
        std::unique_ptr<class CommandOrigin> source,
        class CommandPositionFloat const&    commandPosition,
        int                                  version
    );

    MCAPI class CommandOrigin* getOrigin() const;

    MCAPI static std::unique_ptr<class VirtualCommandOrigin>
    load(class CompoundTag const& tag, class ServerLevel& level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class CommandOrigin const&        outputReceiver,
        class CommandOrigin const&        source,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    MCAPI void* ctor$(
        std::unique_ptr<class CommandOrigin> outputReceiver,
        std::unique_ptr<class CommandOrigin> source,
        class CommandPositionFloat const&    commandPosition,
        int                                  version
    );

    MCAPI void* ctor$(
        class CommandOrigin const&        outputReceiver,
        class Actor&                      entity,
        class CommandPositionFloat const& commandPosition,
        int                               version
    );

    MCAPI bool canUseAbility$(::AbilitiesIndex abilityIndex) const;

    MCAPI bool canUseCommandsWithoutCheatsEnabled$() const;

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class BlockPos getBlockPosition$() const;

    MCAPI class Dimension* getDimension$() const;

    MCAPI class Actor* getEntity$() const;

    MCAPI class Vec3 const getExecutePosition$(int version, class CommandPositionFloat const& commandPosition) const;

    MCAPI struct CommandOriginIdentity getIdentity$() const;

    MCAPI class Level* getLevel$() const;

    MCAPI std::string getName$() const;

    MCAPI ::CommandOriginType getOriginType$() const;

    MCAPI class CommandOrigin const& getOutputReceiver$() const;

    MCAPI ::CommandPermissionLevel getPermissionsLevel$() const;

    MCAPI std::string const& getRequestId$() const;

    MCAPI std::optional<class Vec2> getRotation$() const;

    MCAPI class NetworkIdentifier const& getSourceId$() const;

    MCAPI class Vec3 getWorldPosition$() const;

    MCAPI bool hasChatPerms$() const;

    MCAPI bool hasTellPerms$() const;

    MCAPI bool isSelectorExpansionAllowed$() const;

    MCAPI bool isValid$() const;

    MCAPI class CompoundTag serialize$() const;

    MCAPI void updateValues$();

    // NOLINTEND
};
