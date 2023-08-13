#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TagCommand : public ::Command {

public:
    // prevent constructor by default
    TagCommand& operator=(TagCommand const&) = delete;
    TagCommand(TagCommand const&)            = delete;
    TagCommand()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@TagCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TagCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addTag\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _addTag(class CommandOutput&, std::vector<std::reference_wrapper<class Actor>> const&) const;
    /**
     * @symbol
     * ?_getSelectorResults\@TagCommand\@\@AEBA?AV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI std::vector<std::reference_wrapper<class Actor>>
          _getSelectorResults(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol
     * ?_listTags\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _listTags(class CommandOutput&, std::vector<std::reference_wrapper<class Actor>> const&) const;
    /**
     * @symbol
     * ?_removeTag\@TagCommand\@\@AEBAXAEAVCommandOutput\@\@AEBV?$vector\@V?$reference_wrapper\@VActor\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@VActor\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _removeTag(class CommandOutput&, std::vector<std::reference_wrapper<class Actor>> const&) const;
    // NOLINTEND
};
