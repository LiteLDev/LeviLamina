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
class SubpackInfoCollection;
namespace Core { class Path; }
// clang-format on

class PackManifestFactory : public ::IPackManifestFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3137ce;
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
#ifdef LL_PLAT_S
    virtual ~PackManifestFactory() /*override*/;
#else // LL_PLAT_C
    virtual ~PackManifestFactory() /*override*/ = default;
#endif

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
    MCNAPI PackManifestFactory(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);

    MCNAPI void _setAndCachePackSize(
        ::PackManifest&           manifest,
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location
    );

    MCNAPI ::std::unique_ptr<::PackManifest>
    _upgradeToWorldTemplateManifest(::PackAccessStrategy const& accessStrategy, ::PackManifest&& inputPack);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& MANIFEST_PACK_UUID_UPGRADE_SALT();

    MCNAPI static ::Core::Path const& MANIFEST_PATH();

    MCNAPI static ::Core::Path const& MANIFEST_PATH_OLD();

    MCNAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mAlternateContentKeys();

    MCNAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mContentKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::PackManifest> $create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
