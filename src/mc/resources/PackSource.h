#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
// clang-format on

class PackSource {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSource() = 0;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)>) const = 0;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)>) = 0;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual ::PackSourceReport
    load(::IPackManifestFactory&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void resolveUpgradeDependencies(
        ::Pack&                                                           pack,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::PackOrigin $getPackOrigin() const;

    MCAPI ::PackType $getPackType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
