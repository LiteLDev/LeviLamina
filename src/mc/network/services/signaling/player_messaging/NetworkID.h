#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayerMessaging {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk16c1ef;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkID(::std::string const& str);

    MCNAPI_C ::Json::Value toJson() const;

    MCNAPI_C ::std::string toString() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& str);
    // NOLINTEND
};

} // namespace PlayerMessaging
