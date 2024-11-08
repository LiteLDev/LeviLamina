#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"

class CommandOutputParameter {
public:
    // CommandOutputParameter inner types define
    enum class NoCountType : int {
        NoCount = 0x0,
    };

public:
    std::string str;
    int         type;

    operator std::string const&() const { return str; }

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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::vector<std::string> const& strings);

    MCAPI void* ctor$(class Actor const& entity);

    MCAPI void* ctor$(class Actor const* entity);

    MCAPI void* ctor$(class BlockPos value);

    MCAPI void* ctor$(char const* text);

    MCAPI void* ctor$(class CommandOutputParameter&& rhs);

    MCAPI void* ctor$(float value);

    MCAPI void* ctor$(int value);

    MCAPI void* ctor$(::CommandOutputParameter::NoCountType);

    MCAPI void* ctor$(bool value);

    MCAPI void* ctor$(class CommandSelectorResults<class Actor> const& entities);

    MCAPI void* ctor$(class CommandSelectorResults<class Player> const& players);

    MCAPI void* ctor$(std::string const& text);

    MCAPI void* ctor$(std::vector<class Actor const*> const& entities);

    MCAPI void* ctor$(std::vector<class Player const*> const& players);

    MCAPI void* ctor$(class CommandOutputParameter const& rhs);

    MCAPI void dtor$();

    // NOLINTEND
};
