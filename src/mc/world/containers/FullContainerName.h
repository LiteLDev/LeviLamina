#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FullContainerName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6b9174;
    ::ll::UntypedStorage<4, 8> mUnk5245b5;
    // NOLINTEND

public:
    // prevent constructor by default
    FullContainerName& operator=(FullContainerName const&);
    FullContainerName(FullContainerName const&);
    FullContainerName();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::FullContainerName const& rhs) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::optional<uint> const& NON_DYNAMIC_ID();
    // NOLINTEND
};
