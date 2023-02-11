/**
 * @file  TextObjectText.hpp
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
 * @brief MC class TextObjectText.
 *
 */
class TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTTEXT
public:
    class TextObjectText& operator=(class TextObjectText const &) = delete;
    TextObjectText(class TextObjectText const &) = delete;
    TextObjectText() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextObjectText();
    /**
     * @hash   1829619396
     * @vftbl  1
     * @symbol  ?asString\@TextObjectText\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   1509354132
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectText\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   764686427
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectText\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   -1509717954
     * @symbol  ??0TextObjectText\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TextObjectText(std::string);
    /**
     * @hash   -1311253161
     * @symbol  ?asJsonValue\@TextObjectText\@\@SA?AVValue\@Json\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Json::Value asJsonValue(std::string const &);

};