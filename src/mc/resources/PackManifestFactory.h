#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/interface/IPackManifestFactory.h"

// auto generated forward declare list
// clang-format off
class IPackTelemetry;
class PackAccessStrategy;
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class ResourceLocation;
class SemVersion;
class SubpackInfoCollection;
namespace Core { class Path; }
// clang-format on

class PackManifestFactory : public ::IPackManifestFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6440d6;
    ::ll::UntypedStorage<8, 8>  mUnk89c744;
    ::ll::UntypedStorage<8, 8>  mUnk4c2c4c;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestFactory& operator=(PackManifestFactory const&);
    PackManifestFactory(PackManifestFactory const&);
    PackManifestFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackManifestFactory() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest> create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManifestFactory(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);

    MCAPI ::std::unique_ptr<::PackManifest> create(
        ::PackAccessStrategy&             accessStrategy,
        ::std::string const&              manifestContent,
        ::PackReport&                     report,
        ::std::unique_ptr<::PackManifest> sourceManifest,
        ::SubpackInfoCollection*          subpackInfoStack
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string contentKeyLookup(::std::string const& packIdentity);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::Path const& MANIFEST_LOG_PATH();

    MCAPI static ::std::string const& MANIFEST_PACK_UUID_UPGRADE_SALT();

    MCAPI static ::Core::Path const& MANIFEST_PATH();

    MCAPI static ::Core::Path const& MANIFEST_PATH_OLD();

    MCAPI static ::Core::Path const& MANIFEST_PATH_OLD_BACKUP();

    MCAPI static ::SemVersion const& REQUIRED_VANILLA_FOR_OLD_PACKS();

    MCAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mAlternateContentKeys();

    MCAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mContentKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::PackManifest> $create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
