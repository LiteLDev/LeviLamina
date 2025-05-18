#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
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
    ::std::string mString;
    int           mCount;
    // NOLINTEND

    operator std::string const&() const { return mString; }

public:
    // prevent constructor by default
    CommandOutputParameter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandOutputParameter(::std::vector<::Player const*> const& players);

    MCAPI explicit CommandOutputParameter(::std::vector<::Actor const*> const&);

    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Player> const& players);

    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Actor> const&);

    MCAPI explicit CommandOutputParameter(::std::vector<::std::string> const& strings);

    MCAPI explicit CommandOutputParameter(char const* text);

    MCAPI explicit CommandOutputParameter(::BlockPos value);

    MCAPI ~CommandOutputParameter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::vector<::Player const*> const& players);

    MCAPI void* $ctor(::std::vector<::Actor const*> const&);

    MCFOLD void* $ctor(::CommandSelectorResults<::Player> const& players);

    MCAPI void* $ctor(::CommandSelectorResults<::Actor> const&);

    MCAPI void* $ctor(::std::vector<::std::string> const& strings);

    MCAPI void* $ctor(char const* text);

    MCAPI void* $ctor(::BlockPos value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
