#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on

    // GameRule inner types define
    enum class Type : uchar {
        Invalid = 0,
        Bool    = 1,
        Int     = 2,
        Float   = 3,
    };

    union Value {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 4> mUnk29fff1;
        ::ll::UntypedStorage<4, 4> mUnk2ab4f3;
        ::ll::UntypedStorage<4, 4> mUnk768db5;
        // NOLINTEND
    };
    class ValidationError {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                          mSuccess;
        ::ll::TypedStorage<8, 32, ::std::string>                mErrorDescription;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mErrorParameters;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ValidationError();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using TagDataNotFoundCallback = ::std::function<void(::GameRule&, ::BaseGameVersion const&)>;

    using ValidateValueCallback = ::std::function<bool(::GameRule::Value const&, ::GameRule::ValidationError*)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mShouldSave;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                              mType;
    ::ll::TypedStorage<4, 4, ::GameRule::Value>                                             mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mName;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllowUseInCommand;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllowUseInScripting;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDefaultSet;
    ::ll::TypedStorage<1, 1, bool>                                                          mRequiresCheats;
    ::ll::TypedStorage<1, 1, bool>                                                          mCanBeModifiedByPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::GameRule&, ::BaseGameVersion const&)>> mTagNotFoundCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::GameRule::Value const&, ::GameRule::ValidationError*)>>
        mValidateValueCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameRule(::GameRule const&);

    MCNAPI GameRule(::GameRule&&);

    MCNAPI GameRule(::std::string const& name, bool canBeModifiedByPlayer);

    MCNAPI ::GameRule& _setDefaultValue(bool b);

    MCNAPI ::GameRule& _setDefaultValue(int i);

    MCNAPI ::std::string getLowercaseName() const;

    MCNAPI ::GameRule& operator=(::GameRule&&);

    MCNAPI ::GameRule& operator=(::GameRule const&);

    MCNAPI bool setBool(bool value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCNAPI bool setFloat(float value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCNAPI bool setInt(int value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCNAPI ::GameRule& setTagDataNotFoundCallback(::std::function<void(::GameRule&, ::BaseGameVersion const&)> cb);

    MCNAPI ::GameRule&
    setValidateValueCallback(::std::function<bool(::GameRule::Value const&, ::GameRule::ValidationError*)> cb);

    MCNAPI ~GameRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GameRule const&);

    MCNAPI void* $ctor(::GameRule&&);

    MCNAPI void* $ctor(::std::string const& name, bool canBeModifiedByPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
