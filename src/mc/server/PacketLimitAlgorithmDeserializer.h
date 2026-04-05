#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/PacketGroupDefinition.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IPacketLimitAlgorithm;
namespace Json { class Value; }
// clang-format on

class PacketLimitAlgorithmDeserializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d7529;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLimitAlgorithmDeserializer& operator=(PacketLimitAlgorithmDeserializer const&);
    PacketLimitAlgorithmDeserializer(PacketLimitAlgorithmDeserializer const&);
    PacketLimitAlgorithmDeserializer();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::Result<::std::unique_ptr<::IPacketLimitAlgorithm>>
    _deserializeAlgorithm(::Json::Value& algorithmNode);

    MCNAPI ::Bedrock::Result<::PacketGroupDefinition::PacketGroupBuilder>
    _deserializePacketLimitConfig(::Json::Value& root);

    MCNAPI ::Bedrock::Result<::PacketGroupDefinition::PacketGroupBuilder> deserializePacketLimitConfig();

    MCNAPI ~PacketLimitAlgorithmDeserializer();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::PacketLimitAlgorithmDeserializer createFromDefaultLocation();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
