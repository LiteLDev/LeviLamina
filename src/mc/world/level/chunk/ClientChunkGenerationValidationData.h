#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
// clang-format on

struct ClientChunkGenerationValidationData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb6b9bf;
    ::ll::UntypedStorage<1, 1>  mUnk4be317;
    ::ll::UntypedStorage<8, 64> mUnk71bef6;
    ::ll::UntypedStorage<1, 1>  mUnk331d2d;
    ::ll::UntypedStorage<8, 64> mUnka215c2;
    ::ll::UntypedStorage<8, 8>  mUnk681ba0;
    ::ll::UntypedStorage<8, 16> mUnk6aa332;
    ::ll::UntypedStorage<8, 16> mUnk79a67d;
    ::ll::UntypedStorage<4, 48> mUnkca0f1b;
    ::ll::UntypedStorage<4, 4>  mUnk89db48;
    ::ll::UntypedStorage<1, 1>  mUnkba7009;
    ::ll::UntypedStorage<1, 1>  mUnkaa2148;
    ::ll::UntypedStorage<1, 1>  mUnkd49d46;
    ::ll::UntypedStorage<2, 2>  mUnk831eb3;
    ::ll::UntypedStorage<8, 8>  mUnke504b8;
    ::ll::UntypedStorage<8, 8>  mUnk1db7ab;
    ::ll::UntypedStorage<1, 1>  mUnk3e7b50;
    ::ll::UntypedStorage<1, 1>  mUnkdd4995;
    ::ll::UntypedStorage<1, 1>  mUnk8d7bf0;
    ::ll::UntypedStorage<1, 1>  mUnk9a10c5;
    ::ll::UntypedStorage<1, 1>  mUnkadba9e;
    ::ll::UntypedStorage<4, 4>  mUnk476b36;
    ::ll::UntypedStorage<8, 40> mUnkdfc828;
    ::ll::UntypedStorage<8, 40> mUnk728d9d;
    ::ll::UntypedStorage<8, 8>  mUnk1fa013;
    ::ll::UntypedStorage<1, 1>  mUnka79a81;
    ::ll::UntypedStorage<1, 1>  mUnkbb8a1f;
    ::ll::UntypedStorage<4, 4>  mUnkab8adb;
    ::ll::UntypedStorage<8, 24> mUnkef82dd;
    ::ll::UntypedStorage<8, 8>  mUnkd84d6b;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientChunkGenerationValidationData& operator=(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientChunkGenerationValidationData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _captureChunkData(::std::map<::ChunkPos, ::std::vector<::std::string>>& data, ::ChunkSource& chunkSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
