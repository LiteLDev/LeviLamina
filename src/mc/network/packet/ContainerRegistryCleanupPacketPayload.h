#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on

struct ContainerRegistryCleanupPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FullContainerName>> mRemovedContainers;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerRegistryCleanupPacketPayload& operator=(ContainerRegistryCleanupPacketPayload const&);
    ContainerRegistryCleanupPacketPayload(ContainerRegistryCleanupPacketPayload const&);
    ContainerRegistryCleanupPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ContainerRegistryCleanupPacketPayload& operator=(::ContainerRegistryCleanupPacketPayload&&);

    MCNAPI ~ContainerRegistryCleanupPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
