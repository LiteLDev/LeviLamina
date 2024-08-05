#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameRule {
public:
    // GameRule inner types declare
    // clang-format off
    class ValidationError;
    // clang-format on

    // GameRule inner types define
    enum class Type {};

    union Value {};

    class ValidationError {
    public:
        // prevent constructor by default
        ValidationError& operator=(ValidationError const&);
        ValidationError(ValidationError const&);
        ValidationError();

    public:
        // NOLINTBEGIN
        MCAPI ~ValidationError();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameRule();

public:
    // NOLINTBEGIN
    MCAPI GameRule(class GameRule&&);

    MCAPI GameRule(class GameRule const&);

    MCAPI GameRule(std::string const& name, bool);

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
        setTagDataNotFoundCallback(std::function<void(class GameRule&, class BaseGameVersion const&)>);

    MCAPI class GameRule&
    setValidateValueCallback(std::function<bool(union GameRule::Value const&, class GameRule::ValidationError*)> cb);

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
};
