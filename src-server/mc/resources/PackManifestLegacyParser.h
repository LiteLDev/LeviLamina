#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackManifestFormat.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class PackCapabilityRegistry;
class PackManifest;
class PackReport;
class SemVersion;
class SubpackInfoCollection;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class PackManifestLegacyParser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isHiddenPack(::mce::UUID const& packUuid);

    MCNAPI static void parseBaseGameVersionRequired(
        ::Json::Value const&         header,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        ::PackManifestFormat         formatVersion
    );

    MCNAPI static void parseCapabilities(
        ::PackCapabilityRegistry const& packCapabilityRegistry,
        ::Json::Value const&            root,
        ::std::vector<::std::string>    errorPath,
        ::PackManifest&                 manifest,
        ::PackReport&                   report,
        bool                            allowWarnings
    );

    MCNAPI static void parseDependencies(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        bool                         allowWarnings,
        bool                         allowVersionStrings
    );

    MCNAPI static void parseHasEducationMetadata(
        ::Json::Value const&          root,
        ::std::vector<::std::string>& errorPath,
        ::PackManifest&               manifest,
        ::PackReport&                 report,
        bool                          allowWarnings
    );

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

    MCNAPI static ::PackManifestFormat
    parseManifestSyntax(::std::string const& manifestContent, ::Json::Value& root, ::PackReport& report);

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

    MCNAPI static void parseOptionLockedStateRequired(
        ::Json::Value const&         header,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report,
        ::PackManifestFormat         formatVersion
    );

    MCNAPI static void parseSettings(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::PackManifest&              manifest,
        ::PackReport&                report
    );

    MCNAPI static void parseSubpacks(
        ::Json::Value const&         root,
        ::std::vector<::std::string> errorPath,
        ::SubpackInfoCollection&     subpackInfoStack,
        ::PackReport&                report
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
        ::std::string                   capability,
        ::PackCapabilityRegistry const& packCapabilityRegistry
    );

    MCNAPI static ::SemVersion readEngineVersion(
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report,
        ::PackManifestFormat          formatVersion,
        ::PackType                    packType
    );

    MCNAPI static ::BaseGameVersion readRequiredBaseGameVersion(
        ::Json::Value const&          parent,
        ::std::string const&          element,
        ::std::vector<::std::string>& errorPath,
        ::PackReport&                 report
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
