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
            ::ll::UntypedStorage<8, 24> mUnkba3aea;
            ::ll::UntypedStorage<8, 8>  mUnk6e83d8;
            // NOLINTEND

        public:
            // prevent constructor by default
            AlgorithmEntry& operator=(AlgorithmEntry const&);
            AlgorithmEntry(AlgorithmEntry const&);
            AlgorithmEntry();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkec09d3;
        ::ll::UntypedStorage<8, 8>  mUnkcc0635;
        // NOLINTEND

    public:
        // prevent constructor by default
        PacketGroupBuilder& operator=(PacketGroupBuilder const&);
        PacketGroupBuilder(PacketGroupBuilder const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PacketGroupBuilder();

        MCNAPI PacketGroupBuilder(::PacketGroupDefinition::PacketGroupBuilder&&);

        MCNAPI void addPacketAlgorithm(
            ::std::vector<::MinecraftPacketIds> const& packetIds,
            ::std::unique_ptr<::IPacketLimitAlgorithm> algorithm
        );

        MCNAPI ::std::unique_ptr<::PacketGroupDefinition> createGroupDefinition() const;

        MCNAPI void setDefaultAlgorithm(::std::unique_ptr<::IPacketLimitAlgorithm> algorithm);

        MCNAPI ~PacketGroupBuilder();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::PacketGroupDefinition::PacketGroupBuilder&&);
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
    ::ll::UntypedStorage<8, 64> mUnk36ad52;
    ::ll::UntypedStorage<8, 8>  mUnk5e6ab5;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketGroupDefinition& operator=(PacketGroupDefinition const&);
    PacketGroupDefinition(PacketGroupDefinition const&);
    PacketGroupDefinition();
};
