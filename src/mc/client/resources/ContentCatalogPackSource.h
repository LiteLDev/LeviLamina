#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
// clang-format on

class ContentCatalogPackSource : public ::PackSource,
                                 public ::std::enable_shared_from_this<::ContentCatalogPackSource> {
public:
    // ContentCatalogPackSource inner types define
    enum class FetchingState : int {
        Start   = 0,
        Running = 1,
        Done    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3f5377;
    ::ll::UntypedStorage<8, 24> mUnk3e7587;
    ::ll::UntypedStorage<8, 8>  mUnk25db7d;
    ::ll::UntypedStorage<1, 1>  mUnk7bd7f0;
    ::ll::UntypedStorage<4, 4>  mUnke67cf9;
    ::ll::UntypedStorage<4, 4>  mUnk1d7803;
    ::ll::UntypedStorage<8, 24> mUnk8d3c13;
    ::ll::UntypedStorage<8, 24> mUnkaf5e0d;
    ::ll::UntypedStorage<8, 64> mUnk9dfc61;
    ::ll::UntypedStorage<1, 1>  mUnkd3e2b9;
    ::ll::UntypedStorage<1, 1>  mUnk2923b0;
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

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)>) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)>) /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport
    load(::IPackManifestFactory&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&) /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
