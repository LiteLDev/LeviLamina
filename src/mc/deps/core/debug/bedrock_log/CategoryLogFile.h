#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

struct CategoryLogFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk85dd90;
    ::ll::UntypedStorage<4, 4>  mUnkd3b10f;
    ::ll::UntypedStorage<4, 4>  mUnkf08fde;
    // NOLINTEND

public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const&);
    CategoryLogFile(CategoryLogFile const&);
    CategoryLogFile();
};

} // namespace BedrockLog
