#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <string_view>

class UIControl;
class UIScene;

namespace ll::ui {

[[nodiscard]] LLAPI Expected<std::shared_ptr<UIControl>>
                    attachCustomControl(UIScene& scene, std::string_view parentControlName, std::string const& defName);

} // namespace ll::ui
