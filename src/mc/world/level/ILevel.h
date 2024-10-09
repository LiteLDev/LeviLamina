#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ILevel : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ILevel& operator=(ILevel const&);
    ILevel(ILevel const&);
    ILevel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevel();

    MCVAPI class Level* asLevel();

    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel();

    MCVAPI class TradeTables* getTradeTables();

    MCAPI void addParticleEffect(class HashedString const& effect, class Vec3 const& emitterPosition);

    MCAPI class MapItemSavedData&
    createMapSavedData(struct ActorUniqueID const& uuid, class BlockPos const& origin, DimensionType dimension);

    // NOLINTEND
};
