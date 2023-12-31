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
        // symbol: ??0Property@JsonValidator@@QEAA@XZ
        MCAPI Property();

        // symbol: ??0Property@JsonValidator@@QEAA@$$QEAV01@@Z
        MCAPI Property(class JsonValidator::Property&&);

        // symbol: ??0Property@JsonValidator@@QEAA@AEBV01@@Z
        MCAPI Property(class JsonValidator::Property const&);

        // symbol: ?addChildProperty@Property@JsonValidator@@QEAAAEAV12@AEBV12@@Z
        MCAPI class JsonValidator::Property& addChildProperty(class JsonValidator::Property const& prop);

        // symbol: ?addConditionalProperty@Property@JsonValidator@@QEAAAEAV12@AEBVValue@Json@@AEBV12@@Z
        MCAPI class JsonValidator::Property&
        addConditionalProperty(class Json::Value const& value, class JsonValidator::Property const& prop);

        // symbol: ?addType@Property@JsonValidator@@QEAAAEAV12@W4ValueType@Json@@@Z
        MCAPI class JsonValidator::Property& addType(::Json::ValueType type);

        // symbol:
        // ?description@Property@JsonValidator@@QEAAAEAV12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI class JsonValidator::Property& description(std::string const& description);

        // symbol: ??4Property@JsonValidator@@QEAAAEAV01@$$QEAV01@@Z
        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property&&);

        // symbol: ??4Property@JsonValidator@@QEAAAEAV01@AEBV01@@Z
        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property const&);

        // symbol:
        // ??AProperty@JsonValidator@@QEAAAEAV01@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI class JsonValidator::Property& operator[](std::string const& propName);

        // symbol: ?requireConditionalProperty@Property@JsonValidator@@QEAAAEAV12@XZ
        MCAPI class JsonValidator::Property& requireConditionalProperty();

        // symbol: ?required@Property@JsonValidator@@QEAAAEAV12@XZ
        MCAPI class JsonValidator::Property& required();

        // symbol: ??1Property@JsonValidator@@QEAA@XZ
        MCAPI ~Property();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    JsonValidator& operator=(JsonValidator const&);
    JsonValidator(JsonValidator const&);
    JsonValidator();

public:
    // NOLINTBEGIN
    // symbol:
    // ?validate@JsonValidator@@SA_NAEBVProperty@1@AEBVValue@Json@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static bool validate(
        class JsonValidator::Property const& rootProp,
        class Json::Value const&             rootData,
        std::vector<std::string>*            errors
    );

    // NOLINTEND
};
