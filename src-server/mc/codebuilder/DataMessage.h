#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct DataMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkac4feb;
    ::ll::UntypedStorage<8, 32> mUnk11482b;
    ::ll::UntypedStorage<1, 1> mUnkad7c7b;
    // NOLINTEND

public:
    // prevent constructor by default
    DataMessage& operator=(DataMessage const&);
    DataMessage(DataMessage const&);
    DataMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DataMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
