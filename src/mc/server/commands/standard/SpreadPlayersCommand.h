#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/level/Command.h"

class SpreadPlayersCommand : public ::Command {
public:
    // prevent constructor by default
    SpreadPlayersCommand& operator=(SpreadPlayersCommand const&);
    SpreadPlayersCommand(SpreadPlayersCommand const&);
    SpreadPlayersCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpreadPlayersCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static std::vector<class Vec2>
    createInitialPositions(class Random& random, int count, class Vec2 const& minPos, class Vec2 const& maxPos);

    MCAPI static bool
    isDangerousSpawn(class BlockSource& region, class BlockPos const&, short minHeight, int commandVersion);

    MCAPI static void setup(class CommandRegistry& registry);

    MCAPI static bool spreadPositions(
        class CommandOutput&       output,
        class Random&              random,
        class CommandOrigin const& origin,
        class Vec2 const&          center,
        float                      spreadDist,
        class Vec2 const&          minPos,
        class Vec2 const&          maxPos,
        std::vector<class Vec2>&   positions,
        std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&,
        int commandVersion
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _checkPositionValid(
        class CommandOrigin const& origin,
        class BlockPos const&,
        std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&,
        int commandVersion
    );

    MCAPI static short _getTeleportHeight(class BlockSource& region, int x, int z);

    MCAPI static float
    _setPlayerPositions(class CommandSelectorResults<class Actor>& entities, std::vector<class Vec2>& positions, std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&);

    MCAPI static bool _spreadEntities(
        class CommandOutput&                       output,
        class CommandSelectorResults<class Actor>& entities,
        class CommandOrigin const&                 origin,
        class Vec2 const&                          center,
        float                                      spreadDist,
        float                                      maxDistFromCenter,
        int                                        commandVersion
    );

    // NOLINTEND
};
