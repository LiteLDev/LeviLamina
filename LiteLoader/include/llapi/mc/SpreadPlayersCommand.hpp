/**
 * @file  SpreadPlayersCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpreadPlayersCommand.
 *
 */
class SpreadPlayersCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPREADPLAYERSCOMMAND
public:
    class SpreadPlayersCommand& operator=(class SpreadPlayersCommand const &) = delete;
    SpreadPlayersCommand(class SpreadPlayersCommand const &) = delete;
    SpreadPlayersCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SpreadPlayersCommand();
    /**
     * @hash   -207562889
     * @vftbl  1
     * @symbol  ?execute\@SpreadPlayersCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   631384119
     * @symbol  ?createInitialPositions\@SpreadPlayersCommand\@\@SA?AV?$vector\@VVec2\@\@V?$allocator\@VVec2\@\@\@std\@\@\@std\@\@AEAVRandom\@\@HAEBVVec2\@\@1\@Z
     */
    MCAPI static std::vector<class Vec2> createInitialPositions(class Random &, int, class Vec2 const &, class Vec2 const &);
    /**
     * @hash   689606359
     * @symbol  ?isDangerousSpawn\@SpreadPlayersCommand\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@FH\@Z
     */
    MCAPI static bool isDangerousSpawn(class BlockSource &, class BlockPos const &, short, int);
    /**
     * @hash   1615143580
     * @symbol  ?setup\@SpreadPlayersCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);
    /**
     * @hash   1344825734
     * @symbol  ?spreadPositions\@SpreadPlayersCommand\@\@SA_NAEAVCommandOutput\@\@AEAVRandom\@\@AEBVCommandOrigin\@\@AEBVVec2\@\@M33AEAV?$vector\@VVec2\@\@V?$allocator\@VVec2\@\@\@std\@\@\@std\@\@AEAV?$map\@VChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@U?$less\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@7\@H\@Z
     */
    MCAPI static bool spreadPositions(class CommandOutput &, class Random &, class CommandOrigin const &, class Vec2 const &, float, class Vec2 const &, class Vec2 const &, std::vector<class Vec2> &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &, int);

//private:
    /**
     * @hash   1424657069
     * @symbol  ?_checkPositionValid\@SpreadPlayersCommand\@\@CA_NAEBVCommandOrigin\@\@AEBVBlockPos\@\@AEAV?$map\@VChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@U?$less\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@H\@Z
     */
    MCAPI static bool _checkPositionValid(class CommandOrigin const &, class BlockPos const &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &, int);
    /**
     * @hash   1363547779
     * @symbol  ?_getTeleportHeight\@SpreadPlayersCommand\@\@CAFAEAVBlockSource\@\@HH\@Z
     */
    MCAPI static short _getTeleportHeight(class BlockSource &, int, int);
    /**
     * @hash   435169847
     * @symbol  ?_setPlayerPositions\@SpreadPlayersCommand\@\@CAMAEAV?$CommandSelectorResults\@VActor\@\@\@\@AEAV?$vector\@VVec2\@\@V?$allocator\@VVec2\@\@\@std\@\@\@std\@\@AEAV?$map\@VChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@U?$less\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@4\@\@Z
     */
    MCAPI static float _setPlayerPositions(class CommandSelectorResults<class Actor> &, std::vector<class Vec2> &, class std::map<class ChunkPos, std::unique_ptr<class CommandArea>, struct std::less<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<class CommandArea>>>> &);
    /**
     * @hash   -381199612
     * @symbol  ?_spreadEntities\@SpreadPlayersCommand\@\@CA_NAEAVCommandOutput\@\@AEAV?$CommandSelectorResults\@VActor\@\@\@\@AEBVCommandOrigin\@\@AEBVVec2\@\@MMH\@Z
     */
    MCAPI static bool _spreadEntities(class CommandOutput &, class CommandSelectorResults<class Actor> &, class CommandOrigin const &, class Vec2 const &, float, float, int);

private:

};