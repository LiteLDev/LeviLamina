#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

namespace SharedTypes::v1_26_60::BlockDefinition {

struct BoundingBoxData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mOrigin;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mSize;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mMin;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mMax;
    ::ll::TypedStorage<1, 1, bool>                     mHasMin;
    ::ll::TypedStorage<1, 1, bool>                     mHasMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateBoundsFromOriginSize();

    MCNAPI bool operator==(::SharedTypes::v1_26_60::BlockDefinition::BoundingBoxData const& value) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& MaxId();

    MCNAPI static ::std::string_view const& MinId();

    MCNAPI static ::std::string_view const& OriginId();

    MCNAPI static ::std::string_view const& SizeId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
