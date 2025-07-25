#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    // vIndex: 0
    virtual ~Option() = default;

    // vIndex: 1
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) = 0;

    // vIndex: 4
    virtual void load(::std::string const&) = 0;

    // vIndex: 3
    virtual void load(::std::map<::std::string, ::std::string>& propertyMap);

    // vIndex: 2
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

    MCNAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCNAPI bool getBool() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCNAPI ::Bedrock::PubSub::Subscription
    registerObserver(::std::function<void(::Option const&)> onValueChangedCallback);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
