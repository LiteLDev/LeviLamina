#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class JsonValidator {
public:
    // JsonValidator inner types declare
    // clang-format off
    class Property;
    // clang-format on

    // JsonValidator inner types define
    class Property {
    public:
        // NOLINTBEGIN
        MCAPI Property();

        MCAPI Property(class JsonValidator::Property&&);

        MCAPI Property(class JsonValidator::Property const&);

        MCAPI class JsonValidator::Property& addChildProperty(class JsonValidator::Property const& prop);

        MCAPI class JsonValidator::Property&
        addConditionalProperty(class Json::Value const& value, class JsonValidator::Property const& prop);

        MCAPI class JsonValidator::Property& addType(::Json::ValueType type);

        MCAPI class JsonValidator::Property& description(std::string const& description);

        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property&&);

        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property const&);

        MCAPI class JsonValidator::Property& operator[](std::string const& propName);

        MCAPI class JsonValidator::Property& requireConditionalProperty();

        MCAPI class JsonValidator::Property& required();

        MCAPI ~Property();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void* ctor$(class JsonValidator::Property const&);

        MCAPI void* ctor$(class JsonValidator::Property&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    JsonValidator& operator=(JsonValidator const&);
    JsonValidator(JsonValidator const&);
    JsonValidator();

public:
    // NOLINTBEGIN
    MCAPI static bool validate(
        class JsonValidator::Property const& rootProp,
        class Json::Value const&             rootData,
        std::vector<std::string>*            errors
    );

    // NOLINTEND
};
