#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IFeature;
class IWorldRegistriesProvider;
class LinkedAssetValidator;
class MinEngineVersion;
class ResourcePackManager;
// clang-format on

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> featureName;
        ::ll::TypedStorage<8, 32, ::std::string> binaryJsonOutput;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureBinaryJsonFormat& operator=(FeatureBinaryJsonFormat const&);
        FeatureBinaryJsonFormat();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FeatureBinaryJsonFormat(::FeatureRegistry::FeatureBinaryJsonFormat const&);

        MCFOLD ::FeatureRegistry::FeatureBinaryJsonFormat& operator=(::FeatureRegistry::FeatureBinaryJsonFormat&&);

        MCAPI ~FeatureBinaryJsonFormat();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::FeatureRegistry::FeatureBinaryJsonFormat const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>        mValidator;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::IFeature>>>              mFeatureRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::IFeature>>>                     mFeatureSlots;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>              mFeatureLookupMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat>> mFeatureSerializeData;
    ::ll::TypedStorage<1, 1, bool>                                                       mClientInitialized;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mLargeFeaturePasses;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mSmallFeaturePasses;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FeatureRegistry(::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);

    MCAPI void _registerFeature(::std::string const& name, ::std::unique_ptr<::IFeature> featurePtr);

#ifdef LL_PLAT_C
    MCAPI bool _setupFeature(
        ::IWorldRegistriesProvider&  worldRegistries,
        bool                         isBasePack,
        ::ResourcePackManager const& rpm,
        ::std::string const&         featureName,
        ::std::string const&         jsonDefinition,
        ::MinEngineVersion const&    minEngineVersion,
        bool                         serializeFeatures
    );
#endif

    MCAPI bool isFeaturePassDefined(::std::string const& featurePass) const;

    MCAPI void loadFromDefinitions(
        ::IWorldRegistriesProvider&  worldRegistries,
        ::ResourcePackManager const& rpm,
        bool                         clientSideGenEnabled
    );

#ifdef LL_PLAT_C
    MCAPI void loadFromJsonData(
        ::IWorldRegistriesProvider&                                      worldRegistries,
        ::ResourcePackManager const&                                     rpm,
        ::std::vector<::FeatureRegistry::FeatureBinaryJsonFormat> const& jsonData
    );
#endif

    MCAPI ::WeakRef<::IFeature> lookupByName(::std::string const& name) const;

    MCAPI ::WeakRef<::IFeature> reserveFeature(::std::string const& name);

    MCAPI void setLargeFeaturePasses(::std::vector<::std::string> largeFeaturePasses);

    MCAPI void setSmallFeaturePasses(::std::vector<::std::string> smallFeaturePasses);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& AFTER_SKY_PASS();

    MCAPI static ::std::string const& AFTER_SURFACE_PASS();

    MCAPI static ::std::string const& AFTER_UNDERGROUND_PASS();

    MCAPI static ::std::string const& BEFORE_SKY_PASS();

    MCAPI static ::std::string const& BEFORE_SURFACE_PASS();

    MCAPI static ::std::string const& BEFORE_UNDERGROUND_PASS();

    MCAPI static ::std::string const& FINAL_PASS();

    MCAPI static ::std::string const& FIRST_PASS();

    MCAPI static ::std::string const& PREGENERATION_PASS();

    MCAPI static ::std::string const& SKY_PASS();

    MCAPI static ::std::string const& SURFACE_PASS();

    MCAPI static ::std::string const& UNDERGROUND_PASS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
    // NOLINTEND
};
