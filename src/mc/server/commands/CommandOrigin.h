#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/crypto/random/Random.h"
#include "mc/platform/UUID.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CommandArea;
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class ILevel;
class Level;
class NetworkIdentifier;
class Vec2;
class Vec3;
struct CommandOriginData;
struct CommandOriginIdentity;
// clang-format on

class CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    // NOLINTEND

public:
    CommandOrigin() { mUUID = Crypto::Random::generateUUID(); }

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOrigin() = default;

    // vIndex: 1
    virtual ::std::string const& getRequestId() const = 0;

    // vIndex: 2
    virtual ::std::string getName() const = 0;

    // vIndex: 3
    virtual ::BlockPos getBlockPosition() const = 0;

    // vIndex: 4
    virtual ::Vec3 getWorldPosition() const = 0;

    // vIndex: 5
    virtual ::std::optional<::Vec2> getRotation() const = 0;

    // vIndex: 6
    virtual ::Level* getLevel() const = 0;

    // vIndex: 7
    virtual ::Dimension* getDimension() const = 0;

    // vIndex: 8
    virtual ::Actor* getEntity() const = 0;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const = 0;

    // vIndex: 11
    virtual ::std::optional<::BlockPos> getCursorHitBlockPos() const;

    // vIndex: 12
    virtual ::std::optional<::Vec3> getCursorHitPos() const;

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
    virtual ::NetworkIdentifier const& getSourceId() const;

    // vIndex: 20
    virtual ::SubClientId getSourceSubId() const;

    // vIndex: 21
    virtual ::CommandOrigin const& getOutputReceiver() const;

    // vIndex: 22
    virtual ::CommandOriginIdentity getIdentity() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const = 0;

    // vIndex: 24
    virtual ::CommandOriginData toCommandOriginData() const;

    // vIndex: 25
    virtual ::mce::UUID const& getUUID() const;

    // vIndex: 26
    virtual void handleCommandOutputCallback(int, ::std::string&&) const;

    // vIndex: 27
    virtual void updateValues();

    // vIndex: 28
    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    // vIndex: 29
    virtual ::CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const = 0;

    // vIndex: 31
    virtual bool requiresValidLevel() const;

    // vIndex: 32
    virtual void _setUUID(::mce::UUID const& uuid);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CommandArea> getAreaAt(::BlockPos const& pos, int commandVersion) const;

    MCAPI ::std::unique_ptr<::CommandArea>
    getAreaAt(::BlockPos const& min, ::BlockPos const& max, int commandVersion, bool allowUnloadedChunks) const;

    MCAPI ::std::unique_ptr<::CommandArea>
    getAreaAtWithBuffer(::BlockPos const& min, ::BlockPos const& max, int commandVersion, bool allowUnloadedChunks)
        const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CommandOrigin> fromCommandOriginData(
        ::CommandOriginData const&                  data,
        ::Bedrock::NonOwnerPointer<::ILevel> const& level,
        ::NetworkIdentifier const&                  sourceId,
        ::SubClientId                               sourceSubId
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::NetworkIdentifier& sUnknownSource();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::optional<::BlockPos> $getCursorHitBlockPos() const;

    MCFOLD ::std::optional<::Vec3> $getCursorHitPos() const;

    MCAPI bool $hasChatPerms() const;

    MCAPI bool $hasTellPerms() const;

    MCFOLD bool $canUseAbility(::AbilitiesIndex ability) const;

    MCAPI bool $isWorldBuilder() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCAPI bool $isSelectorExpansionAllowed() const;

    MCAPI ::NetworkIdentifier const& $getSourceId() const;

    MCFOLD ::SubClientId $getSourceSubId() const;

    MCFOLD ::CommandOrigin const& $getOutputReceiver() const;

    MCAPI ::CommandOriginIdentity $getIdentity() const;

    MCAPI ::CommandOriginData $toCommandOriginData() const;

    MCFOLD ::mce::UUID const& $getUUID() const;

    MCFOLD void $handleCommandOutputCallback(int, ::std::string&&) const;

    MCFOLD void $updateValues();

    MCAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCAPI ::CompoundTag $serialize() const;

    MCFOLD bool $requiresValidLevel() const;

    MCFOLD void $_setUUID(::mce::UUID const& uuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
