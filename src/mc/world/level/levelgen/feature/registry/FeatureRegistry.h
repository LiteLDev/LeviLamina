#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {
    public:
        std::string featureName;      // this+0x0
        std::string binaryJsonOutput; // this+0x20

    public:
        // NOLINTBEGIN
        MCAPI ~FeatureBinaryJsonFormat();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureRegistry& operator=(FeatureRegistry const&);
    FeatureRegistry(FeatureRegistry const&);

    std::vector<std::unique_ptr<IFeature>>                mFeatureRegistry;      // this+0x0
    std::vector<OwnerPtr<IFeature>>                       mFeatureSlots;         // this+0x18
    std::unordered_map<HashedString, uint64>              mFeatureLookupMap;     // this+0x30
    std::vector<FeatureRegistry::FeatureBinaryJsonFormat> mFeatureSerializeData; // this+0x70
    bool                                                  mClientInitialized;    // this+0x88
    std::vector<std::string>                              mLargeFeaturePasses;   // this+0x90
    std::vector<std::string>                              mSmallFeaturePasses;   // this+0xA8

    template <std::derived_from<IFeature> T, class... Args>
    T& registerFeature(std::string const& name, Args&&... args) {
        auto  ptr = std::make_unique<T>(std::forward<Args>(args)...);
        auto& ref = *ptr;
        _registerFeature(name, std::move(ptr));
        return ref;
    }

public:
    // NOLINTBEGIN
    MCAPI FeatureRegistry();

    MCAPI void forEachFeature(std::function<void(class HashedString const&, class WeakRef<class IFeature>)> callback
    ) const;

    MCAPI std::vector<std::string> getLargeFeaturePasses() const;

    MCAPI std::vector<std::string> getSmallFeaturePasses() const;

    MCAPI bool isFeaturePassDefined(std::string const& featurePass) const;

    MCAPI void loadFromDefinitions(
        class IWorldRegistriesProvider&  worldRegistries,
        class ResourcePackManager const& rpm,
        bool                             clientSideGenEnabled
    );

    MCAPI class WeakRef<class IFeature> lookupByName(std::string const& name) const;

    MCAPI class WeakRef<class IFeature> lookupOrReserveFeature(std::string const& name);

    MCAPI class WeakRef<class IFeature> reserveFeature(std::string const& name);

    MCAPI std::string const& reverseLookupString(class IFeature const& feature) const;

    MCAPI void setLargeFeaturePasses(std::vector<std::string> largeFeaturePasses);

    MCAPI void setSmallFeaturePasses(std::vector<std::string> smallFeaturePasses);

    MCAPI static std::string const AFTER_SKY_PASS;

    MCAPI static std::string const AFTER_SURFACE_PASS;

    MCAPI static std::string const AFTER_UNDERGROUND_PASS;

    MCAPI static std::string const BEFORE_SKY_PASS;

    MCAPI static std::string const BEFORE_SURFACE_PASS;

    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;

    MCAPI static std::string const FINAL_PASS;

    MCAPI static std::string const FIRST_PASS;

    MCAPI static std::string const PREGENERATION_PASS;

    MCAPI static std::string const SKY_PASS;

    MCAPI static std::string const SURFACE_PASS;

    MCAPI static std::string const UNDERGROUND_PASS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string const _featureNamespaceFromInput(std::string const& filePath, std::string const& contents);

    MCAPI void _registerFeature(std::string const& name, std::unique_ptr<class IFeature> featurePtr);

    MCAPI bool _setupFeature(
        class IWorldRegistriesProvider&  worldRegistries,
        bool                             isBasePack,
        class ResourcePackManager const& rpm,
        std::string const&               featureName,
        std::string const&               jsonDefinition,
        class SemVersion const&          engineVersion,
        bool                             serializeFeatures
    );

    // NOLINTEND
};
