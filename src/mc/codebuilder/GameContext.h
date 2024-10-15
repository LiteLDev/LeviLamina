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
        MCAPI ItemTypeList(struct CodeBuilder::GameContext::ItemTypeList&&);

        MCAPI ~ItemTypeList();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct CodeBuilder::GameContext::ItemTypeList&&);

        MCAPI void dtor$();

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
        MCAPI ObjectTypeList(struct CodeBuilder::GameContext::ObjectTypeList&&);

        MCAPI ~ObjectTypeList();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(struct CodeBuilder::GameContext::ObjectTypeList&&);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&);
    GameContext(GameContext const&);
    GameContext();

public:
    // NOLINTBEGIN
    MCAPI class Json::Value blocksToJson() const;

    MCAPI class Json::Value itemsToJson() const;

    MCAPI class Json::Value mobsToJson() const;

    MCAPI ~GameContext();

    MCAPI static std::unique_ptr<class CodeBuilder::GameContext> create(std::function<class ILevel*()> levelGetter);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
