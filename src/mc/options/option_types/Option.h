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
            8,
            ::std::unique_ptr<
                ::Bedrock::PubSub::Publisher<void(bool&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>>
                                                                         mLock;
        ::ll::TypedStorage<8, 32, ::std::string>                         mSaveTag;
        ::ll::TypedStorage<8, 32, ::std::string>                         mTelemetryProperty;
        ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mTelemetryTag;
        ::ll::TypedStorage<4, 4, ::OptionID const>                       mID;
        ::ll::TypedStorage<4, 4, ::OptionOwnerType const>                mOwnerType;
        ::ll::TypedStorage<4, 4, ::OptionType>                           mOptionType;
        ::ll::TypedStorage<8, 32, ::std::string const>                   mCaptionId;
        ::ll::TypedStorage<8, 56, ::GameVersion>                         mDefaultVersion;
        ::ll::TypedStorage<4, 4, ::OptionResetFlags const>               mOptionResetFlags;
        ::ll::TypedStorage<8, 8, ::Option*>                              mOverrideSource;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOverrideSourceValueChangedSubscription;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOverrideSourceInputModeChangedSubscription;
        ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>           mRequestSaveCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Impl(
            ::OptionID           id,
            ::OptionOwnerType    ownerType,
            ::OptionResetFlags   resetFlags,
            ::std::string const& captionId,
            ::std::string const& saveTag,
            ::OptionType         optionType,
            ::GameVersion        version
        );

        MCAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::OptionID           id,
            ::OptionOwnerType    ownerType,
            ::OptionResetFlags   resetFlags,
            ::std::string const& captionId,
            ::std::string const& saveTag,
            ::OptionType         optionType,
            ::GameVersion        version
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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

public:
    // prevent constructor by default
    Option();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Option() = default;
#else // LL_PLAT_C
    virtual ~Option();
#endif

    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) = 0;

    virtual void load(::std::string const&) = 0;

    virtual void load(::std::map<::std::string, ::std::string>& propertyMap);

    virtual void load(::Json::Value const& valueJson);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Option(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );

    MCAPI_C void _resetOption(::InputMode inputMode, bool saveOptionChange);

    MCAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCAPI_C bool canModify() const;

    MCAPI bool getBool() const;

    MCAPI_C bool getBool(::InputMode inputMode) const;

    MCAPI_C float getFloat() const;

    MCAPI_C float getFloat(::InputMode inputMode) const;

    MCAPI_C float getFloatMax() const;

    MCAPI_C float getFloatMin() const;

    MCAPI_C int getInt() const;

    MCAPI_C int64 getInt64() const;

    MCAPI_C ::std::string const& getString() const;

    MCAPI_C ::std::vector<::std::string> getStringList() const;

    MCAPI_C uint64 getUInt64() const;

    MCAPI_C ::std::unordered_map<int, ::std::string> const& getValueNameMap() const;

    MCAPI_C ::std::vector<int> const& getValues() const;

    MCAPI_C ::glm::vec3 getVec3() const;

    MCAPI_C bool isDefaultValue(::InputMode inputMode) const;

    MCAPI_C bool isNewVersion(::GameVersion currentVersion) const;

    MCAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCAPI_C ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&, ::InputMode)> onInputModeChangedCallback);

    MCAPI ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&)> onValueChangedCallback);

    MCAPI_C ::Option&
    registerTelemetryProperty(::std::string const& propertyName, ::Social::Events::PrivacyTagEnterprise propertyTag);

    MCAPI_C void set(int value);

    MCAPI_C void setOverrideSource(::Option* overrideSource);

    MCAPI_C void toggle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static bool read(::std::string const& valueString, int& output);

    MCAPI_C static bool read(::std::string const& valueString, float& output);

    MCAPI_C static bool read(::std::string const& valueString, ::std::vector<::std::string>& output);

    MCAPI static bool read(::std::string const& valueString, bool& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
