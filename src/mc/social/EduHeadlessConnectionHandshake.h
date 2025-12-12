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
    ::ll::UntypedStorage<8, 32> mUnk9e7bf1;
    ::ll::UntypedStorage<8, 32> mUnk82e3cb;
    ::ll::UntypedStorage<8, 32> mUnkf2dd53;
    ::ll::UntypedStorage<8, 32> mUnkb2d72f;
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
    MCNAPI_C EduHeadlessConnectionHandshake(::std::string const& id, ::Json::Value const& json);

    MCNAPI_C ~EduHeadlessConnectionHandshake();
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
