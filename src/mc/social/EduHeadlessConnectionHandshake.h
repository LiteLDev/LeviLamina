#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct EduHeadlessConnectionHandshake {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd362eb;
    ::ll::UntypedStorage<8, 32> mUnk380989;
    ::ll::UntypedStorage<8, 32> mUnk985c6e;
    ::ll::UntypedStorage<8, 32> mUnk69dace;
    ::ll::UntypedStorage<8, 8>  mUnke2f149;
    ::ll::UntypedStorage<1, 1>  mUnkbf426d;
    // NOLINTEND

public:
    // prevent constructor by default
    EduHeadlessConnectionHandshake& operator=(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake(EduHeadlessConnectionHandshake const&);
    EduHeadlessConnectionHandshake();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string const& id, ::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
