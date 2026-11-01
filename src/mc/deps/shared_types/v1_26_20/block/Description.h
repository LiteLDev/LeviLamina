#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockMenuCategory.h"
#include "mc/deps/shared_types/v1_26_20/block/States.h"
#include "mc/deps/shared_types/v1_26_20/block/Traits.h"
#include "mc/deps/shared_types/v1_26_20/block/VanillaBlockData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                               mIdentifier;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_26_20::BlockDefinition::BlockMenuCategory> mMenuCategory;
    ::ll::TypedStorage<8, 256, ::SharedTypes::v1_26_20::BlockDefinition::States>           mStates;
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_26_20::BlockDefinition::Traits>            mTraits;
    ::ll::TypedStorage<8, 80, ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::VanillaBlockData>>
        mVanillaBlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Description(::SharedTypes::v1_26_20::BlockDefinition::Description&&);

    MCNAPI Description(::SharedTypes::v1_26_20::BlockDefinition::Description const&);

    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::Description&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::Description&&);

    MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::Description&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::Description const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_20::BlockDefinition::Description const&) const;

    MCNAPI ~Description();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::Description&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::Description const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
