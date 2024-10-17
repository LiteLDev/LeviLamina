#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on

    // GameRule inner types define
    enum class Type : schar {
        Invalid = 0,
        Bool    = 1,
        Int     = 2,
        Float   = 3,
    };

    union Value {
        bool  boolVal;  // this+0x0
        int   intVal;   // this+0x0
        float floatVal; // this+0x0
    };

    class ValidationError {
    public:
        bool                     mSuccess;
        std::string              mErrorDescription;
        std::vector<std::string> mErrorParameters;

    public:
        // NOLINTBEGIN
        MCAPI ~ValidationError();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    using TagDataNotFoundCallback = std::function<void(GameRule&)>;
    using ValidateValueCallback   = std::function<bool(GameRule::Value const&, GameRule::ValidationError*)>;

    bool                    mShouldSave;            // this+0x0
    GameRule::Type          mType;                  // this+0x1
    GameRule::Value         mValue;                 // this+0x4
    std::string             mName;                  // this+0x8
    bool                    mAllowUseInCommand;     // this+0x28
    bool                    mIsDefaultSet;          // this+0x29
    bool                    mRequiresCheats;        // this+0x2A
    bool                    mCanBeModifiedByPlayer; // this+0x2B
    TagDataNotFoundCallback mTagNotFoundCallback;   // this+0x30
    ValidateValueCallback   mValidateValueCallback; // this+0x70

public:
    // prevent constructor by default
    GameRule();

public:
    // NOLINTBEGIN
    MCAPI GameRule(class GameRule&&);

    MCAPI GameRule(class GameRule const&);

    MCAPI GameRule(std::string const& name, bool canBeModifiedByPlayer);

    MCAPI bool allowUseInCommand() const;

    MCAPI bool allowUseInScripting() const;

    MCAPI bool canBeModifiedByPlayer() const;

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCAPI int getInt() const;

    MCAPI std::string getLowercaseName() const;

    MCAPI std::string const& getName() const;

    MCAPI ::GameRule::Type getType() const;

    MCAPI union GameRule::Value const& getValue() const;

    MCAPI class GameRule& operator=(class GameRule&&);

    MCAPI class GameRule& operator=(class GameRule const&);

    MCAPI bool requiresCheats() const;

    MCAPI void resetType(::GameRule::Type type);

    MCAPI bool setBool(bool value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    MCAPI bool setFloat(float value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    MCAPI bool setInt(int value, bool* pValidated, class GameRule::ValidationError* errorOutput);

    MCAPI class GameRule&
    setTagDataNotFoundCallback(std::function<void(class GameRule&, class BaseGameVersion const&)> cb);

    MCAPI class GameRule& setValidateValueCallback(ValidateValueCallback cb);

    MCAPI ~GameRule();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class GameRule& _setDefaultValue(bool b);

    MCAPI class GameRule& _setDefaultValue(int i);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _set(union GameRule::Value const& v, bool* pValidated, class GameRule::ValidationError* errorOutput);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class GameRule&&);

    MCAPI void* ctor$(class GameRule const&);

    MCAPI void* ctor$(std::string const& name, bool canBeModifiedByPlayer);

    MCAPI void dtor$();

    // NOLINTEND
};
