/**
 * @file  BlockTraitFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockTraitFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAITFACTORY
public:
    class BlockTraitFactory& operator=(class BlockTraitFactory const &) = delete;
    BlockTraitFactory(class BlockTraitFactory const &) = delete;
    BlockTraitFactory() = delete;
#endif

public:
    /**
     * @symbol ?createTrait\@BlockTraitFactory\@\@QEBA?AV?$unique_ptr\@VITrait\@BlockTrait\@\@U?$default_delete\@VITrait\@BlockTrait\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::unique_ptr<class BlockTrait::ITrait> createTrait(std::string const &) const;
    /**
     * @symbol ??1BlockTraitFactory\@\@QEAA\@XZ
     */
    MCAPI ~BlockTraitFactory();
    /**
     * @symbol ?mRegisteredTraits\@BlockTraitFactory\@\@2V?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<std::string, struct BlockTraitFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct BlockTraitFactory::Constructor>>> mRegisteredTraits;
    /**
     * @symbol ?registerAllTraits\@BlockTraitFactory\@\@SAXXZ
     */
    MCAPI static void registerAllTraits();

};
