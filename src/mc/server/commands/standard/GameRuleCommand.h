#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GameRuleCommand : public ::Command {
public:
    // GameRuleCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // GameRuleCommand inner types define
    struct InitProxy {
    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // NOLINTBEGIN
        // symbol: ??0InitProxy@GameRuleCommand@@QEAA@AEAVLevel@@@Z
        MCAPI explicit InitProxy(class Level& level);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameRuleCommand& operator=(GameRuleCommand const&);
    GameRuleCommand(GameRuleCommand const&);
    GameRuleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameRuleCommand@@UEAA@XZ
    virtual ~GameRuleCommand() = default;

    // vIndex: 2, symbol: ?execute@GameRuleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@GameRuleCommand@@SAXAEAVCommandRegistry@@$$QEAUInitProxy@1@@Z
    MCAPI static void setup(class CommandRegistry& registry, struct GameRuleCommand::InitProxy&& dependencies);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getGameRule@GameRuleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void getGameRule(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setGameRule@GameRuleCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void setGameRule(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol:
    // ?createJsonIndex@GameRuleCommand@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVGameRule@@AEAVValue@Json@@PEAV23@@Z
    MCAPI static void createJsonIndex(
        std::string const&    ruleName,
        class GameRule const& rule,
        class Json::Value&    json,
        std::string*          value
    );

    // NOLINTEND
};
