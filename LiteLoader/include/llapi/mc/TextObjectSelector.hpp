/**
 * @file  TextObjectSelector.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectSelector.
 *
 */
class TextObjectSelector {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSELECTOR
public:
    class TextObjectSelector& operator=(class TextObjectSelector const &) = delete;
    TextObjectSelector(class TextObjectSelector const &) = delete;
    TextObjectSelector() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextObjectSelector();
    /**
     * @hash   1116837986
     * @vftbl  1
     * @symbol  ?asString\@TextObjectSelector\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   1648463890
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   -31074931
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectSelector\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   1093468672
     * @symbol  ??0TextObjectSelector\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TextObjectSelector(std::string);
    /**
     * @hash   2021325003
     * @symbol  ?RAW_TEXT_SELECTOR_KEY\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_KEY;
    /**
     * @hash   1154226435
     * @symbol  ?RAW_TEXT_SELECTOR_STAR\@TextObjectSelector\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAW_TEXT_SELECTOR_STAR;

};