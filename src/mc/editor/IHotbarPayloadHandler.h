#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class HotbarCollectionElementChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarDisplayNameChangedPayload; }
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
// clang-format on

namespace Editor {

class IHotbarPayloadHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    _handleHotbarCollectionElementChangedPayload(::Editor::Network::HotbarCollectionElementChangedPayload const&) = 0;

    virtual void _handleHotbarCollectionHotbarDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarDisplayNameChangedPayload const&
    ) = 0;

    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) = 0;
    // NOLINTEND
};

} // namespace Editor
