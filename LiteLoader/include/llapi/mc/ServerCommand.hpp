/**
 * @file  ServerCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCommand.
 *
 */
class ServerCommand {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMAND
public:
    class ServerCommand& operator=(class ServerCommand const &) = delete;
    ServerCommand(class ServerCommand const &) = delete;
    ServerCommand() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerCommand();
#endif

//protected:
    /**
     * @symbol ?tryToSIFTText\@ServerCommand\@\@IEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBW4TextProcessingEventOrigin\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@5\@\@Z
     */
    MCAPI bool tryToSIFTText(class CommandOrigin const &, class CommandOutput &, std::vector<std::string> const &, enum class TextProcessingEventOrigin const &, class std::function<void (std::vector<std::string> const &, std::vector<enum class Safety::TextFilteringEvent> const &)>) const;

protected:
    /**
     * @symbol ?mGame\@ServerCommand\@\@1PEAVMinecraft\@\@EA
     */
    MCAPI static class Minecraft * mGame;

};
