#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockTraitFactory {
public:
    // BlockTraitFactory inner types declare
    // clang-format off
    struct Constructor;
    // clang-format on

    // BlockTraitFactory inner types define
    struct Constructor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAITFACTORY_CONSTRUCTOR
    public:
        Constructor& operator=(Constructor const&) = delete;
        Constructor(Constructor const&)            = delete;
        Constructor()                              = delete;
#endif

    public:
        /**
         * @symbol ??1Constructor\@BlockTraitFactory\@\@QEAA\@XZ
         */
        MCAPI ~Constructor();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAITFACTORY
public:
    BlockTraitFactory& operator=(BlockTraitFactory const&) = delete;
    BlockTraitFactory(BlockTraitFactory const&)            = delete;
    BlockTraitFactory()                                    = delete;
#endif

public:
    /**
     * @symbol ??1BlockTraitFactory\@\@QEAA\@XZ
     */
    MCAPI ~BlockTraitFactory();
    /**
     * @symbol
     * ?mRegisteredTraits\@BlockTraitFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        std::string,
        struct BlockTraitFactory::Constructor,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, struct BlockTraitFactory::Constructor>>>
        mRegisteredTraits;
    /**
     * @symbol ?registerAllTraits\@BlockTraitFactory\@\@SAXXZ
     */
    MCAPI static void registerAllTraits();
};
