#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/resources/PackLoadStorage.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class LinkedAssetValidator;
class PackInstance;
// clang-format on

class PackLoadContext : public ::PackLoadInfo, public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    ::ll::TypedStorage<1, 1, ::PackType>          mPackType;
    ::ll::TypedStorage<8, 64, ::PackLoadStorage>  mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackLoadContext(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

#ifdef LL_PLAT_C
    MCNAPI PackLoadContext(
        ::PackLoadInfo const&                              packLoadInfo,
        ::MinEngineVersion const&                          minEngineVersion,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
#endif

    MCNAPI ~PackLoadContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::PackLoadInfo const&                              packLoadInfo,
        ::MinEngineVersion const&                          minEngineVersion,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
