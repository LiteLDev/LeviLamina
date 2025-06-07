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
struct InPackagePackSourceOptions;
// clang-format on

class InPackagePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3f8820;
    ::ll::UntypedStorage<1, 1>  mUnk5a812f;
    ::ll::UntypedStorage<1, 1>  mUnkf76cd7;
    ::ll::UntypedStorage<8, 24> mUnk8c0083;
    ::ll::UntypedStorage<8, 64> mUnka6bb16;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSource& operator=(InPackagePackSource const&);
    InPackagePackSource(InPackagePackSource const&);
    InPackagePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InPackagePackSource() /*override*/ = default;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback) /*override*/;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InPackagePackSource(::InPackagePackSourceOptions options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InPackagePackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCNAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCNAPI ::PackType $getPackType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
