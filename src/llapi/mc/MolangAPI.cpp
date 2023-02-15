// example [quick]:
//       float result=actor->quickEvalMolangScript("query.health");
//       float result=actor->quickEvalMolangScript("(1+1)*233");
//
// example [advanced] for better performance (once the expression been compiled ,it could be used in many times):
//      #include "llapi/mc/ExpressionNode.hpp"
//      static local MolangInstance instance("(!query.is_in_water)&&query.is_in_water_or_rain")
//  ...
//      instance.evalAsFloat(actor);
//  ...
//      bool isInRain = instance.evalAsFloat(actor)==(float)1.0;
//  ...
//      Json::Value isInRain = instance.evalAsJson(actor);
//      //will return json like this :
//      //     {
//      //        "type" : "float",
//      //        "value" : 1.0
//      //     }


#include "llapi/Global.h"
#include "llapi/memory/Hook.h"
#include "llapi/mc/ExpressionNode.hpp"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/MolangScriptArg.hpp"
#include "llapi/mc/HashedString.hpp"
#include "llapi/mc/RenderParams.hpp"
#include "llapi/mc/MolangSerializer.hpp"

#pragma region Hook
LL_AUTO_STATIC_HOOK(
    MolangAPIHook,
    ll::memory::Priority::PriorityNormal,
    "?registerQueryFunction@ExpressionNode@@SAAEAUMolangQueryFunction@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$"
    "allocator@D@2@@std@@V?$function@$$A6AAEBUMolangScriptArg@@AEAVRenderParams@@AEBV?$vector@VExpressionNode@@V?$"
    "allocator@VExpressionNode@@@std@@@std@@@Z@4@0W4MolangQueryFunctionReturnType@@VHashedString@@_K4AEBV?$"
    "initializer_list@H@4@@Z",
    void*,
    std::string const&          a2,
    void*                       a3,
    std::string const&          a4,
    void*                       a5,
    HashedString                a6,
    __int64                     a7,
    __int64                     a8,
    std::initializer_list<int>& a9
) {
    auto experiment = std::initializer_list<int>{};
    // in order to use all query functions,we need to delete all experiment requirements here
    return origin(a2, a3, a4, a5, a6, a7, a8, experiment);
}
#pragma endregion

#pragma region MolangInstance
MolangInstance::MolangInstance(const string& expressionStr) {
    LL_SYMBOL_CALL("??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
            "W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z",
            ExpressionNode*, ExpressionNode*, string, int, gsl::span<class HashedString const, -1>)(
        (ExpressionNode*)expression, expressionStr, /*MolangVersion*/ 6,
        gsl::span<class HashedString const, -1>({HashedString("default" /*or "world_gen"*/)})); // call constructor
    // the HashedString "default" is necessary for using query.xxx functions interacting with actor
    // otherwise only standard math expression available
}
MolangInstance::~MolangInstance() {
    ((ExpressionNode*)expression)->~ExpressionNode(); // release memory
}
float MolangInstance::evalAsFloat(Actor* actor) {
    return ((ExpressionNode*)expression)->evalAsFloat(RenderParams::getRenderParams(*actor));
}
Json::Value MolangInstance::evalAsJson(Actor* actor) {
    return MolangSerializer::serializeScriptArg(
        ((ExpressionNode*)expression)->evalGeneric(RenderParams::getRenderParams(*actor))
    );
}
string MolangInstance::getExpressionString() { return ((ExpressionNode*)expression)->getExpressionString(); }
bool   MolangInstance::isInitialized() { return ((ExpressionNode*)expression)->isInitialized(); }
bool   MolangInstance::isValid() { return ((ExpressionNode*)expression)->isValid(); }
bool   MolangInstance::parse(
    const string&                           expressionStr,
    MolangVersion                           version,
    gsl::span<class HashedString const, -1> types
) {
    return ((ExpressionNode*)expression)->parse(expressionStr, version, types);
}
#pragma endregion

#pragma region QuickEval

float Actor::quickEvalMolangScript(const string& expression) {
    // MolangInstance instance(expression);
    MolangInstance instance(expression);
    return instance.evalAsFloat(this);
}
// I don't know if it is necessary add this ,it seems that the result of which is similar to above one
//  result sample:
//   {
//     "type" : "float",
//     "value" : 8.0
//   }
//
// Json::Value Actor::quickEvalMolangScriptAsJson(Actor& actor, string& expression) {
//     char v56[0xC8]{}; // allocate memory
//     ExpressionNode* exp =
//         LL_SYMBOL_CALL("??0ExpressionNode@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
//                 "W4MolangVersion@@V?$span@$$CBVHashedString@@$0?0@gsl@@@Z",
//                 ExpressionNode*, ExpressionNode*, string, int, gsl::span<class HashedString const, -1>)(
//             (ExpressionNode*)v56, expression, 6,
//             gsl::span<class HashedString const, -1>({HashedString("default" /*or "world_gen"*/)})); // call
//             constructor
//     Json::Value result =
//         MolangSerializer::serializeScriptArg(exp->evalGeneric(RenderParams::getRenderParams(*this))); // calculate
//     exp->~ExpressionNode();                                                        // release
//     memory return result;
// }
#pragma endregion
