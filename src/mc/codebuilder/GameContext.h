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
        ItemTypeList& operator=(ItemTypeList const&) = delete;
        ItemTypeList(ItemTypeList const&)            = delete;
        ItemTypeList()                               = delete;

    public:
        /**
         * @symbol ??0ItemTypeList\@GameContext\@CodeBuilder\@\@QEAA\@$$QEAU012\@\@Z
         */
        MCAPI ItemTypeList(struct CodeBuilder::GameContext::ItemTypeList&&); // NOLINT
        /**
         * @symbol ??1ItemTypeList\@GameContext\@CodeBuilder\@\@QEAA\@XZ
         */
        MCAPI ~ItemTypeList(); // NOLINT
    };

    struct ObjectTypeList {

    public:
        // prevent constructor by default
        ObjectTypeList& operator=(ObjectTypeList const&) = delete;
        ObjectTypeList(ObjectTypeList const&)            = delete;
        ObjectTypeList()                                 = delete;

    public:
        /**
         * @symbol ??0ObjectTypeList\@GameContext\@CodeBuilder\@\@QEAA\@$$QEAU012\@\@Z
         */
        MCAPI ObjectTypeList(struct CodeBuilder::GameContext::ObjectTypeList&&); // NOLINT
        /**
         * @symbol ??1ObjectTypeList\@GameContext\@CodeBuilder\@\@QEAA\@XZ
         */
        MCAPI ~ObjectTypeList(); // NOLINT
    };

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&) = delete;
    GameContext(GameContext const&)            = delete;
    GameContext()                              = delete;

public:
    /**
     * @symbol ?blocksToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value blocksToJson() const; // NOLINT
    /**
     * @symbol ?itemsToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value itemsToJson() const; // NOLINT
    /**
     * @symbol ?mobsToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value mobsToJson() const; // NOLINT
    /**
     * @symbol ??1GameContext\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~GameContext(); // NOLINT
    /**
     * @symbol
     * ?create\@GameContext\@CodeBuilder\@\@SA?AV?$unique_ptr\@VGameContext\@CodeBuilder\@\@U?$default_delete\@VGameContext\@CodeBuilder\@\@\@std\@\@\@std\@\@V?$function\@$$A6APEAVILevel\@\@XZ\@4\@\@Z
     */
    MCAPI static std::unique_ptr<class CodeBuilder::GameContext>
        create(class std::function<class ILevel*(void)>); // NOLINT
};

}; // namespace CodeBuilder
