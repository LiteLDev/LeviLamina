#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCAPI ~TagsItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
