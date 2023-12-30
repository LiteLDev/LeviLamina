#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TagCommand : public ::Command {
public:
    // prevent constructor by default
    TagCommand& operator=(TagCommand const&);
    TagCommand(TagCommand const&);
    TagCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TagCommand@@UEAA@XZ
    virtual ~TagCommand() = default;

    // vIndex: 2, symbol: ?execute@TagCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TagCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addTag@TagCommand@@AEBAXAEAVCommandOutput@@AEBV?$vector@V?$reference_wrapper@VActor@@@std@@V?$allocator@V?$reference_wrapper@VActor@@@std@@@2@@std@@@Z
    MCAPI void
    _addTag(class CommandOutput& output, std::vector<std::reference_wrapper<class Actor>> const& selectorResults) const;

    // symbol:
    // ?_getSelectorResults@TagCommand@@AEBA?AV?$vector@V?$reference_wrapper@VActor@@@std@@V?$allocator@V?$reference_wrapper@VActor@@@std@@@2@@std@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI std::vector<std::reference_wrapper<class Actor>>
          _getSelectorResults(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol:
    // ?_listTags@TagCommand@@AEBAXAEAVCommandOutput@@AEBV?$vector@V?$reference_wrapper@VActor@@@std@@V?$allocator@V?$reference_wrapper@VActor@@@std@@@2@@std@@@Z
    MCAPI void _listTags(
        class CommandOutput&                                    output,
        std::vector<std::reference_wrapper<class Actor>> const& selectorResults
    ) const;

    // symbol:
    // ?_removeTag@TagCommand@@AEBAXAEAVCommandOutput@@AEBV?$vector@V?$reference_wrapper@VActor@@@std@@V?$allocator@V?$reference_wrapper@VActor@@@std@@@2@@std@@@Z
    MCAPI void _removeTag(
        class CommandOutput&                                    output,
        std::vector<std::reference_wrapper<class Actor>> const& selectorResults
    ) const;

    // NOLINTEND
};
