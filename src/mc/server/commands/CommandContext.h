#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandContext {
public:
    // prevent constructor by default
    CommandContext& operator=(CommandContext const&);
    CommandContext(CommandContext const&);
    CommandContext();

public:
    // NOLINTBEGIN
    MCAPI CommandContext(std::string const& cmd, std::unique_ptr<class CommandOrigin> origin, int version);

    MCAPI class CommandOrigin const& getCommandOrigin() const;

    MCAPI ~CommandContext();

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
