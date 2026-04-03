#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/BlockMenuCategory.h"
#include "mc/deps/shared_types/v1_26_10/block/States.h"
#include "mc/deps/shared_types/v1_26_10/block/Traits.h"
#include "mc/deps/shared_types/v1_26_10/block/VanillaBlockData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_26_10::BlockDefinition::BlockMenuCategory>>
                                                                                 mMenuCategory;
    ::ll::TypedStorage<8, 256, ::SharedTypes::v1_26_10::BlockDefinition::States> mStates;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_10::BlockDefinition::Traits>  mTraits;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::v1_26_10::BlockDefinition::VanillaBlockData>>
        mVanillaBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Description(::SharedTypes::v1_26_10::BlockDefinition::Description const&);

    MCAPI ::SharedTypes::v1_26_10::BlockDefinition::Description&
    operator=(::SharedTypes::v1_26_10::BlockDefinition::Description&&);

    MCAPI ::SharedTypes::v1_26_10::BlockDefinition::Description&
    operator=(::SharedTypes::v1_26_10::BlockDefinition::Description const&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_10::BlockDefinition::Description const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
