#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ResourcePackStack;
struct PackInfo;
// clang-format on

class PackStackCommand : public ::ServerCommand {
public:
    // PackStackCommand inner types define
    enum class ExcludeVanilla : int {
        Exclude = 0,
        Include = 1,
    };

    enum class StackType : int {
        Server    = 0,
        Client    = 1,
        Undefined = 2,
    };

    enum class Verbose : int {
        Verbose = 0,
        Normal  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackStackCommand::StackType>      mStackType;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::Verbose>        mVerbose;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::ExcludeVanilla> mExcludeVanilla;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~PackStackCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string formatPackInfoOutput(::PackInfo const& packInfo, bool isVerbose);

    MCAPI static void
    outputPackStack(::CommandOutput& output, ::ResourcePackStack const& stack, bool isVerbose, bool excludeVanilla);

    MCAPI static void outputWorldTemplateData(
        ::CommandOutput&     output,
        ::std::string const& worldTemplateID,
        ::std::string const& worldTemplateVersion,
        bool                 isVerbose
    );

    MCAPI static void setup(::CommandRegistry& registry);
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
