#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct EntityPlacerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<1>>                           mEntity;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mDispenseOn;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mUseOn;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityPlacerItemComponent& operator=(EntityPlacerItemComponent const&);
    EntityPlacerItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntityPlacerItemComponent(::SharedTypes::v1_20_50::EntityPlacerItemComponent const&);

    MCAPI ::SharedTypes::v1_20_50::EntityPlacerItemComponent&
    operator=(::SharedTypes::v1_20_50::EntityPlacerItemComponent&&);

    MCAPI bool operator==(::SharedTypes::v1_20_50::EntityPlacerItemComponent const&) const;

    MCAPI ~EntityPlacerItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::EntityPlacerItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
