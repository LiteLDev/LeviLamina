#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/RedefinitionMode.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class Attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3e2e5a;
    ::ll::UntypedStorage<1, 1>  mUnk2c9c31;
    ::ll::UntypedStorage<4, 4>  mUnkdfeb76;
    ::ll::UntypedStorage<8, 48> mUnke51287;
    // NOLINTEND

public:
    // prevent constructor by default
    Attribute& operator=(Attribute const&);
    Attribute(Attribute const&);
    Attribute();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Attribute(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);

    MCAPI ::HashedString const& getName() const;

    MCAPI ::RedefinitionMode getRedefinitionMode() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Attribute& getByName(::HashedString const& attribute);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::HashedString const& name, ::RedefinitionMode redefMode, bool isSyncable);
    // NOLINTEND
};
