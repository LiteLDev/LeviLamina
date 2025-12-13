#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class EntityContext;
class MinEngineVersion;
// clang-format on

struct AddVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke6567c;
    ::ll::UntypedStorage<8, 32> mUnkc33295;
    ::ll::UntypedStorage<8, 32> mUnk5084a3;
    ::ll::UntypedStorage<4, 12> mUnk340da3;
    ::ll::UntypedStorage<4, 12> mUnkaff214;
    ::ll::UntypedStorage<4, 4>  mUnkb9dbc4;
    ::ll::UntypedStorage<8, 32> mUnk281700;
    ::ll::UntypedStorage<4, 4>  mUnk977687;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AddVolumeEntityPacketPayload();

    MCNAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload&&);

    MCNAPI AddVolumeEntityPacketPayload(::AddVolumeEntityPacketPayload const& other);

    MCNAPI AddVolumeEntityPacketPayload(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );

    MCNAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload&&);

    MCNAPI ::AddVolumeEntityPacketPayload& operator=(::AddVolumeEntityPacketPayload const& other);

    MCNAPI ~AddVolumeEntityPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::AddVolumeEntityPacketPayload&&);

    MCNAPI void* $ctor(::AddVolumeEntityPacketPayload const& other);

    MCNAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
