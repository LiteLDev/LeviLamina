#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandItem.h"

struct AutoCompleteOption {
public:
    // AutoCompleteOption inner types define
    using CursorPos = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> visualText;
    ::ll::TypedStorage<8, 32, ::std::string> tabCompleteText;
    ::ll::TypedStorage<8, 32, ::std::string> description;
    ::ll::TypedStorage<4, 4, uint>           matchStart;
    ::ll::TypedStorage<4, 4, uint>           matchLength;
    ::ll::TypedStorage<4, 4, uint>           commandLineMatchStart;
    ::ll::TypedStorage<4, 4, uint>           commandLineMatchOffset;
    ::ll::TypedStorage<8, 8, ::CommandItem>  item;
    ::ll::TypedStorage<1, 1, bool>           highlight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_C void $dtor();
    // NOLINTEND
};
