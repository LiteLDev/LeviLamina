#include "ll/core/ddui/elements/Toggle.h"
#include <utility>

namespace ll::ddui {

Toggle::Toggle(ObsStringOrString label, std::shared_ptr<ObservableBoolean> toggled, ToggleOptions options)
: mLabel(std::move(label)),
  mToggled(std::move(toggled)),
  mOptions(std::move(options)) {}

nlohmann::ordered_json Toggle::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]        = resolveOption(mOptions.visible);
    j["toggle_visible"] = true;
    j["label"]          = resolveText(mLabel);
    j["description"]    = resolveText(mOptions.description);
    j["toggled"]        = mToggled ? mToggled->getData() : false;
    j["disabled"]       = resolveOption(mOptions.disabled);

    return j;
}

void Toggle::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const&               updateBool,
    std::function<void(std::string const&, std::string const&)> const& updateString
) {
    setupTextSubscription(mLabel, prefix + "label", addSub, updateString);
    setupTextSubscription(mOptions.description, prefix + "description", addSub, updateString);

    if (mToggled) {
        auto subId = mToggled->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "toggled", val); });
        addSub(mToggled, subId, [obs = mToggled](uint64_t id) { obs->unsubscribe(id); });
    }
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

bool Toggle::handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) {
    if (resolveOption(mOptions.disabled) || !resolveOption(mOptions.visible)) {
        return false;
    }

    if (subpath == "toggled") {
        if (mToggled && mToggled->isClientWritable() && std::holds_alternative<bool>(value)) {
            mToggled->setData(std::get<bool>(value));
            return true;
        }
    }
    return false;
}

bool Toggle::validate() const {
    if (mToggled && !mToggled->isClientWritable()) {
        return false;
    }

    return true;
}

} // namespace ll::ddui
