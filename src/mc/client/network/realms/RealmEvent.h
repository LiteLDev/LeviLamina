#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms::Stories {

class RealmEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk238732;
    ::ll::UntypedStorage<8, 32> mUnk9c5344;
    ::ll::UntypedStorage<8, 32> mUnk22398a;
    ::ll::UntypedStorage<8, 8>  mUnk70c19b;
    ::ll::UntypedStorage<8, 24> mUnkf2f83d;
    ::ll::UntypedStorage<4, 16> mUnkcfc284;
    ::ll::UntypedStorage<8, 32> mUnk43cf1d;
    ::ll::UntypedStorage<1, 1>  mUnk7e3bd2;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEvent(RealmEvent const&);
    RealmEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RealmEvent(::Realms::Stories::RealmEvent&&);

    MCNAPI_C ::Realms::Stories::RealmEvent& operator=(::Realms::Stories::RealmEvent&&);

    MCNAPI_C ::Realms::Stories::RealmEvent& operator=(::Realms::Stories::RealmEvent const&);

    MCNAPI_C ~RealmEvent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Realms::Stories::RealmEvent fromJson(::Json::Value const& json);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Realms::Stories::RealmEvent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Realms::Stories
