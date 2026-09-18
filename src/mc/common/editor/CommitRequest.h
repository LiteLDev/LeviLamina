#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::InteractiveTools {

struct CommitRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf10158;
    ::ll::UntypedStorage<8, 8>  mUnka24f30;
    ::ll::UntypedStorage<4, 12> mUnkd2501b;
    ::ll::UntypedStorage<1, 1>  mUnk717980;
    // NOLINTEND

public:
    // prevent constructor by default
    CommitRequest& operator=(CommitRequest const&);
    CommitRequest(CommitRequest const&);
    CommitRequest();
};

} // namespace Editor::InteractiveTools
