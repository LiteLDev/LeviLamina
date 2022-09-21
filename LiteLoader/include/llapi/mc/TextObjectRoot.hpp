/**
 * @file  MC/TextObjectRoot.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
    TextObjectRoot() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TextObjectRoot();
    /**
     * @hash   -865801985
     * @vftbl  1
     * @symbol ?asString@TextObjectRoot@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   -873354257
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectRoot@@UEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   275012656
     * @vftbl  3
     * @symbol ?resolve@TextObjectRoot@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   874371650
     * @symbol ?addChild@TextObjectRoot@@QEAAXV?$unique_ptr@VITextObject@@U?$default_delete@VITextObject@@@std@@@std@@@Z
     */
    MCAPI void addChild(std::unique_ptr<class ITextObject>);
    /**
     * @hash   257542131
     * @symbol ?clear@TextObjectRoot@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   1926503066
     * @symbol ?isEmpty@TextObjectRoot@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   -838260254
     * @symbol ?resolveRoot@TextObjectRoot@@QEBA?AVResolvedTextObject@@AEBVActor@@AEBVScoreboard@@@Z
     */
    MCAPI class ResolvedTextObject resolveRoot(class Actor const &, class Scoreboard const &) const;

};