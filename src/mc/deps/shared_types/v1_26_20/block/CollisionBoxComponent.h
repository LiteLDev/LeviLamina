#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BoundingBoxData.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::variant<
            bool,
            ::SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData,
            ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::BoundingBoxData>>>
        mCollisionBoxData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CollisionBoxComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& MAX_BOUNDS();

    MCAPI static ::Vec3 const& MIN_BOUNDS();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
