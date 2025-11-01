#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IFeature;
class IWorldRegistriesProvider;
class ResourcePackManager;
namespace FeatureLoading { struct AbstractFeatureHolder; }
// clang-format on

namespace FeatureLoading {

struct FeatureRootParseContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::std::string>> mFeatureName;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IWorldRegistriesProvider>> mRegistryProvider;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::ResourcePackManager const>> mPackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FeatureLoading::AbstractFeatureHolder>> mFeatureHolder;
    ::ll::TypedStorage<8, 8, ::IFeature*> mFeature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FeatureRootParseContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
