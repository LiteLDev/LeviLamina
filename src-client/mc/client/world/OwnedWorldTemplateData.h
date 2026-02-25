#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTemplatePackManifest;
struct IEntitlementManager;
struct StoreCatalogItem;
struct WorldTemplateInfo;
// clang-format on

namespace World {

struct OwnedWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                     mLocalId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mMarketplaceId;
    ::ll::TypedStorage<8, 32, ::std::string>                     mName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mThumbnailPath;
    ::ll::TypedStorage<1, 1, bool>                               mIsLocked;
    ::ll::TypedStorage<1, 1, bool>                               mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>                               mIsPremium;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCreator;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateData(OwnedWorldTemplateData const&);
    OwnedWorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateData(::World::OwnedWorldTemplateData&&);

    MCAPI ::std::string const& getCreator() const;

    MCAPI ::World::OwnedWorldTemplateData& operator=(::World::OwnedWorldTemplateData const&);

    MCAPI ~OwnedWorldTemplateData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    _formatPackKeyword(::std::string const& rawName, ::WorldTemplatePackManifest const& manifest);

    MCAPI static ::World::OwnedWorldTemplateData fromStoreCatalogItem(::StoreCatalogItem const& itemData);

    MCAPI static ::World::OwnedWorldTemplateData fromWorldTemplateInfo(
        ::WorldTemplateInfo const&                           templateData,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> DEFAULT_UNKNOWN_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::OwnedWorldTemplateData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
