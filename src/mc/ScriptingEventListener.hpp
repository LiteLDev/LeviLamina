/**
 * @file  ScriptingEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptingEventListener.
 *
 */
class ScriptingEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGEVENTLISTENER
public:
    class ScriptingEventListener& operator=(class ScriptingEventListener const &) = delete;
    ScriptingEventListener(class ScriptingEventListener const &) = delete;
    ScriptingEventListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptingEventListener();
    /**
     * @vftbl  1
     * @symbol  ?onEvent\@ScriptingEventListener\@\@UEAA?AW4EventResult\@\@AEBUScriptingNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ScriptingNotificationEvent const &);

};