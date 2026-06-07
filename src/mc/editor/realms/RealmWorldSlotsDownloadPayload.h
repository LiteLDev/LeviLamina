#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RealmWorldSlotsDownloadPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RealmWorldSlotsDownloadPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk990b0c;
    ::ll::UntypedStorage<4, 4>  mUnka21459;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldSlotsDownloadPayload& operator=(RealmWorldSlotsDownloadPayload const&);
    RealmWorldSlotsDownloadPayload(RealmWorldSlotsDownloadPayload const&);
    RealmWorldSlotsDownloadPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldSlotsDownloadPayload() /*override*/ = default;
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
