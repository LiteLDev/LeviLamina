#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ReplicatedAssociativeContainerUtil {

struct SerializableKeyListContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1c72e7;
    ::ll::UntypedStorage<8, 24> mUnk88cdc5;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableKeyListContainer& operator=(SerializableKeyListContainer const&);
    SerializableKeyListContainer(SerializableKeyListContainer const&);
    SerializableKeyListContainer();
};

} // namespace Editor::ReplicatedAssociativeContainerUtil
