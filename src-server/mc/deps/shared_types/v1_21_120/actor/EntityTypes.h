#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_120 { struct MobDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_120 {

struct EntityTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkebba4a;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityTypes& operator=(EntityTypes const&);
    EntityTypes(EntityTypes const&);
    EntityTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EntityTypes();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromDescriptor(
        ::SharedTypes::v1_21_120::EntityTypes&   entityTypes,
        ::SharedTypes::v1_21_120::MobDescriptor& descriptor
    );

    MCNAPI static void fromVector(
        ::SharedTypes::v1_21_120::EntityTypes&                  entityTypes,
        ::std::vector<::SharedTypes::v1_21_120::MobDescriptor>& vector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
