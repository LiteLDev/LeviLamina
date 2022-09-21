/**
 * @file  MC/TextObjectScore.hpp
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
 * @brief MC class TextObjectScore.
 *
 */
class TextObjectScore {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTSCORE
public:
    class TextObjectScore& operator=(class TextObjectScore const &) = delete;
    TextObjectScore(class TextObjectScore const &) = delete;
    TextObjectScore() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TextObjectScore();
    /**
     * @hash   1130383815
     * @vftbl  1
     * @symbol ?asString@TextObjectScore@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string asString() const;
    /**
     * @hash   1328883687
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectScore@@UEBA?AVValue@Json@@XZ
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @hash   -833947448
     * @vftbl  3
     * @symbol ?resolve@TextObjectScore@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @hash   597217335
     * @symbol ??0TextObjectScore@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI TextObjectScore(std::string, std::string);
    /**
     * @hash   -9349375
     * @symbol ?RAW_TEXT_SCORE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_SCORE_KEY;
    /**
     * @hash   1464754687
     * @symbol ?RAW_TEXT_SCORE_NAME_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_SCORE_NAME_KEY;
    /**
     * @hash   -391753023
     * @symbol ?RAW_TEXT_SCORE_OBJECTIVE_KEY@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_SCORE_OBJECTIVE_KEY;
    /**
     * @hash   550185695
     * @symbol ?RAW_TEXT_SCORE_STAR@TextObjectScore@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAW_TEXT_SCORE_STAR;

};