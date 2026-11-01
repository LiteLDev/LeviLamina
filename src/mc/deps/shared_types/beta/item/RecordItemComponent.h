#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

namespace SharedTypes::Beta {

struct RecordItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Versionless::SoundEventName> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                                       mDuration;
    ::ll::TypedStorage<4, 4, int>                                         mComparatorSignal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RecordItemComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
