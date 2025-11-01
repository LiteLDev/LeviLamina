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
    TagsItemComponent(TagsItemComponent const&);
    TagsItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TagsItemComponent();
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

}
