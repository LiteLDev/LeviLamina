#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class VerifiedAudioContent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e74bf;
    ::ll::UntypedStorage<8, 32> mUnk5a2dfc;
    // NOLINTEND

public:
    // prevent constructor by default
    VerifiedAudioContent& operator=(VerifiedAudioContent const&);
    VerifiedAudioContent(VerifiedAudioContent const&);
    VerifiedAudioContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VerifiedAudioContent(::std::string document, ::std::string subject);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string document, ::std::string subject);
    // NOLINTEND
};

} // namespace Audio
