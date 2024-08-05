#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/AutomaticID.h"

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

    MCAPI void addParticleEffect(class HashedString const&, class Vec3 const&);

    MCAPI class MapItemSavedData& createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType);

    // NOLINTEND
};
