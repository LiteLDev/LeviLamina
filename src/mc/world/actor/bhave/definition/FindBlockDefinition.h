#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/definition/BehaviorDefinition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FindBlockDefinition : public ::BehaviorDefinition {

public:
    // prevent constructor by default
    FindBlockDefinition& operator=(FindBlockDefinition const&) = delete;
    FindBlockDefinition(FindBlockDefinition const&)            = delete;
    FindBlockDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@FindBlockDefinition\@\@UEAAXVValue\@Json\@\@AEBVBehaviorFactory\@\@\@Z
     */
    virtual void load(class Json::Value, class BehaviorFactory const&);
    // NOLINTEND
};
