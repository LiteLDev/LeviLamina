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
    // vIndex: 0, symbol: ??1ILevel@@UEAA@XZ
    virtual ~ILevel();

    // symbol: ?asLevel@ILevel@@UEAAPEAVLevel@@XZ
    MCVAPI class Level* asLevel();

    // symbol: ?asMultiPlayerLevel@ILevel@@UEAAPEAVMultiPlayerLevel@@XZ
    MCVAPI class MultiPlayerLevel* asMultiPlayerLevel();

    // symbol: ?getTradeTables@ILevel@@UEAAPEAVTradeTables@@XZ
    MCVAPI class TradeTables* getTradeTables();

    // symbol: ?addParticleEffect@ILevel@@QEAAXAEBVHashedString@@AEBVVec3@@@Z
    MCAPI void addParticleEffect(class HashedString const&, class Vec3 const&);

    // symbol:
    // ?createMapSavedData@ILevel@@QEAAAEAVMapItemSavedData@@AEBUActorUniqueID@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI class MapItemSavedData& createMapSavedData(struct ActorUniqueID const&, class BlockPos const&, DimensionType);

    // NOLINTEND
};
