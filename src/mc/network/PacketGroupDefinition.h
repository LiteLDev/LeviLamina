#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

struct PacketGroupDefinition {
public:
    // PacketGroupDefinition inner types declare
    // clang-format off
    struct PacketGroupBuilder;
    // clang-format on

    // PacketGroupDefinition inner types define
    struct PacketGroupBuilder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkde86e3;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketGroupBuilder& operator=(PacketGroupBuilder const&);
        PacketGroupBuilder(PacketGroupBuilder const&);
        PacketGroupBuilder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void build(::PacketGroupDefinition* packetGroup);

        MCNAPI ~PacketGroupBuilder();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk4de585;
    ::ll::UntypedStorage<8, 16> mUnk33b60d;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketGroupDefinition& operator=(PacketGroupDefinition const&);
    PacketGroupDefinition(PacketGroupDefinition const&);
    PacketGroupDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint checkPacket(::MinecraftPacketIds packetId) const;

    MCNAPI void initGroups();

    MCNAPI ~PacketGroupDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
