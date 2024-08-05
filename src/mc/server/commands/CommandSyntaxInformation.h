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
};
