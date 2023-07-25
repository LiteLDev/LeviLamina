#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCONTEXT
public:
    CommandContext& operator=(CommandContext const&) = delete;
    CommandContext(CommandContext const&)            = delete;
    CommandContext()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ??0CommandContext\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@H\@Z
     */
    MCAPI CommandContext(std::string const&, std::unique_ptr<class CommandOrigin>, int);
    /**
     * @symbol ?getCommandOrigin\@CommandContext\@\@QEBAAEBVCommandOrigin\@\@XZ
     */
    MCAPI class CommandOrigin const& getCommandOrigin() const;
    /**
     * @symbol ??1CommandContext\@\@QEAA\@XZ
     */
    MCAPI ~CommandContext();
};
