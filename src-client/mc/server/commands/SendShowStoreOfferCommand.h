#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class SendShowStoreOfferCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnke18603;
    ::ll::UntypedStorage<8, 32>  mUnkb8fbcc;
    ::ll::UntypedStorage<1, 1>   mUnkc234e2;
    // NOLINTEND

public:
    // prevent constructor by default
    SendShowStoreOfferCommand& operator=(SendShowStoreOfferCommand const&);
    SendShowStoreOfferCommand(SendShowStoreOfferCommand const&);
    SendShowStoreOfferCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~SendShowStoreOfferCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
