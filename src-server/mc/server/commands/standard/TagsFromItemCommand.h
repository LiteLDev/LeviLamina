#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
// clang-format on

class TagsFromItemCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk37c26e;
    // NOLINTEND

public:
    // prevent constructor by default
    TagsFromItemCommand& operator=(TagsFromItemCommand const&);
    TagsFromItemCommand(TagsFromItemCommand const&);
    TagsFromItemCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;

    // vIndex: 0
    virtual ~TagsFromItemCommand() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
