/**
 * @file  TextObjectLocalizedTextWithParams.hpp
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
 * @brief MC class TextObjectLocalizedTextWithParams.
 *
 */
class TextObjectLocalizedTextWithParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTLOCALIZEDTEXTWITHPARAMS
public:
    class TextObjectLocalizedTextWithParams& operator=(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams(class TextObjectLocalizedTextWithParams const &) = delete;
    TextObjectLocalizedTextWithParams() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextObjectLocalizedTextWithParams();
    /**
     * @vftbl  1
     * @symbol  ?asString\@TextObjectLocalizedTextWithParams\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectLocalizedTextWithParams\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectLocalizedTextWithParams\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol  ??0TextObjectLocalizedTextWithParams\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VTextObjectRoot\@\@U?$default_delete\@VTextObjectRoot\@\@\@std\@\@\@2\@\@Z
     */
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::unique_ptr<class TextObjectRoot>);
    /**
     * @symbol  ??0TextObjectLocalizedTextWithParams\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@2\@\@Z
     */
    MCAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const &);

};