#pragma once

#include "ll/api/ddui/Observable.h"
#include <string>

namespace ll::ddui {

struct DropdownItemData {
    ObsStringOrString label;
    int               value{};
    ObsStringOrString description = std::string("");
};

struct DropdownOptions {
    ObsStringOrString description = std::string("");
    ObsBoolOrBool     disabled    = false;
    ObsBoolOrBool     visible     = true;
};

} // namespace ll::ddui
