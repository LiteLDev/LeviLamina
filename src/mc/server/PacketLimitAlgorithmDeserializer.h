#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/PacketGroupDefinition.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
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
#ifdef LL_PLAT_C
    MCNAPI explicit PacketLimitAlgorithmDeserializer(::Core::Path const& filePath);
#endif

    MCNAPI ::Bedrock::Result<::PacketGroupDefinition::PacketGroupBuilder> deserializePacketLimitConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::PacketLimitAlgorithmDeserializer createFromDefaultLocation();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND
};
