#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
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

class RealmsUnknownPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfcb077;
    ::ll::UntypedStorage<1, 1>  mUnk811301;
    ::ll::UntypedStorage<8, 24> mUnk50ff23;
    ::ll::UntypedStorage<8, 64> mUnk7ccdc2;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsUnknownPackSource() /*override*/ = default;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback) /*override*/;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCNAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
