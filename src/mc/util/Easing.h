#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EasingType.h"

class Easing {
public:
    // prevent constructor by default
    Easing& operator=(Easing const&) = delete;
    Easing(Easing const&)            = delete;
    Easing()                         = delete;

public:
    // NOLINTBEGIN
    // symbol: ?bindType@Easing@@SAXXZ
    MCAPI static void bindType();

    // symbol:
    // ?getStringFromEasingType@Easing@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4EasingType@@@Z
    MCAPI static std::string const& getStringFromEasingType(::EasingType);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mEasingFuncs@Easing@@0V?$vector@V?$function@$$A6AMMMM@Z@std@@V?$allocator@V?$function@$$A6AMMMM@Z@std@@@2@@std@@A
    MCAPI static std::vector<std::function<float(float, float, float)>> mEasingFuncs;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mEasingFuncs() { return mEasingFuncs; }

    // NOLINTEND
};
