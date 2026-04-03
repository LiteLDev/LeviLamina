#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/IReplicatedObjectBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class EditorReplicationContainerAddObjectPayload; }
namespace Editor::Network { class EditorReplicationContainerDeleteObjectPayload; }
// clang-format on

namespace Editor {

class IReplicatedContainerBase : public ::Editor::IReplicatedObjectBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleEditorReplicationContainerAddObjectPayload(
        ::Editor::Network::EditorReplicationContainerAddObjectPayload const&
    ) = 0;

    virtual void handleEditorReplicationContainerDeleteObjectPayload(
        ::Editor::Network::EditorReplicationContainerDeleteObjectPayload const&
    ) = 0;

    virtual ~IReplicatedContainerBase() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
