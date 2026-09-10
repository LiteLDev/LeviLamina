#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class UserImageData; }
namespace mce { class UUID; }
// clang-format on

namespace OreUI {

class IMinimapResourceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinimapResourceProvider() = default;

    virtual bool prepareUserImage(::mce::UUID const& minimapId, ::Gameface::UserImageData& userImageData) = 0;

    virtual void updateMinimap(::mce::UUID const& minimapId) = 0;

    virtual void update() = 0;
    // NOLINTEND
};

} // namespace OreUI
