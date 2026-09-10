#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/FeatureFlagCategory.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class FeatureFlagChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::FeatureFlagChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3f403b;
    ::ll::UntypedStorage<1, 1>  mUnkffc2e6;
    ::ll::UntypedStorage<4, 4>  mUnk861c4a;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureFlagChangedPayload& operator=(FeatureFlagChangedPayload const&);
    FeatureFlagChangedPayload(FeatureFlagChangedPayload const&);
    FeatureFlagChangedPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureFlagChangedPayload(::std::string const& name, bool value, ::Editor::FeatureFlagCategory category);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name, bool value, ::Editor::FeatureFlagCategory category);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
