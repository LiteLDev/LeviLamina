#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
namespace Json { class Value; }
namespace Puv { class VersionRange; }
// clang-format on

class FeatureTypeFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8feaa1;
    ::ll::UntypedStorage<8, 24> mUnk30921a;
    ::ll::UntypedStorage<8, 24> mUnkd0271f;
    ::ll::UntypedStorage<8, 64> mUnk64c28e;
    ::ll::UntypedStorage<8, 8>  mUnk9cdbff;
    ::ll::UntypedStorage<8, 8>  mUnk173b42;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureTypeFactory& operator=(FeatureTypeFactory const&);
    FeatureTypeFactory(FeatureTypeFactory const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FeatureTypeFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeatureTypeFactory();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
