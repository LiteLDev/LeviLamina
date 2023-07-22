/**
 * @file  TextObjectRoot.hpp
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
 * @brief MC class TextObjectRoot.
 *
 */
class TextObjectRoot {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTROOT
public:
    class TextObjectRoot& operator=(class TextObjectRoot const &) = delete;
    TextObjectRoot(class TextObjectRoot const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TextObjectRoot();
    /**
     * @vftbl  1
     * @symbol  ?asString\@TextObjectRoot\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol  ??0TextObjectRoot\@\@QEAA\@XZ
     */
    MCAPI TextObjectRoot();
    /**
     * @symbol  ?addChild\@TextObjectRoot\@\@QEAAXV?$unique_ptr\@VITextObject\@\@U?$default_delete\@VITextObject\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addChild(std::unique_ptr<class ITextObject>);
    /**
     * @symbol  ?asStringVector\@TextObjectRoot\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> asStringVector() const;
    /**
     * @symbol  ?clear\@TextObjectRoot\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?isEmpty\@TextObjectRoot\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol  ?resolveRoot\@TextObjectRoot\@\@QEBA?AVResolvedTextObject\@\@AEBVActor\@\@AEBVScoreboard\@\@\@Z
     */
    MCAPI class ResolvedTextObject resolveRoot(class Actor const &, class Scoreboard const &) const;

};