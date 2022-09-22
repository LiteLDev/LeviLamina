/**
 * @file  ExpressionNodeSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ExpressionNodeSerializer.
 *
 */
namespace ExpressionNodeSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -1805905000
     * @symbol ?fromFloat@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@M@Z
     */
    MCAPI void fromFloat(class ExpressionNode &, float);
    /**
     * @hash   1534300357
     * @symbol ?fromProxy@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@UExpressionNodeProxy@1@@Z
     */
    MCAPI void fromProxy(class ExpressionNode &, struct ExpressionNodeSerializer::ExpressionNodeProxy);
    /**
     * @hash   -658891185
     * @symbol ?fromString@ExpressionNodeSerializer@@YAXAEAVExpressionNode@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBedrockLoadContext@@@Z
     */
    MCAPI void fromString(class ExpressionNode &, std::string const &, class BedrockLoadContext const &);
    /**
     * @hash   -179596897
     * @symbol ?toProxy@ExpressionNodeSerializer@@YA?AUExpressionNodeProxy@1@AEBVExpressionNode@@@Z
     */
    MCAPI struct ExpressionNodeSerializer::ExpressionNodeProxy toProxy(class ExpressionNode const &);

};