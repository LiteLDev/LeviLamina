#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
// clang-format on

namespace Editor {

class IHotbarElementPayloadHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) = 0;
    // NOLINTEND
};

} // namespace Editor
