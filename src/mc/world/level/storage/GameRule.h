#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

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

    using ValidateValueCallback = ::std::function<
        bool(::std::variant<::cereal::NullType, bool, int, float> const&, ::GameRule::ValidationError*)>;

    using Value = ::std::variant<::cereal::NullType, bool, int, float>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mShouldSave;
    ::ll::TypedStorage<1, 1, ::GameRule::Type>                                              mType;
    ::ll::TypedStorage<4, 8, ::std::variant<::cereal::NullType, bool, int, float>>          mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mName;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllowUseInCommand;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllowUseInScripting;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDefaultSet;
    ::ll::TypedStorage<1, 1, bool>                                                          mRequiresCheats;
    ::ll::TypedStorage<1, 1, bool>                                                          mCanBeModifiedByPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::GameRule&, ::BaseGameVersion const&)>> mTagNotFoundCallback;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            bool(::std::variant<::cereal::NullType, bool, int, float> const&, ::GameRule::ValidationError*)>>
        mValidateValueCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameRule();

    MCAPI GameRule(::GameRule const&);

    MCAPI GameRule(::std::string const& name, bool canBeModifiedByPlayer);

    MCAPI bool _set(
        ::std::variant<::cereal::NullType, bool, int, float> const& v,
        bool*                                                       pValidated,
        ::GameRule::ValidationError*                                errorOutput
    );

    MCFOLD bool allowUseInCommand() const;

    MCFOLD bool allowUseInScripting() const;

    MCFOLD bool canBeModifiedByPlayer() const;

#ifdef LL_PLAT_C
    MCAPI bool compareValue(::std::variant<::cereal::NullType, bool, int, float> const& v) const;
#endif

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCAPI int getInt() const;

    MCAPI ::std::string getLowercaseName() const;

    MCFOLD ::std::string const& getName() const;

    MCFOLD ::GameRule::Type getType() const;

    MCFOLD ::std::variant<::cereal::NullType, bool, int, float> const& getValue() const;

    MCAPI ::GameRule& operator=(::GameRule&&);

    MCAPI ::GameRule& operator=(::GameRule const&);

    MCAPI bool operator==(::GameRule const& other) const;

    MCFOLD bool requiresCheats() const;

    MCAPI void resetType(::GameRule::Type type);

    MCAPI bool setBool(bool value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCFOLD void setCanBeModifiedByPlayer(bool value);

    MCAPI bool setFloat(float value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCAPI bool setInt(int value, bool* pValidated, ::GameRule::ValidationError* errorOutput);

    MCAPI ::GameRule& setName(::std::string const& name);

    MCAPI ~GameRule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::GameRule const&);

    MCAPI void* $ctor(::std::string const& name, bool canBeModifiedByPlayer);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
