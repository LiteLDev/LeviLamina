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
    // vIndex: 0, symbol: __gen_??1SpreadPlayersCommand@@UEAA@XZ
    virtual ~SpreadPlayersCommand() = default;

    // vIndex: 2, symbol: ?execute@SpreadPlayersCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol:
    // ?createInitialPositions@SpreadPlayersCommand@@SA?AV?$vector@VVec2@@V?$allocator@VVec2@@@std@@@std@@AEAVRandom@@HAEBVVec2@@1@Z
    MCAPI static std::vector<class Vec2>
    createInitialPositions(class Random&, int, class Vec2 const&, class Vec2 const&);

    // symbol: ?isDangerousSpawn@SpreadPlayersCommand@@SA_NAEAVBlockSource@@AEBVBlockPos@@FH@Z
    MCAPI static bool isDangerousSpawn(class BlockSource&, class BlockPos const&, short, int);

    // symbol: ?setup@SpreadPlayersCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // symbol:
    // ?spreadPositions@SpreadPlayersCommand@@SA_NAEAVCommandOutput@@AEAVRandom@@AEBVCommandOrigin@@AEBVVec2@@M33AEAV?$vector@VVec2@@V?$allocator@VVec2@@@std@@@std@@AEAV?$map@VChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@U?$less@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@std@@@3@@7@H@Z
    MCAPI static bool spreadPositions(
        class CommandOutput&,
        class Random&,
        class CommandOrigin const&,
        class Vec2 const&,
        float,
        class Vec2 const&,
        class Vec2 const&,
        std::vector<class Vec2>&,
        std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&,
        int
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_checkPositionValid@SpreadPlayersCommand@@CA_NAEBVCommandOrigin@@AEBVBlockPos@@AEAV?$map@VChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@U?$less@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@std@@@3@@std@@H@Z
    MCAPI static bool _checkPositionValid(
        class CommandOrigin const&,
        class BlockPos const&,
        std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&,
        int
    );

    // symbol: ?_getTeleportHeight@SpreadPlayersCommand@@CAFAEAVBlockSource@@HH@Z
    MCAPI static short _getTeleportHeight(class BlockSource&, int, int);

    // symbol:
    // ?_setPlayerPositions@SpreadPlayersCommand@@CAMAEAV?$CommandSelectorResults@VActor@@@@AEAV?$vector@VVec2@@V?$allocator@VVec2@@@std@@@std@@AEAV?$map@VChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@U?$less@VChunkPos@@@3@V?$allocator@U?$pair@$$CBVChunkPos@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@@std@@@3@@4@@Z
    MCAPI static float
    _setPlayerPositions(class CommandSelectorResults<class Actor>&, std::vector<class Vec2>&, std::map<class ChunkPos, std::unique_ptr<class CommandArea>>&);

    // symbol:
    // ?_spreadEntities@SpreadPlayersCommand@@CA_NAEAVCommandOutput@@AEAV?$CommandSelectorResults@VActor@@@@AEBVCommandOrigin@@AEBVVec2@@MMH@Z
    MCAPI static bool _spreadEntities(
        class CommandOutput&,
        class CommandSelectorResults<class Actor>&,
        class CommandOrigin const&,
        class Vec2 const&,
        float,
        float,
        int
    );

    // NOLINTEND
};
