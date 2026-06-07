#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LinkedAssetValidator;
// clang-format on

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk7888ec;
    ::ll::UntypedStorage<8, 24> mUnk8ae26c;
    ::ll::UntypedStorage<8, 8>  mUnk6d4ee9;
    ::ll::UntypedStorage<1, 1>  mUnk722b9f;
    ::ll::UntypedStorage<1, 1>  mUnkc24318;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BedrockLoadContext(::MolangVersion molangVersion);

    MCNAPI
    BedrockLoadContext(::MolangVersion molangVersion, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

    MCNAPI bool canLoadBeta() const;

    MCNAPI ::std::unordered_map<::HashedString, uchar>* getBrainMemoryValidationContext();

    MCNAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> getLinkedAssetValidator();

    MCNAPI ::MolangVersion getMolangVersion() const;

    MCNAPI bool hasBetaPermissionContext() const;

    MCNAPI void setBetaLoadPermissionPolicy(bool isBaseGamePack, bool betaApis);

    MCNAPI ~BedrockLoadContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MolangVersion molangVersion);

    MCNAPI void* $ctor(::MolangVersion molangVersion, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
