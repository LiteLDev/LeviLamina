/**
 * @file  TagCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TagCommand.
 *
 */
class TagCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGCOMMAND
public:
    class TagCommand& operator=(class TagCommand const &) = delete;
    TagCommand(class TagCommand const &) = delete;
    TagCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TagCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@TagCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@TagCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?_addTag\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _addTag(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;
    /**
     * @symbol  ?_getSelectorResults\@TagCommand\@\@AEBA?AV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI std::vector<class std::reference_wrapper<class Actor>> _getSelectorResults(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?_listTags\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _listTags(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;
    /**
     * @symbol  ?_removeTag\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _removeTag(class CommandOutput &, std::vector<class std::reference_wrapper<class Actor>> const &) const;

private:

};