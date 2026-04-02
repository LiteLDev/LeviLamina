#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/standard/LocateSubcommand.h"
#include "mc/server/commands/standard/locate_command_util/Biomes.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Level;
// clang-format on

class LocateCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::LocateSubcommand>          mSubcommand;
    ::ll::TypedStorage<8, 32, ::std::string>              mFeature;
    ::ll::TypedStorage<4, 4, ::LocateCommandUtil::Biomes> mBiome;
    ::ll::TypedStorage<1, 1, bool>                        useNewChunksOnly;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~LocateCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeLocateBiome(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _executeLocateStructure(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::Level const& level);
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
