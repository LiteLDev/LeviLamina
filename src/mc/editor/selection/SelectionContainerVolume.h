#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/selection/EventSource.h"
#include "mc/editor/selection/SelectionContainer.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace Editor::Selection {

class SelectionContainerVolume : public ::Editor::Selection::SelectionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkd9382c;
    ::ll::UntypedStorage<8, 48> mUnk236616;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerVolume& operator=(SelectionContainerVolume const&);
    SelectionContainerVolume(SelectionContainerVolume const&);
    SelectionContainerVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectionContainerVolume() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clear(::Editor::Selection::EventSource eventSource);

    MCNAPI void moveTo(::Vec3 const& location, ::Editor::Selection::EventSource eventSource);

    MCNAPI void translate(::Vec3 const& offset, ::Editor::Selection::EventSource eventSource);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
