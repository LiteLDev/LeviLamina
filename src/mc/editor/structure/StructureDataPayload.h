#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

namespace Editor::Network {

class StructureDataPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb4467f;
    ::ll::UntypedStorage<8, 8>  mUnk184b99;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataPayload& operator=(StructureDataPayload const&);
    StructureDataPayload(StructureDataPayload const&);
    StructureDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureDataPayload() /*override*/;

    // vIndex: 2
    virtual bool load(::CompoundTag const* tag) /*override*/;

    // vIndex: 3
    virtual ::CompoundTag save() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $load(::CompoundTag const* tag);

    MCAPI ::CompoundTag $save() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
