#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/versionless/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
// clang-format on

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk7888ec;
    ::ll::UntypedStorage<8, 24> mUnk8ae26c;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BedrockLoadContext(::MolangVersion molangVersion, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

    MCNAPI ::BedrockLoadContext& operator=(::BedrockLoadContext&&);

    MCNAPI ~BedrockLoadContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVersion molangVersion, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
