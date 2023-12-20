#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/IPlayerTickProxy.h"

class PlayerTickProxy : public ::IPlayerTickProxy {
public:
    // prevent constructor by default
    PlayerTickProxy& operator=(PlayerTickProxy const&);
    PlayerTickProxy(PlayerTickProxy const&);
    PlayerTickProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlayerTickProxy@@UEAA@XZ
    virtual ~PlayerTickProxy() = default;

    // vIndex: 1, symbol: ?preReplicationTick@PlayerTickProxy@@UEAAXAEAVServerPlayer@@AEBUTick@@AEAVEntityContext@@@Z
    virtual void preReplicationTick(class ServerPlayer&, struct Tick const&, class EntityContext&);

    // vIndex: 2, symbol: ?playerTick@PlayerTickProxy@@UEAAXAEAVPlayer@@AEBUTick@@@Z
    virtual void playerTick(class Player&, struct Tick const&);

    // vIndex: 3, symbol: ?clearDimensionPlayerReplicationList@PlayerTickProxy@@UEAAXAEAVDimension@@@Z
    virtual void clearDimensionPlayerReplicationList(class Dimension&);

    // vIndex: 4, symbol: ?processDimensionPlayerReplication@PlayerTickProxy@@UEAAXAEAVDimension@@@Z
    virtual void processDimensionPlayerReplication(class Dimension&);

    // vIndex: 5, symbol: ?postReplicationtick@PlayerTickProxy@@UEAAXAEAVServerPlayer@@AEBUTick@@@Z
    virtual void postReplicationtick(class ServerPlayer&, struct Tick const&);

    // NOLINTEND
};
