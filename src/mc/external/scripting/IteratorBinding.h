#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct IteratorBinding {
public:
    // prevent constructor by default
    IteratorBinding& operator=(IteratorBinding const&);
    IteratorBinding(IteratorBinding const&);
    IteratorBinding();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IteratorBinding@Scripting@@UEAA@XZ
    virtual ~IteratorBinding();

    // symbol: ??0IteratorBinding@Scripting@@QEAA@V?$shared_ptr@VIFunction@Reflection@Scripting@@@std@@@Z
    MCAPI explicit IteratorBinding(std::shared_ptr<class Scripting::Reflection::IFunction>);

    // NOLINTEND
};

}; // namespace Scripting
