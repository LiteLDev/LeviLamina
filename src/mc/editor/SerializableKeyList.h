#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ReplicatedAssociativeContainerUtil {

struct SerializableKeyList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkad4e69;
    ::ll::UntypedStorage<8, 32> mUnkaf423c;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableKeyList& operator=(SerializableKeyList const&);
    SerializableKeyList(SerializableKeyList const&);
    SerializableKeyList();
};

} // namespace Editor::ReplicatedAssociativeContainerUtil
