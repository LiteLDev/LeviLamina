#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MoveDefinition : public ::BehaviorDefinition {

public:
    // prevent constructor by default
    MoveDefinition& operator=(MoveDefinition const&) = delete;
    MoveDefinition(MoveDefinition const&)            = delete;
    MoveDefinition()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@MoveDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveDefinition(); // NOLINT
#endif
};
