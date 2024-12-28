#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class Option;
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk3b50ab;
        ::ll::UntypedStorage<4, 4>  mUnk886240;
        ::ll::UntypedStorage<8, 8>  mUnke61e68;
        ::ll::UntypedStorage<8, 64> mUnkf6f270;
        ::ll::UntypedStorage<8, 64> mUnk685add;
        ::ll::UntypedStorage<4, 4>  mUnk101471;
        // NOLINTEND

    public:
        // prevent constructor by default
        FeatureToggle& operator=(FeatureToggle const&);
        FeatureToggle(FeatureToggle const&);
        FeatureToggle();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI FeatureToggle(::FeatureToggles::FeatureToggle&&);

        MCAPI ::FeatureToggles::FeatureToggle& operator=(::FeatureToggles::FeatureToggle&&);

        MCAPI ~FeatureToggle();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::FeatureToggles::FeatureToggle&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdead0b;
    ::ll::UntypedStorage<8, 24> mUnke6612b;
    ::ll::UntypedStorage<8, 32> mUnk6a0c6d;
    ::ll::UntypedStorage<1, 1>  mUnk8d82d8;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureToggles& operator=(FeatureToggles const&);
    FeatureToggles(FeatureToggles const&);
    FeatureToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FeatureToggles() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FeatureToggles(::AppPlatform& appPlatform);

    MCAPI ::std::function<void(::Option&)>
    _getDisableIfOtherOptionDisabledSetupCallback(::FeatureOptionID optionIdToCheck) const;

    MCAPI ::std::function<void(::Option&)> _getDisabledIfOptionExpectationsNotMetSetupCallback(
        ::std::vector<::FeatureOptionID> expectedDisabledOptions,
        ::std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI ::std::function<void(bool&)> _getLockIfInGameCallback();

    MCAPI ::std::function<void(bool&)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(
        ::std::vector<::FeatureOptionID> expectedDisabledOptions,
        ::std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI ::std::function<void(bool&)> _getLockIfOtherOptionDisabledLockCallback(::FeatureOptionID optionIdToCheck
    ) const;

    MCAPI void _initialize(::AppPlatform& appPlatform);

    MCAPI void _registerFeature(
        ::FeatureOptionTabID             tabID,
        ::FeatureOptionID                featureID,
        ::std::string const&             locName,
        ::std::string const&             saveName,
        bool                             defaultValue,
        ::FeatureOptionID                dependencyFeatureID,
        ::std::function<void(::Option&)> setup,
        ::std::function<void(bool&)>     lock
    );

    MCAPI void _registerFeatures();

    MCAPI void _setupDependencies();

    MCAPI ::Option* get(::FeatureOptionID featureID);

    MCAPI bool isEnabled(::FeatureOptionID featureID) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::FeatureToggles>& mFeatureToggles();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AppPlatform& appPlatform);
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
