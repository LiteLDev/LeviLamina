#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class PayloadServiceProvider; }
// clang-format on

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
    // vIndex: 0
    virtual ~SelectionContainer() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::PayloadServiceProvider& _getNetworkService();
    // NOLINTEND
};

} // namespace Editor::Selection
