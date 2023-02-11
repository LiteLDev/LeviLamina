/**
 * @file  ScriptPrintLogger.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptPrintLogger.
 *
 */
class ScriptPrintLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPRINTLOGGER
public:
    class ScriptPrintLogger& operator=(class ScriptPrintLogger const &) = delete;
    ScriptPrintLogger(class ScriptPrintLogger const &) = delete;
    ScriptPrintLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptPrintLogger();
    /**
     * @hash   -2010224526
     * @vftbl  1
     * @symbol  ?onInfo\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void onInfo(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const &) const;
    /**
     * @hash   1990949786
     * @vftbl  2
     * @symbol  ?onWarn\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void onWarn(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const &) const;
    /**
     * @hash   -980111666
     * @vftbl  3
     * @symbol  ?onError\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    virtual void onError(struct Scripting::ContextId, class std::basic_string_view<char, struct std::char_traits<char>> const &) const;
    /**
     * @hash   57289500
     * @vftbl  4
     * @symbol  ?onException\@ScriptPrintLogger\@\@UEBAXUContextId\@Scripting\@\@AEBUError\@3\@\@Z
     */
    virtual void onException(struct Scripting::ContextId, struct Scripting::Error const &) const;
    /**
     * @hash   1092298424
     * @vftbl  5
     * @symbol  ?shouldPrintException\@ScriptPrintLogger\@\@UEBA_NAEBUError\@Scripting\@\@\@Z
     */
    virtual bool shouldPrintException(struct Scripting::Error const &) const;

};