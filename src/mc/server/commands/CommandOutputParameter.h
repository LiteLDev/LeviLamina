#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
    enum class NoCountType : int {
        NoCount = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mString;
    ::ll::TypedStorage<4, 4, int>            mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputParameter& operator=(CommandOutputParameter const&);
    CommandOutputParameter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Actor> const& entities);

    MCAPI explicit CommandOutputParameter(::std::vector<::Actor const*> const& entities);

    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Player> const& players);

    MCAPI explicit CommandOutputParameter(::std::vector<::Player const*> const& players);

    MCAPI CommandOutputParameter(::CommandOutputParameter const& rhs);

    MCAPI explicit CommandOutputParameter(::std::vector<::std::string> const& strings);

    MCAPI explicit CommandOutputParameter(::std::string const& text);

    MCAPI explicit CommandOutputParameter(char const* text);

    MCAPI ~CommandOutputParameter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::CommandSelectorResults<::Actor> const& entities);

    MCFOLD void* $ctor(::std::vector<::Actor const*> const& entities);

    MCFOLD void* $ctor(::CommandSelectorResults<::Player> const& players);

    MCFOLD void* $ctor(::std::vector<::Player const*> const& players);

    MCAPI void* $ctor(::CommandOutputParameter const& rhs);

    MCAPI void* $ctor(::std::vector<::std::string> const& strings);

    MCAPI void* $ctor(::std::string const& text);

    MCAPI void* $ctor(char const* text);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
