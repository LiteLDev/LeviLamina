#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/options/option_types/OptionType.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
namespace Bedrock::PubSub { class Subscription; }
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
        ::ll::UntypedStorage<8, 128> mUnk6ef4ab;
        ::ll::UntypedStorage<8, 128> mUnk12100e;
        ::ll::UntypedStorage<8, 8>   mUnk69907c;
        ::ll::UntypedStorage<8, 32>  mUnk2d706e;
        ::ll::UntypedStorage<8, 32>  mUnk8face5;
        ::ll::UntypedStorage<1, 1>   mUnk5d6762;
        ::ll::UntypedStorage<4, 4>   mUnk7386bb;
        ::ll::UntypedStorage<4, 4>   mUnk7dec7e;
        ::ll::UntypedStorage<4, 4>   mUnkf734a9;
        ::ll::UntypedStorage<8, 32>  mUnka7679a;
        ::ll::UntypedStorage<8, 56>  mUnk3aef34;
        ::ll::UntypedStorage<4, 4>   mUnka4b04c;
        ::ll::UntypedStorage<8, 8>   mUnk461146;
        ::ll::UntypedStorage<8, 16>  mUnk3e46b2;
        ::ll::UntypedStorage<8, 16>  mUnk5899f0;
        ::ll::UntypedStorage<8, 64>  mUnkf1a451;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Impl(
            ::OptionID           id,
            ::OptionOwnerType    ownerType,
            ::OptionResetFlags   resetFlags,
            ::std::string const& captionId,
            ::std::string const& saveTag,
            ::OptionType         optionType,
            ::GameVersion        version
        );

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
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
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk46f565;
    // NOLINTEND

public:
    // prevent constructor by default
    Option& operator=(Option const&);
    Option(Option const&);
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
    MCNAPI Option(
        ::OptionID           id,
        ::OptionOwnerType    ownerType,
        ::OptionResetFlags   resetFlags,
        ::std::string const& captionId,
        ::std::string const& saveTag,
        ::OptionType         optionType,
        ::GameVersion        version
    );

    MCNAPI_C void _resetOption(::InputMode inputMode, bool saveOptionChange);

    MCNAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCNAPI_C bool canModify() const;

    MCNAPI bool getBool() const;

    MCNAPI_C bool getBool(::InputMode inputMode) const;

    MCNAPI_C float getFloat() const;

    MCNAPI_C float getFloat(::InputMode inputMode) const;

    MCNAPI_C float getFloatMax() const;

    MCNAPI_C float getFloatMin() const;

    MCNAPI_C int getInt() const;

    MCNAPI_C int64 getInt64() const;

    MCNAPI_C ::std::string const& getString() const;

    MCNAPI_C ::std::vector<::std::string> getStringList() const;

    MCNAPI_C uint64 getUInt64() const;

    MCNAPI_C ::std::unordered_map<int, ::std::string> const& getValueNameMap() const;

    MCNAPI_C ::std::vector<int> const& getValues() const;

    MCNAPI_C ::glm::vec3 getVec3() const;

    MCNAPI_C bool isDefaultValue(::InputMode inputMode) const;

    MCNAPI_C bool isNewVersion(::GameVersion currentVersion) const;

    MCNAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCNAPI_C ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&, ::InputMode)> onInputModeChangedCallback);

    MCNAPI ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&)> onValueChangedCallback);

    MCNAPI_C ::Option&
    registerTelemetryProperty(::std::string const& propertyName, ::Social::Events::PrivacyTagEnterprise propertyTag);

    MCNAPI_C void set(int value);

    MCNAPI_C void setOverrideSource(::Option* overrideSource);

    MCNAPI_C void toggle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool read(::std::string const& valueString, int& output);

    MCNAPI_C static bool read(::std::string const& valueString, float& output);

    MCNAPI_C static bool read(::std::string const& valueString, ::std::vector<::std::string>& output);

    MCNAPI static bool read(::std::string const& valueString, bool& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load(::std::map<::std::string, ::std::string>& propertyMap);

    MCNAPI void $load(::Json::Value const& valueJson);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
