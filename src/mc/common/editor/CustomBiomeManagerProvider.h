#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ICustomBiomeSource;
struct CustomBiomeSourceConfig;
namespace mce { class UUID; }
// clang-format on

namespace Editor {

class CustomBiomeManagerProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomBiomeManagerProvider() = default;

    virtual ::WeakRef<::ICustomBiomeSource> buildCustomSource(::CustomBiomeSourceConfig const& config) = 0;

    virtual bool destroyCustomSource(::mce::UUID id) = 0;

    virtual ::WeakRef<::ICustomBiomeSource> getCustomSource(::mce::UUID const& id) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
