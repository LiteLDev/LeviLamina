#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DirectoryPackSource;
class IDynamicPackagePacks;
class InPackagePackSource;
class WorldHistoryPackSource;
class WorldTemplateManager;
class WorldTemplatePackSource;
struct PackIdVersion;
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class IPackSourceFactory {
public:
    // prevent constructor by default
    IPackSourceFactory& operator=(IPackSourceFactory const&);
    IPackSourceFactory(IPackSourceFactory const&);
    IPackSourceFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackSourceFactory() = default;

    // vIndex: 1
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager const> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    ) = 0;

    // vIndex: 2
    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const = 0;

    // vIndex: 3
    virtual ::DirectoryPackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool) = 0;

    // vIndex: 4
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const = 0;

    // vIndex: 5
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType) = 0;

    // vIndex: 6
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType) = 0;

    // vIndex: 7
    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType) = 0;

    // vIndex: 8
    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const = 0;

    // vIndex: 9
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const = 0;

    // vIndex: 10
    virtual void removeFromDirectoryPackSource(::Core::Path const&) = 0;

    // vIndex: 11
    virtual ::InPackagePackSource& createDynamicPackagePackSource(::PackType) = 0;

    // vIndex: 12
    virtual ::InPackagePackSource* getDynamicPackagePackSource(::PackType) = 0;

    // vIndex: 13
    virtual void setDynamicPackagePacks(::std::shared_ptr<::IDynamicPackagePacks> const&) = 0;

    // vIndex: 14
    virtual void setDynamicPackageRoot(::Core::PathBuffer<::std::string>) = 0;
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
