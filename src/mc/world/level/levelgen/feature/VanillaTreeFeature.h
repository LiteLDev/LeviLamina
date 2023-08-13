#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonParseState.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/ConcreteFeatureHolder.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"

// auto generated forward declare list
// clang-format off
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {

public:
    // prevent constructor by default
    VanillaTreeFeature& operator=(VanillaTreeFeature const&) = delete;
    VanillaTreeFeature(VanillaTreeFeature const&)            = delete;
    VanillaTreeFeature()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@VanillaTreeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_buildSchema\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@\@Z
     */
    MCAPI static void
    _buildSchema(class JsonUtil::JsonSchemaObjectNode<
                 class JsonUtil::
                     JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>,
                 struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>&);
    /**
     * @symbol
     * ?_buildVanillaCanopyVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeCanopyWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void
    _buildVanillaCanopyVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>&, std::function<class ITreeCanopyWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>);
    /**
     * @symbol
     * ?_buildVanillaRootVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeRootWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _buildVanillaRootVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>&, std::function<class ITreeRootWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>);
    /**
     * @symbol
     * ?_buildVanillaTrunkVariants\@VanillaTreeFeature\@\@CAXAEAV?$JsonSchemaObjectNode\@V?$JsonParseState\@VEmptyClass\@JsonUtil\@\@UFeatureRootParseContext\@FeatureLoading\@\@\@JsonUtil\@\@U?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@JsonUtil\@\@V?$function\@$$A6AAEAVITreeTrunkWrapper\@\@PEAU?$ConcreteFeatureHolder\@VVanillaTreeFeature\@\@\@FeatureLoading\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static void _buildVanillaTrunkVariants(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>, struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>&, std::function<class ITreeTrunkWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>);
    // NOLINTEND
};
