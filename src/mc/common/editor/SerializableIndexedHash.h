#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ReplicatedSequentialContainerUtil {

struct SerializableIndexedHash {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf208a6;
    ::ll::UntypedStorage<8, 48> mUnk428728;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableIndexedHash& operator=(SerializableIndexedHash const&);
    SerializableIndexedHash(SerializableIndexedHash const&);
    SerializableIndexedHash();
};

} // namespace Editor::ReplicatedSequentialContainerUtil
