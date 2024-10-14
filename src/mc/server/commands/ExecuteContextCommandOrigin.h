#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExecuteContextCommandOrigin() = default;

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

    MCAPI ExecuteContextCommandOrigin(
        struct ActorUniqueID             executionEntity,
        class Vec3 const&                position,
        std::optional<class Vec2> const& rotation,
        struct ActorUniqueID             rotationActor,
        struct ActorUniqueID             positionActor,
        ::ActorLocation                  anchor,
        DimensionType                    dimensionType,
        class Level&                     level,
        int                              version
    );

    MCAPI class Actor const* getPositionEntity();

    MCAPI void setDimension(DimensionType const& dimensionType);

    MCAPI void setDimension(class Dimension const& dimension);

    MCAPI void setExecutionEntity(class Actor const& entity);

    MCAPI void setPosition(class Vec3 const& position);

    MCAPI void setPositionEntity(class Actor const& entity);

    MCAPI void setRotation(class Vec2 const& rotation);

    MCAPI void setRotationEntity(class Actor const& entity);

    MCAPI static std::unique_ptr<class ExecuteContextCommandOrigin>
    load(class CompoundTag const& tag, class ServerLevel& level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class BlockPos getBlockPosition$() const;

    MCAPI class Dimension* getDimension$() const;

    MCAPI class Actor* getEntity$() const;

    MCAPI class Vec3 const getExecutePosition$(int version, class CommandPositionFloat const& commandPosition) const;

    MCAPI class Level* getLevel$() const;

    MCAPI std::string getName$() const;

    MCAPI ::CommandOriginType getOriginType$() const;

    MCAPI ::CommandPermissionLevel getPermissionsLevel$() const;

    MCAPI std::string const& getRequestId$() const;

    MCAPI std::optional<class Vec2> getRotation$() const;

    MCAPI class Vec3 getWorldPosition$() const;

    MCAPI bool isValid$() const;

    MCAPI class CompoundTag serialize$() const;

    MCAPI void updateValues$();

    // NOLINTEND
};
