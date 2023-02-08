/**
 * @file  TextObjectLocalizedText.hpp
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
 * @brief MC class TextObjectLocalizedText.
 *
 */
class TextObjectLocalizedText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXT
public:
    class TextObjectLocalizedText& operator=(class TextObjectLocalizedText const &) = delete;
    TextObjectLocalizedText(class TextObjectLocalizedText const &) = delete;
    TextObjectLocalizedText() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextObjectLocalizedText();
    /**
     * @hash   1956052081
     * @vftbl  1
     * @symbol  ?asString\@TextObjectLocalizedText\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   -1880512991
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectLocalizedText\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   -241465538
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectLocalizedText\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   625606769
     * @symbol  ??0TextObjectLocalizedText\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TextObjectLocalizedText(std::string);

};