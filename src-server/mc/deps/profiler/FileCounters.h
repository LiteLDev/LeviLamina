#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::Profile {

struct FileCounters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8aa63e;
    ::ll::UntypedStorage<8, 8> mUnk166212;
    ::ll::UntypedStorage<8, 8> mUnk6d09f3;
    ::ll::UntypedStorage<8, 8> mUnk37cdb7;
    // NOLINTEND

public:
    // prevent constructor by default
    FileCounters& operator=(FileCounters const&);
    FileCounters(FileCounters const&);
    FileCounters();

};

}
