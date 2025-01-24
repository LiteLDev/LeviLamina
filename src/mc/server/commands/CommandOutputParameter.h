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
    ::ll::TypedStorage<8, 32, ::std::string> mString;
    ::ll::TypedStorage<4, 4, int>            mCount;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputParameter& operator=(CommandOutputParameter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandOutputParameter(::std::vector<::Player const*> const& players);

    MCAPI CommandOutputParameter(::CommandOutputParameter const& rhs);

    MCAPI explicit CommandOutputParameter(::std::vector<::Actor const*> const&);

    MCAPI explicit CommandOutputParameter(::CommandOutputParameter::NoCountType);

    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Player> const& players);

    MCAPI explicit CommandOutputParameter(::std::string const& text);

    MCAPI explicit CommandOutputParameter(bool value);

    MCAPI explicit CommandOutputParameter(::CommandSelectorResults<::Actor> const&);

    MCAPI explicit CommandOutputParameter(::Actor const* entity);

    MCAPI CommandOutputParameter(::CommandOutputParameter&& rhs);

    MCAPI explicit CommandOutputParameter(char const* text);

    MCAPI explicit CommandOutputParameter(int value);

    MCAPI explicit CommandOutputParameter(float value);

    MCAPI explicit CommandOutputParameter(::BlockPos value);

    MCAPI explicit CommandOutputParameter(::Actor const&);

    MCAPI explicit CommandOutputParameter(::std::vector<::std::string> const& strings);

    MCFOLD ::CommandOutputParameter& operator=(::CommandOutputParameter&& rhs);

    MCAPI ~CommandOutputParameter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::vector<::Player const*> const& players);

    MCAPI void* $ctor(::CommandOutputParameter const& rhs);

    MCAPI void* $ctor(::std::vector<::Actor const*> const&);

    MCFOLD void* $ctor(::CommandOutputParameter::NoCountType);

    MCFOLD void* $ctor(::CommandSelectorResults<::Player> const& players);

    MCAPI void* $ctor(::std::string const& text);

    MCAPI void* $ctor(bool value);

    MCAPI void* $ctor(::CommandSelectorResults<::Actor> const&);

    MCFOLD void* $ctor(::Actor const* entity);

    MCFOLD void* $ctor(::CommandOutputParameter&& rhs);

    MCAPI void* $ctor(char const* text);

    MCAPI void* $ctor(int value);

    MCAPI void* $ctor(float value);

    MCAPI void* $ctor(::BlockPos value);

    MCAPI void* $ctor(::Actor const&);

    MCAPI void* $ctor(::std::vector<::std::string> const& strings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
