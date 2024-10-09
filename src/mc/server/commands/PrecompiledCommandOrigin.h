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

class PrecompiledCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    PrecompiledCommandOrigin& operator=(PrecompiledCommandOrigin const&);
    PrecompiledCommandOrigin(PrecompiledCommandOrigin const&);
    PrecompiledCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrecompiledCommandOrigin() = default;

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

    // vIndex: 16
    virtual bool isWorldBuilder() const;

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

    // NOLINTEND
};
