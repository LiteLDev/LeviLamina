#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FeatureLoader;
class FeatureTypeVersion;
struct FeatureParserContext;
struct SupportedFeatureSchema;
struct SupportedFeatureUpgrader;
namespace Documentation { struct Node; }
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
    virtual ~FeatureTypeFactory() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureTypeFactory();

    MCAPI uint64 addSupportedSchema(::std::optional<::Puv::VersionRange> versionRange);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
