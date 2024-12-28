#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct TagsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk716503;
    // NOLINTEND

public:
    // prevent constructor by default
    TagsItemComponent& operator=(TagsItemComponent const&);
    TagsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TagsItemComponent(::SharedTypes::v1_20_50::TagsItemComponent const&);

    MCAPI ::SharedTypes::v1_20_50::TagsItemComponent& operator=(::SharedTypes::v1_20_50::TagsItemComponent&&);

    MCAPI ~TagsItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::TagsItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
