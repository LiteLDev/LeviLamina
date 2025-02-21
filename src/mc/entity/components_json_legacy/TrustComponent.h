#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
struct ActorUniqueID;
// clang-format on

class TrustComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mTrustedPlayerIDs;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(::Actor& tag, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND
};
