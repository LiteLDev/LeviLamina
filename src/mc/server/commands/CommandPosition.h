#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class CommandPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
    ::ll::TypedStorage<1, 1, bool>    mRelativeX;
    ::ll::TypedStorage<1, 1, bool>    mRelativeY;
    ::ll::TypedStorage<1, 1, bool>    mRelativeZ;
    ::ll::TypedStorage<1, 1, bool>    mLocal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Vec3 getPosition(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandPosition>();
// clang-format on
