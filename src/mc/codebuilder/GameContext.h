#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_GAMECONTEXT_ITEMTYPELIST
    public:
        ItemTypeList& operator=(ItemTypeList const&) = delete;
        ItemTypeList(ItemTypeList const&)            = delete;
        ItemTypeList()                               = delete;
#endif

    public:
        /**
         * @symbol ??0ItemTypeList\@GameContext\@CodeBuilder\@\@QEAA\@$$QEAU012\@\@Z
         */
        MCAPI ItemTypeList(struct CodeBuilder::GameContext::ItemTypeList&&);
        /**
         * @symbol ??1ItemTypeList\@GameContext\@CodeBuilder\@\@QEAA\@XZ
         */
        MCAPI ~ItemTypeList();
    };

    struct ObjectTypeList {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_GAMECONTEXT_OBJECTTYPELIST
    public:
        ObjectTypeList& operator=(ObjectTypeList const&) = delete;
        ObjectTypeList(ObjectTypeList const&)            = delete;
        ObjectTypeList()                                 = delete;
#endif

    public:
        /**
         * @symbol ??0ObjectTypeList\@GameContext\@CodeBuilder\@\@QEAA\@$$QEAU012\@\@Z
         */
        MCAPI ObjectTypeList(struct CodeBuilder::GameContext::ObjectTypeList&&);
        /**
         * @symbol ??1ObjectTypeList\@GameContext\@CodeBuilder\@\@QEAA\@XZ
         */
        MCAPI ~ObjectTypeList();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_GAMECONTEXT
public:
    GameContext& operator=(GameContext const&) = delete;
    GameContext(GameContext const&)            = delete;
    GameContext()                              = delete;
#endif

public:
    /**
     * @symbol ?blocksToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value blocksToJson() const;
    /**
     * @symbol ?itemsToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value itemsToJson() const;
    /**
     * @symbol ?mobsToJson\@GameContext\@CodeBuilder\@\@QEBA?AVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value mobsToJson() const;
    /**
     * @symbol ??1GameContext\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~GameContext();
    /**
     * @symbol
     * ?create\@GameContext\@CodeBuilder\@\@SA?AV?$unique_ptr\@VGameContext\@CodeBuilder\@\@U?$default_delete\@VGameContext\@CodeBuilder\@\@\@std\@\@\@std\@\@V?$function\@$$A6APEAVILevel\@\@XZ\@4\@\@Z
     */
    MCAPI static std::unique_ptr<class CodeBuilder::GameContext> create(class std::function<class ILevel*(void)>);
};

}; // namespace CodeBuilder
