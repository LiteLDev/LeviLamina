#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class CommandSelectorBase;
class Player;
// clang-format on

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mVersion;
    ::ll::TypedStorage<8, 8, ::CommandRegistry const*> mRegistry;
    ::ll::TypedStorage<4, 4, int>                      mCommandSymbol;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::TypedStorage<2, 2, ::CommandFlag>            mFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Command();

    virtual bool collectOptionalArguments();

    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Command();

    MCAPI ::std::string getCommandName() const;

    MCFOLD ::CommandRegistry const& getRegistry() const;

    MCAPI bool hasFlag(::CommandFlag flag) const;

    MCAPI void run(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void sendTelemetry(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI bool shouldSendTelemetry(::CommandOrigin const& origin) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Player* getPlayerFromOrigin(::CommandOrigin const& origin);

    MCAPI static bool isTemplateLockedAction(::CommandOrigin const& origin);

    MCAPI static bool isWildcard(::CommandSelectorBase const& selector);

    MCAPI static bool shouldUseCommandOriginRotation(::CommandOrigin const& origin, int version);

    MCAPI static bool validData(int input, ushort& data, ::CommandOutput& output);

    MCAPI static bool validRange(int input, int low, int high, ::CommandOutput& output);

    MCAPI static bool validRange(float input, float low, float high, ::CommandOutput& output);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& WILDCARD_TOKEN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $collectOptionalArguments();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::unique_ptr<::Command, ::std::default_delete<::Command> >>();
// clang-format on
