#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
class ResourcePackFileUploadManager;
class Scheduler;
// clang-format on

class ResourcePackTransmissionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8b9b11;
    ::ll::UntypedStorage<8, 64> mUnkeeeb64;
    ::ll::UntypedStorage<8, 64> mUnkc4af3e;
    ::ll::UntypedStorage<8, 64> mUnk9a75b2;
    ::ll::UntypedStorage<8, 8>  mUnka6d677;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackTransmissionManager& operator=(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourcePackTransmissionManager(::Scheduler& scheduler);

    MCAPI void cleanupResourcePackManager(::NetworkIdentifier const& source);

    MCAPI ::ResourcePackFileUploadManager& getResourcePackUploadManager(
        ::PacketSender&            packetSender,
        ::NetworkIdentifier const& source,
        ::std::string const&       resourceName
    );

    MCAPI void update();

    MCAPI ~ResourcePackTransmissionManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scheduler& scheduler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
