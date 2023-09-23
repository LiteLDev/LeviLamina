#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/UseAnimation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseAnimationUtils {
public:
    // prevent constructor by default
    UseAnimationUtils& operator=(UseAnimationUtils const&);
    UseAnimationUtils(UseAnimationUtils const&);
    UseAnimationUtils();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@UseAnimationUtils@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getStringMapping@UseAnimationUtils@@SAAEBV?$initializer_list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4UseAnimation@@@std@@@std@@XZ
    MCAPI static std::initializer_list<std::pair<std::string, ::UseAnimation>> const& getStringMapping();

    // NOLINTEND
};
