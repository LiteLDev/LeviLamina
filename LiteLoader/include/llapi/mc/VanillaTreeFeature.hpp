/**
 * @file  VanillaTreeFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaTreeFeature.
 *
 */
class VanillaTreeFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATREEFEATURE
public:
    class VanillaTreeFeature& operator=(class VanillaTreeFeature const &) = delete;
    VanillaTreeFeature(class VanillaTreeFeature const &) = delete;
    VanillaTreeFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~VanillaTreeFeature();
    /**
     * @vftbl  1
     * @symbol  ?place\@VanillaTreeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

//private:
    /**
     * @symbol  ?_buildSchema\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@\@Z
     */
    MCAPI static void _buildSchema(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &);
    /**
     * @symbol  ?_buildVanillaCanopyVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeCanopyWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _buildVanillaCanopyVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeCanopyWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);
    /**
     * @symbol  ?_buildVanillaRootVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeRootWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _buildVanillaRootVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeRootWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);
    /**
     * @symbol  ?_buildVanillaTrunkVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeTrunkWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _buildVanillaTrunkVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>> &, class std::function<class ITreeTrunkWrapper & (struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature> *)>);

private:

};