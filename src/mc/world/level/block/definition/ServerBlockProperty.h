#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

struct ServerBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerBlockProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerBlockProperty(::ServerBlockProperty const& other);

    MCAPI ::ServerBlockProperty& operator=(::ServerBlockProperty const& other);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerBlockProperty const& other);
    // NOLINTEND
};
