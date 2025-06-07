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
struct PackSourceOptions;
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

class PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbebb21;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&);
    PackSource(PackSource const&);
    PackSource();

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
    MCNAPI explicit PackSource(::PackSourceOptions options);

    MCNAPI void resolveUpgradeDependencies(::Pack& pack, ::PackCommand::UpgradeLegacyDependenciesBatch& commands);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackSourceOptions options);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
