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
    ::ll::UntypedStorage<8, 64> mUnk8f05b8;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&);
    TrustComponent(TrustComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrustComponent();

    MCAPI TrustComponent(::TrustComponent&&);

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void assignTrustedPlayer(::ActorUniqueID playerID);

    MCFOLD ::std::unordered_set<::ActorUniqueID> const& getTrustedPlayerIDs() const;

    MCFOLD ::TrustComponent& operator=(::TrustComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::TrustComponent&&);
    // NOLINTEND
};
