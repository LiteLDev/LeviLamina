#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class FeatureToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FeatureToggles inner types declare
    // clang-format off
    struct FeatureToggle;
    // clang-format on

    // FeatureToggles inner types define
    struct FeatureToggle {
    public:
        // prevent constructor by default
        FeatureToggle& operator=(FeatureToggle const&);
        FeatureToggle(FeatureToggle const&);
        FeatureToggle();

    public:
        // NOLINTBEGIN
        MCAPI FeatureToggle(struct FeatureToggles::FeatureToggle&&);

        MCAPI struct FeatureToggles::FeatureToggle& operator=(struct FeatureToggles::FeatureToggle&&);

        MCAPI ~FeatureToggle();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct FeatureToggles::FeatureToggle&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureToggles& operator=(FeatureToggles const&);
    FeatureToggles(FeatureToggles const&);
    FeatureToggles();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FeatureToggles();

    MCAPI explicit FeatureToggles(class AppPlatform& appPlatform);

    MCAPI class Option* get(::FeatureOptionID featureID);

    MCAPI bool isEnabled(::FeatureOptionID featureID) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::function<void(class Option&)> _getDisabledIfOptionExpectationsNotMetSetupCallback(
        std::vector<::FeatureOptionID> expectedDisabledOptions,
        std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI std::function<void(bool&)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(
        std::vector<::FeatureOptionID> expectedDisabledOptions,
        std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI void _initialize(class AppPlatform& appPlatform);

    MCAPI void _registerFeature(
        ::FeatureOptionTabID               tabID,
        ::FeatureOptionID                  featureID,
        std::string const&                 locName,
        std::string const&                 saveName,
        bool                               defaultValue,
        ::FeatureOptionID                  dependencyFeatureID,
        std::function<void(class Option&)> setup,
        std::function<void(bool&)>         lock
    );

    MCAPI void _registerFeatures();

    MCAPI void _setupDependencies();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class AppPlatform& appPlatform);

    MCAPI void dtor$();

    MCAPI static std::unique_ptr<class FeatureToggles>& mFeatureToggles();

    // NOLINTEND
};
