/**
 * @file  MolangSerializer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace MolangSerializer.
 *
 */
namespace MolangSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   -884679310
     * @symbol ?deserializeScriptArg@MolangSerializer@@YA?AV?$unique_ptr@UMolangScriptArg@@U?$default_delete@UMolangScriptArg@@@std@@@std@@AEBVValue@Json@@@Z
     */
    MCAPI std::unique_ptr<struct MolangScriptArg> deserializeScriptArg(class Json::Value const &);
    /**
     * @hash   946508026
     * @symbol ?deserializeVariable@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@AEBVValue@Json@@@Z
     */
    MCAPI std::unique_ptr<class MolangVariable> deserializeVariable(class Json::Value const &);
    /**
     * @hash   -666163220
     * @symbol ?deserializeVariableMap@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariableMap@@U?$default_delete@VMolangVariableMap@@@std@@@std@@AEBVValue@Json@@@Z
     */
    MCAPI std::unique_ptr<class MolangVariableMap> deserializeVariableMap(class Json::Value const &);
    /**
     * @hash   915575130
     * @symbol ?serializeScriptArg@MolangSerializer@@YA?AVValue@Json@@AEBUMolangScriptArg@@@Z
     */
    MCAPI class Json::Value serializeScriptArg(struct MolangScriptArg const &);

};