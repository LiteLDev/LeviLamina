#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct EntityPlacerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk502757;
    ::ll::UntypedStorage<8, 24> mUnkadc727;
    ::ll::UntypedStorage<8, 24> mUnkdba18d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_50::EntityPlacerItemComponent&
    operator=(::SharedTypes::v1_20_50::EntityPlacerItemComponent&&);

    MCNAPI ::SharedTypes::v1_20_50::EntityPlacerItemComponent&
    operator=(::SharedTypes::v1_20_50::EntityPlacerItemComponent const&);

    MCNAPI ~EntityPlacerItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
