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
    // prevent constructor by default
    GameRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameRule(::GameRule const&);

    MCAPI GameRule(::GameRule&&);

    MCAPI GameRule(::std::string const& name, bool canBeModifiedByPlayer);

    MCAPI ::GameRule& _setDefaultValue(bool b);

    MCAPI ::GameRule& _setDefaultValue(int i);

    MCAPI ::std::string getLowercaseName() const;

    MCAPI ::GameRule& operator=(::GameRule&&);

    MCAPI ::GameRule& operator=(::GameRule const&);

    MCAPI bool setBool(bool value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCAPI bool setFloat(float value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCAPI bool setInt(int value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCAPI ::GameRule& setTagDataNotFoundCallback(::std::function<void(::GameRule&, ::BaseGameVersion const&)> cb);

    MCAPI ::GameRule&
    setValidateValueCallback(::std::function<bool(::GameRule::Value const&, ::GameRule::ValidationError*)> cb);

    MCAPI ~GameRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GameRule const&);

    MCAPI void* $ctor(::GameRule&&);

    MCAPI void* $ctor(::std::string const& name, bool canBeModifiedByPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
