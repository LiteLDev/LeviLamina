#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/DecoratorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class RepeatUntilFailureDefinition : public ::DecoratorDefinition {

public:
    // prevent constructor by default
    RepeatUntilFailureDefinition& operator=(RepeatUntilFailureDefinition const&) = delete;
    RepeatUntilFailureDefinition(RepeatUntilFailureDefinition const&)            = delete;
    RepeatUntilFailureDefinition()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@RepeatUntilFailureDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
    /**
     * @vftbl 2
     * @symbol
     * ?createNode\@BehaviorDefinition\@\@UEBA?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBVBehaviorFactory\@\@PEAVBehaviorNode\@\@PEAVBehaviorData\@\@\@Z
     */
    virtual std::unique_ptr<class BehaviorNode>
    createNode(class Actor&, class BehaviorFactory const&, class BehaviorNode*, class BehaviorData*) const;
    // NOLINTEND
};
