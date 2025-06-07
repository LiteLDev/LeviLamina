#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeDefinitionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 4>   mUnk67b62a;
    ::ll::UntypedStorage<4, 4>   mUnk96e0f9;
    ::ll::UntypedStorage<4, 4>   mUnk74d490;
    ::ll::UntypedStorage<4, 4>   mUnk12d4aa;
    ::ll::UntypedStorage<4, 4>   mUnk42c981;
    ::ll::UntypedStorage<4, 4>   mUnkd3343f;
    ::ll::UntypedStorage<4, 4>   mUnk6e6366;
    ::ll::UntypedStorage<4, 4>   mUnk7524be;
    ::ll::UntypedStorage<4, 4>   mUnk1ff9b3;
    ::ll::UntypedStorage<4, 4>   mUnkcdd940;
    ::ll::UntypedStorage<1, 1>   mUnkace5ad;
    ::ll::UntypedStorage<8, 32>  mUnkd819cb;
    ::ll::UntypedStorage<8, 520> mUnkd33429;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDefinitionData& operator=(BiomeDefinitionData const&);
    BiomeDefinitionData(BiomeDefinitionData const&);
    BiomeDefinitionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeDefinitionData(::BiomeDefinitionData&&);

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~BiomeDefinitionData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeDefinitionData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeDefinitionData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
