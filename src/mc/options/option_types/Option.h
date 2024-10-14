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
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        MCAPI ~Impl();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Option& operator=(Option const&);
    Option(Option const&);
    Option();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Option() = default;

    // vIndex: 1
    virtual void save(std::vector<std::pair<std::string, std::string>>& propertyVector) = 0;

    // vIndex: 2
    virtual void load(std::string const& valueString) = 0;

    // vIndex: 3
    virtual void load(std::map<std::string, std::string>& propertyMap);

    // vIndex: 4
    virtual void load(class Json::Value const& valueJson);

    MCAPI bool canModify() const;

    MCAPI bool getBool() const;

    MCAPI void notifyOptionValueChanged(bool saveOptionChange);

    MCAPI class Bedrock::PubSub::Subscription registerLock(std::function<void(bool&)> isModifiableCondition);

    MCAPI class Bedrock::PubSub::Subscription
    registerObserver(std::function<void(class Option const&)> onValueChangedCallback);

    MCAPI static bool read(std::string const& valueString, bool& output);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    _updatePropertyVector(std::vector<std::pair<std::string, std::string>>& propertyVector, std::string const& value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void load$(std::map<std::string, std::string>& propertyMap);

    MCAPI void load$(class Json::Value const& valueJson);

    // NOLINTEND
};
