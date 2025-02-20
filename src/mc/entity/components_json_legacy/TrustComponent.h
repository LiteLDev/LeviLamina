#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class TrustComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8f05b8;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&);
    TrustComponent(TrustComponent const&);
    TrustComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND
};
