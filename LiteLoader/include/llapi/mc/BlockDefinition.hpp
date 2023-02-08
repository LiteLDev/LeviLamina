/**
 * @file  BlockDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

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
     * @hash   -1311258612
     * @symbol  ??0BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI BlockDefinition();
    /**
     * @hash   520556485
     * @symbol  ??0BlockDefinition\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition const &);
    /**
     * @symbol  ??0BlockDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI BlockDefinition(struct BlockDefinition &&);
    /**
     * @hash   493770956
     * @symbol  ??1BlockDefinition\@\@QEAA\@XZ
     */
    MCAPI ~BlockDefinition();
    /**
     * @hash   2042906085
     * @symbol  ?createBlockAbstractCerealSchema\@BlockDefinition\@\@SA?AUSchema\@reflection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static struct reflection::Schema createBlockAbstractCerealSchema(std::string const &);
    /**
     * @hash   1633741401
     * @symbol  ?registerBlockDefinitionTypes\@BlockDefinition\@\@SAXXZ
     */
    MCAPI static void registerBlockDefinitionTypes();
    /**
     * @hash   367444492
     * @symbol  ?upgradeJson\@BlockDefinition\@\@SA?AU?$pair\@_NVSemVersion\@\@\@std\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVPath\@Core\@\@V?$optional\@VSemVersion\@\@\@3\@\@Z
     */
    MCAPI static struct std::pair<bool, class SemVersion> upgradeJson(std::string &, class Core::Path const &, class std::optional<class SemVersion>);

//private:

};