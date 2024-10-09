#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/gui/controls/UIPropertyBag.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ScreenController {
public:
    char                                                                                   pad_0x0000[2512];
    std::unordered_map<uint, std::function<void(std::string const&, UIPropertyBag&)>>      mBindCallbacks;
    std::unordered_map<uint, std::function<void(int, std::string const&, UIPropertyBag&)>> mCollectionBindCallbacks;
    std::unordered_map<uint, std::function<void(std::string const&, int, std::string const&, UIPropertyBag&)>>
        mAnyCollectionBindCallbacks;

public:
    // ScreenController inner types define
    enum class PreviousButtonStateRequirement {};

public:
    // prevent constructor by default
    ScreenController& operator=(ScreenController const&);
    ScreenController(ScreenController const&);
    ScreenController();

public:
    // NOLINTBEGIN

    MCAPI void bindString(
        class StringHash const&                       bindingName,
        class std::function<std::string(void)> const& callback,
        class std::function<bool(void)> const&        condition
    );

    // NOLINTEND
};
