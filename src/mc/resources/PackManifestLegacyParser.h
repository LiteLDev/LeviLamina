#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackManifestFormat.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class SemVersion;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PackManifestLegacyParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isHiddenPack(::mce::UUID const& packUuid);

    MCNAPI static ::Json::Value parseHeader(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        bool                         allowVersionStrings,
        ::std::string const&         versionKey,
        ::std::string const&         idKey,
        ::PackManifestFormat         formatVersion
    );

    MCNAPI static void parseLegacyModuleDependencies(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        ::std::string const&         dependenciesKey
    );

    MCNAPI static void parseMetadata(
        ::Json::Value const&          root,
        ::std::vector<::std::string>& errorPath,
        ::PackManifest&               manifest,
        ::PackReport&                 report,
        bool                          allowWarnings
    );

    MCNAPI static void parseModules(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        bool                         allowVersionStrings
    );

    MCNAPI static void processBaseGameVersion(
        ::PackManifest&              manifest,
        ::PackReport&                report,
        ::BaseGameVersion const&     requiredBaseGameSemVersion,
        ::PackManifestFormat         formatVersion,
        ::std::vector<::std::string> errorPath
    );

    MCNAPI static void processCapability(
        ::PackManifest&                 manifest,
        ::PackReport&                   report,
        ::std::string const             capability,
        ::PackCapabilityRegistry const& packCapabilityRegistry
    );

    MCNAPI static ::mce::UUID readUUIDAndReport(
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::string const&          seed,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report,
        bool                          allowWarnings
    );

    MCNAPI static ::SemVersion readVersionAndReport(
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report,
        bool                          allowWarnings,
        bool                          allowVersionStrings
    );

    MCNAPI static void resolveDuplicateUUIDs(
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings
    );
    // NOLINTEND
};
