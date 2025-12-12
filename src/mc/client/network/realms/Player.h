#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk269943;
    ::ll::UntypedStorage<8, 32> mUnkb5488d;
    ::ll::UntypedStorage<8, 32> mUnkc7b8fe;
    ::ll::UntypedStorage<8, 72> mUnk3468aa;
    ::ll::UntypedStorage<1, 1>  mUnk64710a;
    ::ll::UntypedStorage<1, 1>  mUnke1c1b0;
    ::ll::UntypedStorage<1, 1>  mUnk8c6858;
    ::ll::UntypedStorage<1, 1>  mUnkd251a2;
    ::ll::UntypedStorage<1, 1>  mUnk5a0651;
    ::ll::UntypedStorage<8, 8>  mUnk7ca601;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Player();

    MCNAPI_C Player(::Realms::Player&&);

    MCNAPI_C Player(::Realms::Player const&);

    MCNAPI_C ::Realms::Player& operator=(::Realms::Player const&);

    MCNAPI_C ~Player();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Realms::Player fromJson(::Json::Value const& json);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::Realms::Player&&);

    MCNAPI_C void* $ctor(::Realms::Player const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Realms
