#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManagerContentQueries;
class IPackManifestFactory;
class PackSettingsFactory;
struct PackManagerContentSourceData;
// clang-format on

struct PackManagerContentSourceArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType>                                               mType;
    ::ll::TypedStorage<8, 8, ::ContentFlags>                                              mFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackManagerContentSourceData>>              mData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPackManagerContentQueries>>             mQueries;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                                     mManifestFactory;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory&>                                      mSettingsFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceArgs& operator=(PackManagerContentSourceArgs const&);
    PackManagerContentSourceArgs(PackManagerContentSourceArgs const&);
    PackManagerContentSourceArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackManagerContentSourceArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
