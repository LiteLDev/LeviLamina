/**
 * @file  CommandContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <string>
#include "CommandOrigin.hpp"
#include "CommandVersion.hpp"
class CommandOrigin;
#undef BEFORE_EXTRA

/**
 * @brief MC class CommandContext.
 *
 */
class CommandContext {

#define AFTER_EXTRA
    // Add Member There
public:
    std::string mCommand;
    std::unique_ptr<CommandOrigin> mOrigin;
    int mVersion = CommandVersion::CurrentVersion;

    std::string& getCmd() {
        return mCommand;
    }
    class CommandOrigin& getOrigin() {
        return *mOrigin;
    }

    template <typename T>
    [[deprecated]]
    CommandContext(T&& x, CommandOrigin* o) : mCommand(std::forward<T>(x)), mOrigin(o){};
    template <typename T>
    CommandContext(T&& x, std::unique_ptr<CommandOrigin> ori) : mCommand(std::forward<T>(x)), mOrigin(std::move(ori)){};


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCONTEXT
public:
    class CommandContext& operator=(class CommandContext const &) = delete;
    CommandContext(class CommandContext const &) = delete;
    CommandContext() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandContext\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@H\@Z
     */
    MCAPI CommandContext(std::string const &, std::unique_ptr<class CommandOrigin>, int);
    /**
     * @symbol  ?getCommandOrigin\@CommandContext\@\@QEBAAEBVCommandOrigin\@\@XZ
     */
    MCAPI class CommandOrigin const & getCommandOrigin() const;
    /**
     * @symbol  ??1CommandContext\@\@QEAA\@XZ
     */
    MCAPI ~CommandContext();

};