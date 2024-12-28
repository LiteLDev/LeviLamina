#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class MingleComponent {
public:
    // MingleComponent inner types define
    enum class MingleState : int {
        Unavailable      = 0,
        Available        = 1,
        PartneredActive  = 2,
        PartneredPassive = 3,
        Mingling         = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5ed224;
    ::ll::UntypedStorage<8, 8> mUnkcbaa3e;
    ::ll::UntypedStorage<8, 8> mUnk7deb29;
    // NOLINTEND

public:
    // prevent constructor by default
    MingleComponent& operator=(MingleComponent const&);
    MingleComponent(MingleComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MingleComponent();

    MCAPI ::MingleComponent& clearPreviousPartnerId();

    MCAPI ::Actor* fetchCurrentPartner(::Actor const& actorInLevel) const;

    MCAPI void resetState();

    MCAPI ::MingleComponent& setMingleState(::MingleComponent::MingleState val);

    MCAPI ::MingleComponent& setPartnerId(::ActorUniqueID val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
