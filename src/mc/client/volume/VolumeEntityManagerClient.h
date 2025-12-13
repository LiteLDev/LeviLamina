#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/volume/VolumeEntityManager.h"

// auto generated forward declare list
// clang-format off
class AddVolumeEntityPacket;
struct FogDefinitionRegistry;
// clang-format on

class VolumeEntityManagerClient : public ::VolumeEntityManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VolumeEntityManagerClient() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void createVolume(::AddVolumeEntityPacket const& packet, ::FogDefinitionRegistry const& fogRegistry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
