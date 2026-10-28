#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace SharedTypes::v1_26_60::BlockDefinition { struct BoundingBoxData; }
// clang-format on

namespace SharedTypes::v1_26_60::BlockDefinition {

struct CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::variant<bool, ::std::vector<::SharedTypes::v1_26_60::BlockDefinition::BoundingBoxData>>>
        mCollisionBoxData;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::Vec3 const& MAX_BOUNDS();
#endif

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
