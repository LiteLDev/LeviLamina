#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BehaviorDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORDEFINITION
public:
    BehaviorDefinition& operator=(BehaviorDefinition const&) = delete;
    BehaviorDefinition(BehaviorDefinition const&)            = delete;
    BehaviorDefinition()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@BehaviorDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
    /**
     * @vftbl 2
     * @symbol
     * ?createNode\@BehaviorDefinition\@\@UEBA?AV?$unique_ptr\@VBehaviorNode\@\@U?$default_delete\@VBehaviorNode\@\@\@std\@\@\@std\@\@AEAVActor\@\@AEBVBehaviorFactory\@\@PEAVBehaviorNode\@\@PEAVBehaviorData\@\@\@Z
     */
    virtual std::unique_ptr<class BehaviorNode>
    createNode(class Actor&, class BehaviorFactory const&, class BehaviorNode*, class BehaviorData*) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BehaviorDefinition();
#endif
};
