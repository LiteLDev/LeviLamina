/**
 * @file  ITextObject.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ITextObject.
 *
 */
class ITextObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEXTOBJECT
public:
    class ITextObject& operator=(class ITextObject const &) = delete;
    ITextObject(class ITextObject const &) = delete;
    ITextObject() = delete;
#endif

public:
    /**
     * @hash   -723280751
     * @symbol ?RAW_TEXT_OBJECT_KEY@ITextObject@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_OBJECT_KEY;
    /**
     * @hash   -1630945359
     * @symbol ?RAW_TEXT_TEXT_KEY@ITextObject@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_TEXT_KEY;
    /**
     * @hash   -1009029677
     * @symbol ?RAW_TEXT_TRANSLATE_KEY@ITextObject@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_TRANSLATE_KEY;
    /**
     * @hash   1736937041
     * @symbol ?RAW_TEXT_WITH_KEY@ITextObject@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_WITH_KEY;

};