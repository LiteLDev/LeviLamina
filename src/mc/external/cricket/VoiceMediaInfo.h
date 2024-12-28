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
    // member functions
    // NOLINTBEGIN
    MCAPI VoiceMediaInfo();

    MCAPI VoiceMediaInfo(::cricket::VoiceMediaInfo const&);

    MCAPI ::cricket::VoiceMediaInfo& operator=(::cricket::VoiceMediaInfo const&);

    MCAPI ~VoiceMediaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::VoiceMediaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
