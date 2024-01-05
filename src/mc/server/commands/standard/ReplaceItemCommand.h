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
    ReplaceItemCommand& operator=(ReplaceItemCommand const&);
    ReplaceItemCommand(ReplaceItemCommand const&);
    ReplaceItemCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReplaceItemCommand@@UEAA@XZ
    virtual ~ReplaceItemCommand() = default;

    // vIndex: 2, symbol: ?execute@ReplaceItemCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ReplaceItemCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_outputError@ReplaceItemCommand@@AEBAXAEAVCommandOutput@@UReplacementResults@Util@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void
    _outputError(class CommandOutput& output, struct Util::ReplacementResults, std::string const& itemName) const;

    // NOLINTEND
};
