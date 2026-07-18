#pragma once

#include "ll/api/ddui/Observable.h"
#include <string>

namespace ll::ddui {

struct ButtonOptions {
    ObsBoolOrBool     disabled = false;
    ObsStringOrString tooltip  = std::string("");
    ObsBoolOrBool     visible  = true;
};

} // namespace ll::ddui
