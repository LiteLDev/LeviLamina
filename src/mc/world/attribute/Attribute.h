#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/RedefinitionMode.h"

class Attribute {
public:
    // prevent constructor by default
    Attribute& operator=(Attribute const&);
    Attribute(Attribute const&);
    Attribute();

public:
    // NOLINTBEGIN
    MCAPI Attribute(class HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);

    MCAPI class HashedString const& getName() const;

    MCAPI ::RedefinitionMode getRedefinitionMode() const;

    MCAPI static class Attribute& getByName(class HashedString const& attribute);

    // NOLINTEND
};
