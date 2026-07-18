#pragma once

#include "ll/api/ddui/Observable.h"
#include <string>

namespace ll::ddui {

struct ToggleOptions {
    ObsStringOrString description = std::string("");
    ObsBoolOrBool     disabled    = false;
    ObsBoolOrBool     visible     = true;
};

} // namespace ll::ddui
