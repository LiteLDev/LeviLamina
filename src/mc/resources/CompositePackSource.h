#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
// clang-format on

class CompositePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PackSource*>> mPackSources;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompositePackSource() /*override*/ = default;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)> callback) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)> callback) /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    ) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $forEachPackConst(::std::function<void(::Pack const&)> callback) const;

    MCAPI void $forEachPack(::std::function<void(::Pack&)> callback);

    MCAPI ::PackSourceReport $load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
