#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
        ::ll::UntypedStorage<8, 128> mUnk1ca622;
        ::ll::UntypedStorage<8, 128> mUnkf0206c;
        ::ll::UntypedStorage<8, 8>   mUnkc35b05;
        ::ll::UntypedStorage<8, 32>  mUnk2d706e;
        ::ll::UntypedStorage<8, 32>  mUnk8face5;
        ::ll::UntypedStorage<1, 1>   mUnk5d6762;
        ::ll::UntypedStorage<4, 4>   mUnk7386bb;
        ::ll::UntypedStorage<4, 4>   mUnk7dec7e;
        ::ll::UntypedStorage<4, 4>   mUnkf734a9;
        ::ll::UntypedStorage<8, 32>  mUnka7679a;
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
        MCAPI ~Impl();
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
    virtual ~Option();

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
    MCAPI void _updatePropertyVector(
        ::std::vector<::std::pair<::std::string, ::std::string>>& propertyVector,
        ::std::string const&                                      value
    );

    MCAPI bool getBool() const;

    MCAPI ::Bedrock::PubSub::Subscription registerLock(::std::function<void(bool&)> isModifiableCondition);

    MCAPI ::Bedrock::PubSub::Subscription registerObserver(::std::function<void(::Option const&)> onValueChangedCallback
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool read(::std::string const& valueString, bool& output);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
