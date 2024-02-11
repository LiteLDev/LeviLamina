#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class GameContext {
public:
    // GameContext inner types declare
    // clang-format off
    struct ItemTypeList;
    struct ObjectTypeList;
    // clang-format on

    // GameContext inner types define
    struct ItemTypeList {
    public:
        // prevent constructor by default
        ItemTypeList& operator=(ItemTypeList const&);
        ItemTypeList(ItemTypeList const&);
        ItemTypeList();

    public:
        // NOLINTBEGIN
        // symbol: ??0ItemTypeList@GameContext@CodeBuilder@@QEAA@$$QEAU012@@Z
        MCAPI ItemTypeList(struct CodeBuilder::GameContext::ItemTypeList&&);

        // symbol: ??1ItemTypeList@GameContext@CodeBuilder@@QEAA@XZ
        MCAPI ~ItemTypeList();

        // NOLINTEND
    };

    struct ObjectTypeList {
    public:
        // prevent constructor by default
        ObjectTypeList& operator=(ObjectTypeList const&);
        ObjectTypeList(ObjectTypeList const&);
        ObjectTypeList();

    public:
        // NOLINTBEGIN
        // symbol: ??0ObjectTypeList@GameContext@CodeBuilder@@QEAA@$$QEAU012@@Z
        MCAPI ObjectTypeList(struct CodeBuilder::GameContext::ObjectTypeList&&);

        // symbol: ??1ObjectTypeList@GameContext@CodeBuilder@@QEAA@XZ
        MCAPI ~ObjectTypeList();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&);
    GameContext(GameContext const&);
    GameContext();

public:
    // NOLINTBEGIN
    // symbol: ?blocksToJson@GameContext@CodeBuilder@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value blocksToJson() const;

    // symbol: ?itemsToJson@GameContext@CodeBuilder@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value itemsToJson() const;

    // symbol: ?mobsToJson@GameContext@CodeBuilder@@QEBA?AVValue@Json@@XZ
    MCAPI class Json::Value mobsToJson() const;

    // symbol: ??1GameContext@CodeBuilder@@QEAA@XZ
    MCAPI ~GameContext();

    // symbol:
    // ?create@GameContext@CodeBuilder@@SA?AV?$unique_ptr@VGameContext@CodeBuilder@@U?$default_delete@VGameContext@CodeBuilder@@@std@@@std@@V?$function@$$A6APEAVILevel@@XZ@4@@Z
    MCAPI static std::unique_ptr<class CodeBuilder::GameContext> create(std::function<class ILevel*()>);

    // NOLINTEND
};

}; // namespace CodeBuilder
