#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
// clang-format on

class BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::MolangVersion>                                     mMolangVersion;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>> mValidator;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, uchar>*>        mBrainMemoryValidationContext;
    ::ll::TypedStorage<1, 1, bool>                                                mHasBetaPermissionContext;
    ::ll::TypedStorage<1, 1, bool>                                                mCanLoadBeta;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BedrockLoadContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
