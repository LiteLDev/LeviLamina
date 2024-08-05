#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/interface/IPackManifestFactory.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackManifestFactory : public ::IPackManifestFactory {
public:
    // prevent constructor by default
    PackManifestFactory& operator=(PackManifestFactory const&);
    PackManifestFactory(PackManifestFactory const&);
    PackManifestFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackManifestFactory();

    // vIndex: 1
    virtual std::unique_ptr<class PackManifest> create(
        class PackAccessStrategy&     accessStrategy,
        class ResourceLocation const& location,
        class PackReport&             report,
        class SubpackInfoCollection*  subpackInfoStack
    );

    MCAPI PackManifestFactory(class PackCapabilityRegistry const&, class IPackTelemetry& eventing);

    MCAPI std::unique_ptr<class PackManifest> create(
        class PackAccessStrategy& accessStrategy,
        std::string const&        manifestContent,
        class PackReport&         report,
        std::unique_ptr<class PackManifest>,
        class SubpackInfoCollection* subpackInfoStack
    );

    MCAPI static std::string contentKeyLookup(std::string const& packIdentity);

    MCAPI static class Core::Path const MANIFEST_LOG_PATH;

    MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;

    MCAPI static class Core::Path const MANIFEST_PATH;

    MCAPI static class Core::Path const MANIFEST_PATH_OLD;

    MCAPI static class Core::Path const MANIFEST_PATH_OLD_BACKUP;

    MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;

    MCAPI static std::unordered_map<std::string, std::vector<char> const> mAlternateContentKeys;

    MCAPI static std::unordered_map<std::string, std::vector<char> const> mContentKeys;

    // NOLINTEND
};
