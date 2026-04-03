#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackLoadStorage.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class PackInstance;
// clang-format on

class PackLoadContext : public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool>                mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool>                mIsTrustedPack;
    ::ll::TypedStorage<8, 16, ::mce::UUID>        mPackId;
    ::ll::TypedStorage<8, 72, ::Experiments>      mExperiments;
    ::ll::TypedStorage<1, 1, ::PackType>          mPackType;
    ::ll::TypedStorage<8, 64, ::PackLoadStorage>  mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackLoadContext(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ~PackLoadContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
