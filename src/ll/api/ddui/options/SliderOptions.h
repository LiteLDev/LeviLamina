#pragma once

#include "ll/api/ddui/Observable.h"
#include <string>

namespace ll::ddui {

struct SliderOptions {
    ObsStringOrString description = std::string("");
    ObsBoolOrBool     disabled    = false;
    ObsNumberOrNumber step        = 1.0;
    ObsBoolOrBool     visible     = true;
};

} // namespace ll::ddui
