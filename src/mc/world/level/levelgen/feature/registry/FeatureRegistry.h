#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {
    public:
        // prevent constructor by default
        FeatureBinaryJsonFormat& operator=(FeatureBinaryJsonFormat const&);
        FeatureBinaryJsonFormat(FeatureBinaryJsonFormat const&);
        FeatureBinaryJsonFormat();

    public:
        // NOLINTBEGIN
        MCAPI ~FeatureBinaryJsonFormat();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureRegistry& operator=(FeatureRegistry const&);
    FeatureRegistry(FeatureRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI FeatureRegistry();

    MCAPI void forEachFeature(std::function<void(class HashedString const&, class WeakRef<class IFeature>)> callback
    ) const;

    MCAPI std::vector<std::string> getLargeFeaturePasses() const;

    MCAPI std::vector<std::string> getSmallFeaturePasses() const;

    MCAPI bool isFeaturePassDefined(std::string const&) const;

    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider&, class ResourcePackManager const&, bool);

    MCAPI class WeakRef<class IFeature> lookupByName(std::string const& name) const;

    MCAPI class WeakRef<class IFeature> lookupOrReserveFeature(std::string const& featureName);

    MCAPI class WeakRef<class IFeature> reserveFeature(std::string const& name);

    MCAPI std::string const& reverseLookupString(class IFeature const&) const;

    MCAPI void setLargeFeaturePasses(std::vector<std::string>);

    MCAPI void setSmallFeaturePasses(std::vector<std::string>);

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
        class IWorldRegistriesProvider&,
        bool,
        class ResourcePackManager const&,
        std::string const&,
        std::string const&,
        class SemVersion const&,
        bool
    );

    // NOLINTEND
};
