#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/editor/IEditorRegistry.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct EditorHotbarCollectionEventActiveHotbarChanged; }
namespace Editor { struct EditorHotbarCollectionEventElementUpdated; }
namespace Editor { struct EditorHotbarCollectionEventHotbarDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarElementDisplayNameChanged; }
namespace Editor { struct EditorHotbarCollectionEventHotbarRemoved; }
namespace Editor { struct EditorHotbarCollectionEventHotbarUpdated; }
namespace Editor { struct EditorHotbarCollectionEventSelectedIndexChanged; }
namespace Editor::Network { class PayloadServiceProvider; }
// clang-format on

namespace Editor {

class IHotbarCollection : public ::Bedrock::EnableNonOwnerReferences, public ::Editor::IEditorRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _tryDispatchEvent(
        ::std::variant<
            ::Editor::EditorHotbarCollectionEventActiveHotbarChanged,
            ::Editor::EditorHotbarCollectionEventHotbarUpdated,
            ::Editor::EditorHotbarCollectionEventHotbarRemoved,
            ::Editor::EditorHotbarCollectionEventHotbarDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventHotbarElementDisplayNameChanged,
            ::Editor::EditorHotbarCollectionEventElementUpdated,
            ::Editor::EditorHotbarCollectionEventSelectedIndexChanged> const&
    ) const = 0;

    virtual ::Editor::Network::PayloadServiceProvider* _getPayloadServiceProvider() const = 0;

    virtual bool _isServerSide() const = 0;
    // NOLINTEND
};

} // namespace Editor
