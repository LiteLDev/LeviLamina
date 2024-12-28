#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Pos;
// clang-format on

class HeightmapWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<short> const*> mData;
    ::ll::TypedStorage<2, 2, short>                       mMinY;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightmapWrapper& operator=(HeightmapWrapper const&);
    HeightmapWrapper(HeightmapWrapper const&);
    HeightmapWrapper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool empty() const;

    MCAPI short getHeightAt(::Pos const& p) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HeightmapWrapper create(::std::vector<short> const* buffer, short minY);
    // NOLINTEND
};
