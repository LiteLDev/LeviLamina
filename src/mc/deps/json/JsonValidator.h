#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Json { enum class ValueType; }
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
        /**
         * @symbol ??0Property\@JsonValidator\@\@QEAA\@AEBV01\@\@Z
         */
        MCAPI Property(class JsonValidator::Property const&); // NOLINT
        /**
         * @symbol ??0Property\@JsonValidator\@\@QEAA\@$$QEAV01\@\@Z
         */
        MCAPI Property(class JsonValidator::Property&&); // NOLINT
        /**
         * @symbol ??0Property\@JsonValidator\@\@QEAA\@XZ
         */
        MCAPI Property(); // NOLINT
        /**
         * @symbol ?addChildProperty\@Property\@JsonValidator\@\@QEAAAEAV12\@AEBV12\@\@Z
         */
        MCAPI class JsonValidator::Property& addChildProperty(class JsonValidator::Property const&); // NOLINT
        /**
         * @symbol ?addConditionalProperty\@Property\@JsonValidator\@\@QEAAAEAV12\@AEBVValue\@Json\@\@AEBV12\@\@Z
         */
        MCAPI class JsonValidator::Property&
        addConditionalProperty(class Json::Value const&, class JsonValidator::Property const&); // NOLINT
        /**
         * @symbol ?addType\@Property\@JsonValidator\@\@QEAAAEAV12\@W4ValueType\@Json\@\@\@Z
         */
        MCAPI class JsonValidator::Property& addType(enum class Json::ValueType); // NOLINT
        /**
         * @symbol
         * ?description\@Property\@JsonValidator\@\@QEAAAEAV12\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI class JsonValidator::Property& description(std::string const&); // NOLINT
        /**
         * @symbol ??4Property\@JsonValidator\@\@QEAAAEAV01\@AEBV01\@\@Z
         */
        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property const&); // NOLINT
        /**
         * @symbol ??4Property\@JsonValidator\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class JsonValidator::Property& operator=(class JsonValidator::Property&&); // NOLINT
        /**
         * @symbol
         * ??AProperty\@JsonValidator\@\@QEAAAEAV01\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI class JsonValidator::Property& operator[](std::string const&); // NOLINT
        /**
         * @symbol ?requireConditionalProperty\@Property\@JsonValidator\@\@QEAAAEAV12\@XZ
         */
        MCAPI class JsonValidator::Property& requireConditionalProperty(); // NOLINT
        /**
         * @symbol ?required\@Property\@JsonValidator\@\@QEAAAEAV12\@XZ
         */
        MCAPI class JsonValidator::Property& required(); // NOLINT
        /**
         * @symbol ??1Property\@JsonValidator\@\@QEAA\@XZ
         */
        MCAPI ~Property(); // NOLINT
    };

public:
    // prevent constructor by default
    JsonValidator& operator=(JsonValidator const&) = delete;
    JsonValidator(JsonValidator const&)            = delete;
    JsonValidator()                                = delete;

public:
    /**
     * @symbol
     * ?validate\@JsonValidator\@\@SA_NAEBVProperty\@1\@AEBVValue\@Json\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    validate(class JsonValidator::Property const&, class Json::Value const&, std::vector<std::string>*); // NOLINT
};
