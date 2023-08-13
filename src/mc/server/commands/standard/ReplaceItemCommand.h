#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {

public:
    // prevent constructor by default
    ReplaceItemCommand& operator=(ReplaceItemCommand const&) = delete;
    ReplaceItemCommand(ReplaceItemCommand const&)            = delete;
    ReplaceItemCommand()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@ReplaceItemCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ReplaceItemCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_outputError\@ReplaceItemCommand\@\@AEBAXAEAVCommandOutput\@\@UReplacementResults\@Util\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void _outputError(class CommandOutput&, struct Util::ReplacementResults, std::string const&) const;
    // NOLINTEND
};
