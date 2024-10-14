#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
    enum class NoCountType {};

public:
    // prevent constructor by default
    CommandOutputParameter& operator=(CommandOutputParameter const&);
    CommandOutputParameter();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandOutputParameter(bool value);

    MCAPI explicit CommandOutputParameter(char const* text);

    MCAPI explicit CommandOutputParameter(class Actor const& entity);

    MCAPI explicit CommandOutputParameter(class Actor const* entity);

    MCAPI explicit CommandOutputParameter(class BlockPos value);

    MCAPI CommandOutputParameter(class CommandOutputParameter&& rhs);

    MCAPI CommandOutputParameter(class CommandOutputParameter const& rhs);

    MCAPI explicit CommandOutputParameter(class CommandSelectorResults<class Actor> const& entities);

    MCAPI explicit CommandOutputParameter(class CommandSelectorResults<class Player> const& players);

    MCAPI explicit CommandOutputParameter(std::string const& text);

    MCAPI explicit CommandOutputParameter(std::vector<class Actor const*> const& entities);

    MCAPI explicit CommandOutputParameter(std::vector<class Player const*> const& players);

    MCAPI explicit CommandOutputParameter(std::vector<std::string> const& strings);

    MCAPI explicit CommandOutputParameter(::CommandOutputParameter::NoCountType);

    MCAPI explicit CommandOutputParameter(float value);

    MCAPI explicit CommandOutputParameter(int value);

    MCAPI class CommandOutputParameter& operator=(class CommandOutputParameter&& rhs);

    MCAPI ~CommandOutputParameter();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
