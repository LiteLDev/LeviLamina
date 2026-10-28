#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct SerializableSimpleHotbarElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk7f5891;
    ::ll::UntypedStorage<8, 48> mUnk4fcef8;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableSimpleHotbarElement& operator=(SerializableSimpleHotbarElement const&);
    SerializableSimpleHotbarElement(SerializableSimpleHotbarElement const&);
    SerializableSimpleHotbarElement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SerializableSimpleHotbarElement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
