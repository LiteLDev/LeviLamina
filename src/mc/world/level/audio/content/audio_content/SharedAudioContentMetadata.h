#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace AudioContent::SharedMetadata::v1_0_0 {

struct SharedAudioContentMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1eb45b;
    ::ll::UntypedStorage<8, 32> mUnk3e813b;
    ::ll::UntypedStorage<8, 64> mUnk29cefb;
    ::ll::UntypedStorage<8, 32> mUnkfd5c79;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedAudioContentMetadata& operator=(SharedAudioContentMetadata const&);
    SharedAudioContentMetadata(SharedAudioContentMetadata const&);
    SharedAudioContentMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SharedAudioContentMetadata();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace AudioContent::SharedMetadata::v1_0_0
