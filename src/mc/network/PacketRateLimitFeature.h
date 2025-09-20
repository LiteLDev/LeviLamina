#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/PacketGroupDefinition.h"

class PacketRateLimitFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk49ad54;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketRateLimitFeature& operator=(PacketRateLimitFeature const&);
    PacketRateLimitFeature(PacketRateLimitFeature const&);
    PacketRateLimitFeature();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PacketRateLimitFeature(
        ::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::PacketGroupDefinition::PacketGroupBuilder> packetGroupBuilder);
    // NOLINTEND
};
