#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ChunkPos;
class CommandArea;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Random;
class Vec2;
// clang-format on

class SpreadPlayersCommand : public ::Command {
public:
    // SpreadPlayersCommand inner types define
    using CommandAreas = ::std::map<::ChunkPos, ::std::unique_ptr<::CommandArea>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>> mTargets;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              maxHeight;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>              mZ;
    ::ll::TypedStorage<4, 4, float>                        mDistance;
    ::ll::TypedStorage<4, 4, float>                        mMaxRange;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

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
