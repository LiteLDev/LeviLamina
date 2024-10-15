#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/commands/BlockCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~MinecartBlockCommandOrigin() = default;

    // vIndex: 3
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 8
    virtual class Actor* getEntity() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const;

    // vIndex: 32
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource& region) const;

    // vIndex: 33
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource& region) const;

    MCAPI MinecartBlockCommandOrigin(class BlockSource& region, struct ActorUniqueID const& minecartId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class BlockSource& region, struct ActorUniqueID const& minecartId);

    MCAPI class BaseCommandBlock* _getBaseCommandBlock$(class BlockSource& region) const;

    MCAPI class CommandBlockActor* _getBlockEntity$(class BlockSource& region) const;

    MCAPI bool canUseCommandsWithoutCheatsEnabled$() const;

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class BlockPos getBlockPosition$() const;

    MCAPI class Actor* getEntity$() const;

    MCAPI ::CommandOriginType getOriginType$() const;

    MCAPI std::optional<class Vec2> getRotation$() const;

    MCAPI class Vec3 getWorldPosition$() const;

    MCAPI bool isValid$() const;

    MCAPI class CompoundTag serialize$() const;

    // NOLINTEND
};
