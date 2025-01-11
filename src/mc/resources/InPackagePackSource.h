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
class IInPackagePacks;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
// clang-format on

class InPackagePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2affad;
    ::ll::UntypedStorage<1, 1>  mUnk2f70be;
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
    virtual ~InPackagePackSource() /*override*/;

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
    MCAPI InPackagePackSource(::std::shared_ptr<::IInPackagePacks> const& packs, ::PackType packType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::IInPackagePacks> const& packs, ::PackType packType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCFOLD void $forEachPack(::std::function<void(::Pack&)> callback);

    MCFOLD ::PackOrigin $getPackOrigin() const;

    MCAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );

    MCFOLD ::PackType $getPackType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
