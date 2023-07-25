#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct Schema; }
// clang-format on

struct BlockDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITION
public:
    BlockDefinition& operator=(BlockDefinition const&) = delete;
#endif

public:
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition&&);
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI BlockDefinition();
    /**
     * @symbol ??0BlockDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition const&);
    /**
     * @symbol ??4BlockDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockDefinition& operator=(struct BlockDefinition&&);
    /**
     * @symbol ??1BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinition();
    /**
     * @symbol
     * ?createBlockAbstractCerealSchema\@BlockDefinition\@\@SA?AUSchema\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct cereal::Schema createBlockAbstractCerealSchema(std::string const&);
    /**
     * @symbol ?registerBlockDefinitionTypes\@BlockDefinition\@\@SAXXZ
     */
    MCAPI static void registerBlockDefinitionTypes();

    // private:
};
