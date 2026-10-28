#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_60 {

struct SendEventStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mBaseDelay;
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
    ::ll::TypedStorage<8, 32, ::std::string> mSoundEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventStage& operator=(SendEventStage const&);
    SendEventStage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SendEventStage(::SharedTypes::v1_26_60::SendEventStage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_60::SendEventStage const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
