#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct VoiceMediaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkce4045;
    ::ll::UntypedStorage<8, 24> mUnkb55ab1;
    ::ll::UntypedStorage<8, 16> mUnkbad7c4;
    ::ll::UntypedStorage<8, 16> mUnkc41a45;
    ::ll::UntypedStorage<4, 4>  mUnk76a474;
    // NOLINTEND

public:
    // prevent constructor by default
    VoiceMediaInfo& operator=(VoiceMediaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoiceMediaInfo();

    MCNAPI VoiceMediaInfo(::cricket::VoiceMediaInfo const&);

    MCNAPI ~VoiceMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::VoiceMediaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
