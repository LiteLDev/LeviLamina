#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/CompositeDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SelectorDefinition : public ::CompositeDefinition {

public:
    // prevent constructor by default
    SelectorDefinition& operator=(SelectorDefinition const&) = delete;
    SelectorDefinition(SelectorDefinition const&)            = delete;
    SelectorDefinition()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SelectorDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
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
