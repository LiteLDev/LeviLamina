#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/selection/SelectionContainer.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Selection {

class SelectionContainerEntity : public ::Editor::Selection::SelectionContainer {
public:
    // prevent constructor by default
    SelectionContainerEntity();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionContainerEntity() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SelectionContainerEntity(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& serviceProviders);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
