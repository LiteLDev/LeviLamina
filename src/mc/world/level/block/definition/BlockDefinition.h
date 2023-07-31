#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct Schema; }
// clang-format on

struct BlockDefinition {

public:
    // prevent constructor by default
    BlockDefinition& operator=(BlockDefinition const&) = delete;

public:
    // NOLINTBEGIN
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
     * @symbol
     * ?createBlockAbstractCerealSchema\@BlockDefinition\@\@SA?AUSchema\@cereal\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct cereal::Schema createBlockAbstractCerealSchema(std::string const&);
    /**
     * @symbol ??4BlockDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockDefinition& operator=(struct BlockDefinition&&);
    /**
     * @symbol ?registerBlockDefinitionTypes\@BlockDefinition\@\@SAXXZ
     */
    MCAPI static void registerBlockDefinitionTypes();
    /**
     * @symbol ??1BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinition();
    // NOLINTEND
};
