#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class IMinecraftApp;
// clang-format on

class EnableEncryptionCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mPublicKey;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSalt;
    ::ll::TypedStorage<1, 1, ::CodeBuilder::EncryptionCipherMode> mCipherMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::IMinecraftApp& app);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
