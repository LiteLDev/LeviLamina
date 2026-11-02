#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class HotbarCollectionActiveHotbarChangedPayload; }
namespace Editor::Network { class HotbarCollectionElementChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarRemovedPayload; }
namespace Editor::Network { class HotbarCollectionSelectedIndexChangedPayload; }
// clang-format on

namespace Editor {

class IHotbarCollectionPayloadHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _handleHotbarCollectionActiveHotbarChangedPayload(
        ::Editor::Network::HotbarCollectionActiveHotbarChangedPayload const&
    ) = 0;

    virtual void _handleHotbarCollectionSelectedIndexChangedPayload(
        ::Editor::Network::HotbarCollectionSelectedIndexChangedPayload const&
    ) = 0;

    virtual void
    _handleHotbarCollectionElementChangedPayload(::Editor::Network::HotbarCollectionElementChangedPayload const&) = 0;

    virtual void
    _handleHotbarCollectionHotbarChangedPayload(::Editor::Network::HotbarCollectionHotbarChangedPayload const&) = 0;

    virtual void
    _handleHotbarCollectionHotbarRemovedPayload(::Editor::Network::HotbarCollectionHotbarRemovedPayload const&) = 0;

    virtual void _handleHotbarCollectionHotbarDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarDisplayNameChangedPayload const&
    ) = 0;

    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) = 0;
    // NOLINTEND
};

} // namespace Editor
