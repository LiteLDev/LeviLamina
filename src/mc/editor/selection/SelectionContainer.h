#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Selection {

class SelectionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka1c4d5;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainer& operator=(SelectionContainer const&);
    SelectionContainer(SelectionContainer const&);
    SelectionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionContainer() = default;
    // NOLINTEND
};

} // namespace Editor::Selection
