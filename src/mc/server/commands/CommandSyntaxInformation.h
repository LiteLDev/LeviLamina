#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommandSyntaxInformation {
public:
    // prevent constructor by default
    CommandSyntaxInformation& operator=(CommandSyntaxInformation const&);
    CommandSyntaxInformation(CommandSyntaxInformation const&);

public:
    // NOLINTBEGIN
    MCAPI CommandSyntaxInformation();

    MCAPI ~CommandSyntaxInformation();

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
