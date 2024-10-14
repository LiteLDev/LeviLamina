#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackTransmissionManager {
public:
    // prevent constructor by default
    ResourcePackTransmissionManager& operator=(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager();

public:
    // NOLINTBEGIN
    MCAPI explicit ResourcePackTransmissionManager(class Scheduler& scheduler);

    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const& source);

    MCAPI class ResourcePackFileUploadManager& getResourcePackUploadManager(
        class PacketSender&            packetSender,
        class NetworkIdentifier const& source,
        std::string const&             resourceName
    );

    MCAPI void update();

    MCAPI ~ResourcePackTransmissionManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
