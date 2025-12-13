#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/options/FeatureOptionID.h"
#include "mc/options/FeatureOptionTabID.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class Option;
namespace Bedrock::PubSub { class Subscription; }
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
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>                 featureID;
        ::ll::TypedStorage<4, 4, ::FeatureOptionID>                 dependencyFeatureID;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Option>>       option;
        ::ll::TypedStorage<8, 64, ::std::function<void(::Option&)>> setup;
        ::ll::TypedStorage<8, 64, ::std::function<void(bool&)>>     lock;
        ::ll::TypedStorage<4, 4, ::FeatureOptionTabID>              tabID;
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

    using ExpectedDisabled = ::std::vector<::FeatureOptionID>;

    using ExpectedEnabled = ::std::vector<::FeatureOptionID>;

    using FeatureTogglesArray = ::std::vector<::FeatureToggles::FeatureToggle>;

    using LockFunction = ::std::function<void(bool&)>;

    using SetupFunction = ::std::function<void(::Option&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FeatureToggles::FeatureToggle>> mFeatures;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mOptionLockSubscriptions;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                            mIsInGame;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeatureToggles() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::function<void(::Option&)>
    _getDisableIfOtherOptionDisabledSetupCallback(::FeatureOptionID optionIdToCheck) const;

    MCAPI ::std::function<void(::Option&)> _getDisabledIfOptionExpectationsNotMetSetupCallback(
        ::std::vector<::FeatureOptionID> expectedDisabledOptions,
        ::std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI ::std::function<void(bool&)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(
        ::std::vector<::FeatureOptionID> expectedDisabledOptions,
        ::std::vector<::FeatureOptionID> expectedEnabledOptions
    );

    MCAPI ::std::function<void(bool&)>
    _getLockIfOtherOptionDisabledLockCallback(::FeatureOptionID optionIdToCheck) const;

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

    MCAPI_C ::Option* get(::FeatureOptionID featureID);

    MCAPI bool isEnabled(::FeatureOptionID featureID) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::FeatureToggles>& mFeatureToggles();
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
