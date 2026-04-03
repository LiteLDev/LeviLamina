#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/BoundingBoxData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct CollisionBoxComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::variant<
            bool,
            ::SharedTypes::v1_26_10::BlockDefinition::BoundingBoxData,
            ::std::vector<::SharedTypes::v1_26_10::BlockDefinition::BoundingBoxData>>>
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
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
