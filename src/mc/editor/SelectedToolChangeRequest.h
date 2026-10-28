#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::DataStore {

struct SelectedToolChangeRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd7deb5;
    ::ll::UntypedStorage<8, 40> mUnkddc164;
    ::ll::UntypedStorage<1, 1>  mUnk5fed0f;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectedToolChangeRequest& operator=(SelectedToolChangeRequest const&);
    SelectedToolChangeRequest(SelectedToolChangeRequest const&);
    SelectedToolChangeRequest();
};

} // namespace Editor::DataStore
