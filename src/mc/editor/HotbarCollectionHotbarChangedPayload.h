#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class HotbarCollectionHotbarChangedPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::HotbarCollectionHotbarChangedPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk8e93c3;
    ::ll::UntypedStorage<8, 952> mUnk8f5063;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarCollectionHotbarChangedPayload& operator=(HotbarCollectionHotbarChangedPayload const&);
    HotbarCollectionHotbarChangedPayload(HotbarCollectionHotbarChangedPayload const&);
    HotbarCollectionHotbarChangedPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarCollectionHotbarChangedPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
