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
     * @hash   -1449536449
     * @vftbl  1
     * @symbol  ?asString\@TextObjectRoot\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   -1456842705
     * @vftbl  2
     * @symbol  ?asJsonValue\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   -308506544
     * @vftbl  3
     * @symbol  ?resolve\@TextObjectRoot\@\@UEBA?AVValue\@Json\@\@AEBUResolveData\@\@\@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol  ??0TextObjectRoot\@\@QEAA\@XZ
     */
    MCAPI TextObjectRoot();
    /**
     * @hash   290867826
     * @symbol  ?addChild\@TextObjectRoot\@\@QEAAXV?$unique_ptr\@VITextObject\@\@U?$default_delete\@VITextObject\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addChild(std::unique_ptr<class ITextObject>);
    /**
     * @hash   972605829
     * @symbol  ?asStringVector\@TextObjectRoot\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> asStringVector() const;
    /**
     * @hash   2007017219
     * @symbol  ?clear\@TextObjectRoot\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   1009924330
     * @symbol  ?isEmpty\@TextObjectRoot\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -1421779454
     * @symbol  ?resolveRoot\@TextObjectRoot\@\@QEBA?AVResolvedTextObject\@\@AEBVActor\@\@AEBVScoreboard\@\@\@Z
     */
    MCAPI class ResolvedTextObject resolveRoot(class Actor const &, class Scoreboard const &) const;

};