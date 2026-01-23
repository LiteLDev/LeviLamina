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
    LLNDAPI std::string getLocaleCode() const;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandOrigin() = default;

    virtual ::std::string const& getRequestId() const = 0;

    virtual ::std::string getName() const = 0;

    virtual ::BlockPos getBlockPosition() const = 0;

    virtual ::Vec3 getWorldPosition() const = 0;

    virtual ::std::optional<::Vec2> getRotation() const = 0;

    virtual ::Level* getLevel() const = 0;

    virtual ::Dimension* getDimension() const = 0;

    virtual ::Actor* getEntity() const = 0;

    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const = 0;

    virtual ::std::optional<::BlockPos> getCursorHitBlockPos() const;

    virtual ::std::optional<::Vec3> getCursorHitPos() const;

    virtual bool hasChatPerms() const;

    virtual bool hasTellPerms() const;

    virtual bool canUseAbility(::AbilitiesIndex ability) const;

    virtual bool isWorldBuilder() const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::SubClientId getSourceSubId() const;

    virtual ::CommandOrigin const& getOutputReceiver() const;

    virtual ::CommandOriginIdentity getIdentity() const;

    virtual ::CommandOriginType getOriginType() const = 0;

    virtual ::CommandOriginData toCommandOriginData() const;

    virtual ::mce::UUID const& getUUID() const;

    virtual void handleCommandOutputCallback(int, ::std::string&&) const;

    virtual void updateValues();

    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const = 0;

    virtual bool requiresValidLevel() const;

    virtual void _setUUID(::mce::UUID const& uuid);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CommandArea> getAreaAt(::BlockPos const& pos, int commandVersion) const;

    MCAPI ::std::unique_ptr<::CommandArea>
    getAreaAt(::BlockPos const& min, ::BlockPos const& max, int commandVersion, bool allowUnloadedChunks) const;

    MCAPI ::std::unique_ptr<::CommandArea> getAreaAtWithBuffer(
        ::BlockPos const& min,
        ::BlockPos const& max,
        int               commandVersion,
        bool              allowUnloadedChunks
    ) const;
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

#ifdef LL_PLAT_S
    MCFOLD bool $canUseAbility(::AbilitiesIndex ability) const;
#endif

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

    MCAPI void $_setUUID(::mce::UUID const& uuid);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
