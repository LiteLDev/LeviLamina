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
    MCNAPI ~TagsItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
