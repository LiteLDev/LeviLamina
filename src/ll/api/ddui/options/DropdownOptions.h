#pragma once

#include "ll/api/ddui/Observable.h"
#include <memory>
#include <string>
#include <variant>
#include <vector>

namespace ll::ddui {

struct DropdownItemData {
    ObsStringOrString label;
    int               value;
    ObsStringOrString description = std::string("");
};

struct DropdownOptions {
    ObsStringOrString                                      description = std::string("");
    std::variant<bool, std::shared_ptr<ObservableBoolean>> disabled    = false;
    std::variant<bool, std::shared_ptr<ObservableBoolean>> visible     = true;
};

} // namespace ll::ddui
