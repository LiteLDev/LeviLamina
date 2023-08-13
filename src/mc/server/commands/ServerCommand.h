#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace Safety { enum class TextFilteringEvent; }
// clang-format on

class ServerCommand : public ::Command {

public:
    // prevent constructor by default
    ServerCommand& operator=(ServerCommand const&) = delete;
    ServerCommand(ServerCommand const&)            = delete;
    ServerCommand()                                = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERCOMMAND
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerCommand();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?tryToSIFTText\@ServerCommand\@\@IEBA_NAEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBW4TextProcessingEventOrigin\@\@V?$function\@$$A6AXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$vector\@W4TextFilteringEvent\@Safety\@\@V?$allocator\@W4TextFilteringEvent\@Safety\@\@\@std\@\@\@2\@\@Z\@5\@\@Z
     */
    MCAPI bool
    tryToSIFTText(class CommandOrigin const&, class CommandOutput&, std::vector<std::string> const&, enum class TextProcessingEventOrigin const&, std::function<void(std::vector<std::string> const&, std::vector<enum class Safety::TextFilteringEvent> const&)>)
        const;
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?mGame\@ServerCommand\@\@1PEAVMinecraft\@\@EA
     */
    MCAPI static class Minecraft* mGame;
    // NOLINTEND
};
