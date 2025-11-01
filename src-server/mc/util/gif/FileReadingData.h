#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gif {

struct FileReadingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1f142a;
    ::ll::UntypedStorage<8, 24> mUnkfce92d;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReadingData& operator=(FileReadingData const&);
    FileReadingData(FileReadingData const&);
    FileReadingData();

};

}
