#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureLoader;
class FeatureTypeVersion;
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
struct FeatureParserContext;
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
namespace Documentation { struct Node; }
namespace Json { class Value; }
namespace Puv { class VersionRange; }
// clang-format on

class FeatureTypeFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SupportedFeatureSchema>>                      mSupportedSchemas;
    ::ll::TypedStorage<8, 24, ::std::vector<::SupportedFeatureUpgrader>>                    mSupportedUpgraders;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::Documentation::Node&)>>> mDocumentationGenerators;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::FeatureTypeVersion>> mRegisteredFeatureTypeVersions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureLoader>>                         mLoader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureParserContext>>                  mParserContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureTypeFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 addSupportedSchema(::std::optional<::Puv::VersionRange> versionRange);

    MCAPI bool processFeature(
        ::IWorldRegistriesProvider&  lookupProvider,
        bool                         isBasePack,
        ::ResourcePackManager const& rpm,
        ::std::string const&         expectedFeatureName,
        ::Json::Value const&         featureData,
        ::MinEngineVersion const&    minEngineVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
