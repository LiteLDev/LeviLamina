#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSource.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ContentCatalogPackSource : public ::IContentCatalogPackSource,
                                 public ::std::enable_shared_from_this<::ContentCatalogPackSource> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk3e7587;
    ::ll::UntypedStorage<1, 1>   mUnk7bd7f0;
    ::ll::UntypedStorage<8, 24>  mUnk8d3c13;
    ::ll::UntypedStorage<8, 128> mUnk9dc461;
    ::ll::UntypedStorage<1, 1>   mUnke4c06f;
    ::ll::UntypedStorage<1, 1>   mUnk995e7a;
    ::ll::UntypedStorage<8, 16>  mUnk86a824;
    ::ll::UntypedStorage<8, 8>   mUnk25db7d;
    ::ll::UntypedStorage<8, 8>   mUnkbe2d49;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentCatalogPackSource& operator=(ContentCatalogPackSource const&);
    ContentCatalogPackSource(ContentCatalogPackSource const&);
    ContentCatalogPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContentCatalogPackSource() /*override*/ = default;

    // vIndex: 8
    virtual void setEnabled(bool) /*override*/;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)>) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)>) /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport
    load(::IPackManifestFactory&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&) /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 7
    virtual ::Bedrock::PubSub::Subscription setAsyncCallback(::std::function<void(bool)>) /*override*/;

    // vIndex: 6
    virtual void refreshCatalogItems(::IPackManifestFactory&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
