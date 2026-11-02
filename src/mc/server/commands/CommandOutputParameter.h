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
    ::std::string mString;
    int           mCount;
    // NOLINTEND

    operator std::string const&() const { return mString; }

public:
    // prevent constructor by default
    CommandOutputParameter& operator=(CommandOutputParameter const&);
    CommandOutputParameter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Actor> const& entities);

    MCNAPI explicit CommandOutputParameter(::std::vector<::Actor const*> const& entities);

    MCNAPI explicit CommandOutputParameter(::CommandSelectorResults<::Player> const& players);

    MCNAPI explicit CommandOutputParameter(::std::vector<::Player const*> const& players);

    MCAPI CommandOutputParameter(::CommandOutputParameter const& rhs);

    MCNAPI explicit CommandOutputParameter(::std::vector<::std::string> const& strings);

    MCAPI explicit CommandOutputParameter(::std::string const& text);

    MCNAPI explicit CommandOutputParameter(char const* text);

    MCNAPI explicit CommandOutputParameter(int value);

    MCNAPI explicit CommandOutputParameter(float value);

    MCAPI ~CommandOutputParameter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::CommandSelectorResults<::Actor> const& entities);

    MCNAPI void* $ctor(::std::vector<::Actor const*> const& entities);

    MCNAPI void* $ctor(::CommandSelectorResults<::Player> const& players);

    MCNAPI void* $ctor(::std::vector<::Player const*> const& players);

    MCAPI void* $ctor(::CommandOutputParameter const& rhs);

    MCNAPI void* $ctor(::std::vector<::std::string> const& strings);

    MCAPI void* $ctor(::std::string const& text);

    MCNAPI void* $ctor(char const* text);

    MCNAPI void* $ctor(int value);

    MCNAPI void* $ctor(float value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
