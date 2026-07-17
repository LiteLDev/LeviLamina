#include "ll/core/ddui/elements/Button.h"
#include <utility>

namespace ll::ddui {

Button::Button(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options)
: mLabel(std::move(label)),
  mOnClick(std::move(onClick)),
  mOptions(std::move(options)) {}

nlohmann::ordered_json Button::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]        = resolveOption(mOptions.visible);
    j["button_visible"] = true;
    j["label"]          = resolveText(mLabel);
    j["tooltip"]        = resolveText(mOptions.tooltip);
    j["disabled"]       = resolveOption(mOptions.disabled);
    j["onClick"]        = 0;

    return j;
}

void Button::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const&               updateBool,
    std::function<void(std::string const&, std::string const&)> const& updateString
) {
    setupTextSubscription(mLabel, prefix + "label", addSub, updateString);
    setupTextSubscription(mOptions.tooltip, prefix + "tooltip", addSub, updateString);

    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.disabled)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.disabled);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "disabled", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.visible)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.visible);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "visible", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

bool Button::handleUpdate(
    std::string const& subpath,
    std::variant<double, bool, std::string> const& /*value*/
) {
    if (resolveOption(mOptions.disabled) || !resolveOption(mOptions.visible)) {
        return false;
    }

    if (subpath == "onClick") {
        if (mOnClick) {
            mOnClick();
        }
        return true;
    }
    return false;
}

bool Button::validate() const { return true; }

} // namespace ll::ddui
