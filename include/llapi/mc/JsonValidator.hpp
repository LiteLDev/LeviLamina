/**
 * @file  JsonValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JsonValidator.
 *
 */
class JsonValidator {

#define AFTER_EXTRA
// Add Member There
public:
class Property {
public:
    Property() = delete;
    Property(Property const&) = delete;
    Property(Property const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONVALIDATOR
public:
    class JsonValidator& operator=(class JsonValidator const &) = delete;
    JsonValidator(class JsonValidator const &) = delete;
    JsonValidator() = delete;
#endif

public:
    /**
     * @symbol  ?validate\@JsonValidator\@\@SA_NAEBVProperty\@1\@AEBVValue\@Json\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI static bool validate(class JsonValidator::Property const &, class Json::Value const &, std::vector<std::string> *);

};