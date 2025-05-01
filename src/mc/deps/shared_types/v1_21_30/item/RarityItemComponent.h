#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_30 {

struct RarityItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb95b37;
    // NOLINTEND

public:
    // prevent constructor by default
    RarityItemComponent(RarityItemComponent const&);
    RarityItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_30::RarityItemComponent& operator=(::SharedTypes::v1_21_30::RarityItemComponent const&);

    MCNAPI ::SharedTypes::v1_21_30::RarityItemComponent& operator=(::SharedTypes::v1_21_30::RarityItemComponent&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
