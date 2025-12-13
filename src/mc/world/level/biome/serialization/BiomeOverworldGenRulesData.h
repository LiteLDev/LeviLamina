#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeOverworldGenRulesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka6216e;
    ::ll::UntypedStorage<8, 24> mUnk2c7578;
    ::ll::UntypedStorage<8, 24> mUnke25af6;
    ::ll::UntypedStorage<8, 24> mUnkcf3ff4;
    ::ll::UntypedStorage<8, 24> mUnkece971;
    ::ll::UntypedStorage<8, 24> mUnk304e08;
    ::ll::UntypedStorage<8, 24> mUnk27d1cc;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeOverworldGenRulesData& operator=(BiomeOverworldGenRulesData const&);
    BiomeOverworldGenRulesData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData&&);

    MCNAPI BiomeOverworldGenRulesData(::BiomeOverworldGenRulesData const&);

    MCNAPI ::BiomeOverworldGenRulesData& operator=(::BiomeOverworldGenRulesData&&);

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~BiomeOverworldGenRulesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeOverworldGenRulesData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeOverworldGenRulesData&&);

    MCNAPI void* $ctor(::BiomeOverworldGenRulesData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
