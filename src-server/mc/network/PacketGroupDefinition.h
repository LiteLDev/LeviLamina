#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"

// auto generated forward declare list
// clang-format off
class IPacketLimitAlgorithm;
// clang-format on

class PacketGroupDefinition {
public:
    // PacketGroupDefinition inner types declare
    // clang-format off
    struct PacketGroupBuilder;
    // clang-format on

    // PacketGroupDefinition inner types define
    struct PacketGroupBuilder {
    public:
        // PacketGroupBuilder inner types declare
        // clang-format off
        struct AlgorithmEntry;
        // clang-format on

        // PacketGroupBuilder inner types define
        struct AlgorithmEntry {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftPacketIds>>       packetIds;
            ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> algorithm;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::MinecraftPacketIds, ::std::vector<::std::unique_ptr<::IPacketLimitAlgorithm>>>>
                                                                             mBasicPacketGroups;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> mDefaultAlgorithm;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketGroupBuilder& operator=(PacketGroupBuilder const&);
        PacketGroupBuilder(PacketGroupBuilder const&);
        PacketGroupBuilder();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PacketGroupBuilder(::PacketGroupDefinition::PacketGroupBuilder&&);

        MCAPI ::std::unique_ptr<::PacketGroupDefinition> createGroupDefinition() const;

        MCAPI ~PacketGroupBuilder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::PacketGroupDefinition::PacketGroupBuilder&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::MinecraftPacketIds, ::std::unique_ptr<::IPacketLimitAlgorithm>>>
                                                                         mPacketGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPacketLimitAlgorithm>> mDefaultAlgorithm;
    // NOLINTEND
};
