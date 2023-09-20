/**
 * @file  BlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDefinition.
 *
 */
struct BlockDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITION
public:
    struct BlockDefinition& operator=(struct BlockDefinition const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI BlockDefinition();
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition &&);
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition const &);
    /**
     * @symbol ??4BlockDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockDefinition & operator=(struct BlockDefinition &&);
    /**
     * @symbol ??1BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinition();
    /**
     * @symbol ?createBlockAbstractCerealSchema\@BlockDefinition\@\@SA?AUSchema\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAUReflectionCtx\@3\@\@Z
     */
    MCAPI static struct cereal::Schema createBlockAbstractCerealSchema(std::string const &, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?registerBlockDefinitionTypes\@BlockDefinition\@\@SAXAEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void registerBlockDefinitionTypes(struct cereal::ReflectionCtx &);

//private:
    /**
     * @symbol ?getEnTTMetaType\@BlockDefinition\@\@CA?AVmeta_type\@entt\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class entt::meta_type getEnTTMetaType(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?getPropCerealDocumentUpgrader\@BlockDefinition\@\@CAAEAVCerealDocumentUpgrader\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static class CerealDocumentUpgrader & getPropCerealDocumentUpgrader(struct cereal::ReflectionCtx &);

};