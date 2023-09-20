/**
 * @file  BlockTraitFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockTraitFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAITFACTORY
public:
    class BlockTraitFactory& operator=(class BlockTraitFactory const &) = delete;
    BlockTraitFactory(class BlockTraitFactory const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockTraitFactory\@\@QEAA\@XZ
     */
    MCAPI BlockTraitFactory();
    /**
     * @symbol ??1BlockTraitFactory\@\@QEAA\@XZ
     */
    MCAPI ~BlockTraitFactory();
    /**
     * @symbol ?getPropRegisteredTraits\@BlockTraitFactory\@\@SAAEAV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@UConstructor\@BlockTraitFactory\@\@\@std\@\@\@2\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class std::unordered_map<std::string, struct BlockTraitFactory::Constructor, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct BlockTraitFactory::Constructor>>> & getPropRegisteredTraits(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerAllTraits\@BlockTraitFactory\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void registerAllTraits(struct cereal::ReflectionCtx &);

//private:
    /**
     * @symbol ?getEnTTMetaType\@BlockTraitFactory\@\@CA?AVmeta_type\@entt\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx &);

private:

};
