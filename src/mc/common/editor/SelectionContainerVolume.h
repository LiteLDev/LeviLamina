#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EventSource.h"
#include "mc/editor/selection/SelectionContainer.h"

// auto generated forward declare list
// clang-format off
class BoundingBox;
class Vec3;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Selection { struct SelectionVolumeEvent; }
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
    // vIndex: 0
    virtual ~SelectionContainerVolume() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fireSelectionVolumeMoveEvent();

    MCNAPI void _fireSelectionVolumeRemoveEvent();

    MCNAPI void _fireSelectionVolumeSetEvent();

    MCNAPI void _fireSelectionVolumeTranslateEvent();

    MCNAPI ::std::optional<::BoundingBox> bounds() const;

    MCNAPI void clear(::Editor::Selection::EventSource eventSource);

    MCNAPI void moveTo(::Vec3 const& location, ::Editor::Selection::EventSource eventSource);

    MCNAPI ::Bedrock::PubSub::Subscription registerSelectionVolumeEventListener(
        ::std::function<void(::Editor::Selection::SelectionVolumeEvent const&)> callback
    );

    MCNAPI void translate(::Vec3 const& offset, ::Editor::Selection::EventSource eventSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Selection
