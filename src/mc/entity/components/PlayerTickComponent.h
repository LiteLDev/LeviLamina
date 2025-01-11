#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct IPlayerTickPolicy;
// clang-format on

struct PlayerTickComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc791f1;
    ::ll::UntypedStorage<8, 8> mUnkc8e399;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickComponent& operator=(PlayerTickComponent const&);
    PlayerTickComponent(PlayerTickComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerTickComponent();

    MCAPI PlayerTickComponent(::PlayerTickComponent&&);

    MCAPI explicit PlayerTickComponent(::std::unique_ptr<::IPlayerTickPolicy> policy);

    MCAPI ::PlayerTickComponent& operator=(::PlayerTickComponent&&);

    MCAPI ~PlayerTickComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerTickComponent&&);

    MCAPI void* $ctor(::std::unique_ptr<::IPlayerTickPolicy> policy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
