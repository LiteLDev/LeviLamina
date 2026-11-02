#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManagerContentQueries;
class IPackManifestFactory;
class Pack;
class PackSettingsFactory;
struct ContentItem;
struct PackContentItem;
struct PackManagerContentSourceData;
struct PackModel;
// clang-format on

struct PackManagerContentSource : public ::ContentSource {
public:
    // PackManagerContentSource inner types define
    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

    using PackData = ::PackManagerContentSourceData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType const>                                         mContentType;
    ::ll::TypedStorage<8, 8, ::ContentFlags const>                                        mFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackManagerContentSourceData>>              mPackData;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem>>>        mPackDataContent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPackManagerContentQueries> const>       mQueries;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                                     mManifestFactory;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory&>                                      mSettingsFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSource& operator=(PackManagerContentSource const&);
    PackManagerContentSource(PackManagerContentSource const&);
    PackManagerContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual void
    _createSelectedPackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& selected);

    virtual void
    _createAvailablePackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& available);

    virtual ~PackManagerContentSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::PackContentItem> _copyAndSetValuesFromPackContentItemAndData(
        ::std::shared_ptr<::PackContentItem const> const& baseItem,
        ::PackManagerContentSourceData const&             packData
    );

    MCNAPI ::std::shared_ptr<::PackContentItem> _createPackContentItem(
        ::Pack const&                                      pack,
        ::PackModel&                                       model,
        ::PackListType                                     listType,
        uint64                                             position,
        ::std::optional<::std::string>                     worldId,
        ::std::optional<::Core::PathBuffer<::std::string>> worldPath
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _applySelectedPacksCache(
        ::PackManagerContentSourceData& packData,
        ::std::vector<::PackModel>&     selected,
        ::std::vector<::PackModel>&     available
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load();

    MCNAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCNAPI void
    $_createSelectedPackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& selected);

    MCNAPI void
    $_createAvailablePackContentItems(::PackManagerContentSourceData& packData, ::std::vector<::PackModel>& available);
    // NOLINTEND
};
