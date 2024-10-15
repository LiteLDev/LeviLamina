#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class BlockCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    BlockCommandOrigin& operator=(BlockCommandOrigin const&);
    BlockCommandOrigin(BlockCommandOrigin const&);
    BlockCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockCommandOrigin();

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

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

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

    MCAPI BlockCommandOrigin(class BlockSource& region, class BlockPos const& pos);

    MCAPI BlockCommandOrigin(
        class Level&          level,
        DimensionType         dimensionType,
        std::string const&    name,
        class BlockPos const& pos
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI std::string _getName(class BlockSource& region) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void*
    ctor$(class Level& level, DimensionType dimensionType, std::string const& name, class BlockPos const& pos);

    MCAPI void dtor$();

    MCAPI class BaseCommandBlock* _getBaseCommandBlock$(class BlockSource& region) const;

    MCAPI class CommandBlockActor* _getBlockEntity$(class BlockSource& region) const;

    MCAPI bool canUseCommandsWithoutCheatsEnabled$() const;

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class BlockPos getBlockPosition$() const;

    MCAPI class Dimension* getDimension$() const;

    MCAPI class Actor* getEntity$() const;

    MCAPI class Level* getLevel$() const;

    MCAPI std::string getName$() const;

    MCAPI ::CommandOriginType getOriginType$() const;

    MCAPI ::CommandPermissionLevel getPermissionsLevel$() const;

    MCAPI std::string const& getRequestId$() const;

    MCAPI std::optional<class Vec2> getRotation$() const;

    MCAPI class Vec3 getWorldPosition$() const;

    MCAPI bool isSelectorExpansionAllowed$() const;

    MCAPI bool isValid$() const;

    MCAPI class CompoundTag serialize$() const;

    // NOLINTEND
};
