/**
 * @file  PropertyBag.hpp
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
 * @brief MC class PropertyBag.
 *
 */
class PropertyBag {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYBAG
public:
    class PropertyBag& operator=(class PropertyBag const &) = delete;
    PropertyBag(class PropertyBag const &) = delete;
#endif

public:
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI PropertyBag(class Json::Value const &);
    /**
     * @symbol ??0PropertyBag\@\@QEAA\@XZ
     */
    MCAPI PropertyBag();
    /**
     * @symbol ?toJsonValue\@PropertyBag\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const & toJsonValue() const;
    /**
     * @symbol ?toString\@PropertyBag\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?EMPTY\@PropertyBag\@\@2V1\@A
     */
    MCAPI static class PropertyBag EMPTY;

};
