#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

struct Rectangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4c8922;
    ::ll::UntypedStorage<4, 4> mUnk9e498f;
    ::ll::UntypedStorage<4, 4> mUnkf91ddd;
    ::ll::UntypedStorage<4, 4> mUnkc6401d;
    // NOLINTEND

public:
    // prevent constructor by default
    Rectangle& operator=(Rectangle const&);
    Rectangle(Rectangle const&);
    Rectangle();
};

} // namespace cohtml::TextInput
