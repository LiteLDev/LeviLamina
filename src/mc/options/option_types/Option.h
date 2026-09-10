#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/options/option_types/OptionType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Json { class Value; }
// clang-format on

class Option {
public:
    // Option inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // Option inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<void(::Option const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mValueChangedPublisher;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::
                Publisher<void(::Option const&, ::InputMode), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mInputModeChangedPublisher;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<void(::Option const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mValueResetPublisher;
        ::ll::TypedStorage<
            8,
            8,
            ::std::unique_ptr<
                ::Bedrock::PubSub::Publisher<void(bool&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                 mLock;
        ::ll::TypedStorage<8, 32, ::std::string> mSaveTag;
        ::ll::TypedStorage<8, 32, ::std::string> mTelemetryProperty;
#ifdef LL_PLAT_S
        ::ll::TypedStorage<1, 4, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<1, 4, ::OptionID const>                       mID;
#else // LL_PLAT_C
        ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<4, 4, ::OptionID const>                       mID;
#endif
        ::ll::TypedStorage<4, 4, ::OptionOwnerType const>          mOwnerType;
        ::ll::TypedStorage<4, 4, ::OptionType>                     mOptionType;
        ::ll::TypedStorage<8, 32, ::std::string const>             mCaptionId;
        ::ll::TypedStorage<8, 56, ::GameVersion>                   mDefaultVersion;
        ::ll::TypedStorage<4, 4, ::OptionResetFlags const>         mOptionResetFlags;
        ::ll::TypedStorage<8, 8, ::Option*>                        mOverrideSource;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOverrideSourceValueChangedSubscription;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOverrideSourceInputModeChangedSubscription;
        ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>     mRequestSaveCallback;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ~Impl();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void $dtor();
#endif
        // NOLINTEND
    };

    using BoolFilter = ::std::function<bool(bool)>;

    using SaveIntCallback = ::std::function<int(int)>;

    using StringFilter = ::std::function<::std::string(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Option::Impl>> mImpl;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Option();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Option() = default;
#else // LL_PLAT_C
    virtual ~Option();
#endif

    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector) = 0;

    virtual void load(::std::string const& valueString) = 0;

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap);

    virtual void load(::Json::Value const& valueJson);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI Option(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );

    MCAPI void _resetOption(::InputMode inputMode, bool saveOptionChange);

    MCAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCAPI bool canModify() const;

    MCAPI bool isDefaultValue(::InputMode inputMode) const;

    MCAPI bool isNewVersion(::GameVersion currentVersion) const;

    MCAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCAPI ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&)> onValueChangedCallback);

    MCAPI void setCoerceSaveValueCallback(::std::function<int(int)> callback);

    MCAPI void setCoerceValueCallback(::std::function<::std::string(::std::string const&)> f);

    MCAPI void setCoerceValueCallback(::std::function<bool(bool)> f);

    MCAPI void setOverrideSource(::Option* overrideSource);

    MCAPI void toggle();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static bool read(::std::string const& valueString, int& output);

    MCAPI static bool read(::std::string const& valueString, float& output);

    MCAPI static bool read(::std::string const& valueString, bool& output);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);

    MCAPI void $load(::Json::Value const& valueJson);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
