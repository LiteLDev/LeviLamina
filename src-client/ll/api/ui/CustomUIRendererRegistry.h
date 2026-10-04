#pragma once

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

#include <functional>
#include <memory>
#include <string>
#include <string_view>

class UICustomRenderer;

namespace ll::ui {

class CustomUIRendererRegistry {
public:
    using Factory = std::function<std::shared_ptr<UICustomRenderer>()>;

    CustomUIRendererRegistry() = delete;

    LLNDAPI static Expected<> registerRenderer(std::string name, Factory factory);

    LLNDAPI static Expected<> registerRenderer(std::string name, std::shared_ptr<UICustomRenderer> prototype);

    LLAPI static bool unregisterRenderer(std::string_view name);

    LLNDAPI static bool isRegistered(std::string_view name);
};

} // namespace ll::ui
