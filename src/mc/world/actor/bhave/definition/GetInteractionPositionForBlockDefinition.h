#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class GetInteractionPositionForBlockDefinition : public ::BehaviorDefinition {

public:
    // prevent constructor by default
    GetInteractionPositionForBlockDefinition& operator=(GetInteractionPositionForBlockDefinition const&) = delete;
    GetInteractionPositionForBlockDefinition(GetInteractionPositionForBlockDefinition const&)            = delete;
    GetInteractionPositionForBlockDefinition()                                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@GetInteractionPositionForBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETINTERACTIONPOSITIONFORBLOCKDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~GetInteractionPositionForBlockDefinition(); // NOLINT
#endif
};
