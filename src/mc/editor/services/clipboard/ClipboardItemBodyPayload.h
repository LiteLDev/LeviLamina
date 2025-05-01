#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class ClipboardItemBodyPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::ClipboardItemBodyPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb65e5a;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardItemBodyPayload& operator=(ClipboardItemBodyPayload const&);
    ClipboardItemBodyPayload(ClipboardItemBodyPayload const&);
    ClipboardItemBodyPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool load(::CompoundTag const* tag) /*override*/;

    // vIndex: 3
    virtual ::CompoundTag save() const /*override*/;

    // vIndex: 0
    virtual ~ClipboardItemBodyPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClipboardItemBodyPayload(::mce::UUID const& itemId, ::CompoundTag&& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const& itemId, ::CompoundTag&& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::CompoundTag const* tag);

    MCNAPI ::CompoundTag $save() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
