#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ChunkPos;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Random;
class Vec2;
struct CommandArea;
// clang-format on

class SpreadPlayersCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnkcaddae;
    ::ll::UntypedStorage<4, 8>   mUnkbc1c46;
    ::ll::UntypedStorage<4, 8>   mUnka2e82a;
    ::ll::UntypedStorage<4, 8>   mUnkf56085;
    ::ll::UntypedStorage<4, 4>   mUnk17014b;
    ::ll::UntypedStorage<4, 4>   mUnk87ff63;
    // NOLINTEND

public:
    // prevent constructor by default
    SpreadPlayersCommand& operator=(SpreadPlayersCommand const&);
    SpreadPlayersCommand(SpreadPlayersCommand const&);
    SpreadPlayersCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~SpreadPlayersCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _checkPositionValid(
        ::CommandOrigin const&                                    origin,
        ::BlockPos const&                                         checkPos,
        ::std::optional<short>                                    maxHeight,
        ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>& areas,
        int                                                       commandVersion
    );

    MCAPI static short
    _getTeleportHeight(::BlockSource& region, int x, ::std::optional<short> maxHeight, int z, int commandVersion);

    MCAPI static float _setPlayerPositions(
        ::CommandSelectorResults<::Actor>&                        entities,
        ::std::vector<::Vec2>&                                    positions,
        ::std::optional<short>                                    maxHeight,
        ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>& areas,
        int                                                       commandVersion
    );

    MCAPI static bool _spreadEntities(
        ::CommandOutput&                   output,
        ::CommandSelectorResults<::Actor>& entities,
        ::CommandOrigin const&             origin,
        ::Vec2 const&                      center,
        float                              spreadDist,
        float                              maxDistFromCenter,
        ::std::optional<short>             maxHeight,
        int                                commandVersion
    );

    MCAPI static ::std::vector<::Vec2>
    createInitialPositions(::Random& random, int count, ::Vec2 const& minPos, ::Vec2 const& maxPos);

    MCAPI static bool isDangerousSpawn(
        ::BlockSource&         region,
        ::BlockPos const&      checkPos,
        short                  minHeight,
        ::std::optional<short> maxHeight,
        int                    commandVersion
    );

    MCAPI static void setup(::CommandRegistry& registry);

    MCAPI static bool spreadPositions(
        ::CommandOutput&                                          output,
        ::Random&                                                 random,
        ::CommandOrigin const&                                    origin,
        ::Vec2 const&                                             center,
        float                                                     spreadDist,
        ::Vec2 const&                                             minPos,
        ::Vec2 const&                                             maxPos,
        ::std::vector<::Vec2>&                                    positions,
        ::std::optional<short>                                    maxHeight,
        ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>& areas,
        int                                                       commandVersion
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
