/**
 * @file  LessonCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LessonCommand.
 *
 */
class LessonCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LESSONCOMMAND
public:
    class LessonCommand& operator=(class LessonCommand const &) = delete;
    LessonCommand(class LessonCommand const &) = delete;
    LessonCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LessonCommand();
    /**
     * @hash   -47850464
     * @vftbl  1
     * @symbol  ?execute\@LessonCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -2027655920
     * @symbol  ?setup\@LessonCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};