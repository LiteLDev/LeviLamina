#include "ll/core/ddui/elements/Slider.h"
#include <algorithm>
#include <utility>

namespace ll::ddui {

Slider::Slider(
    ObsStringOrString                 label,
    std::shared_ptr<ObservableNumber> value,
    ObsNumberOrNumber                 min,
    ObsNumberOrNumber                 max,
    SliderOptions                     options
)
: mLabel(std::move(label)),
  mValue(std::move(value)),
  mMin(std::move(min)),
  mMax(std::move(max)),
  mOptions(std::move(options)) {}

nlohmann::ordered_json Slider::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]        = resolveOption(mOptions.visible);
    j["slider_visible"] = true;
    j["label"]          = resolveString(mLabel);
    j["description"]    = resolveString(mOptions.description);
    j["value"]          = mValue ? mValue->getData() : resolveOption(mMin);
    j["minValue"]       = resolveOption(mMin);
    j["maxValue"]       = resolveOption(mMax);
    j["step"]           = resolveOption(mOptions.step);
    j["disabled"]       = resolveOption(mOptions.disabled);

    return j;
}

void Slider::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const&                                            updateDouble,
    std::function<void(std::string const&, bool)> const&                                              updateBool,
    std::function<void(std::string const&, std::string const&)> const&                                updateString
) {
    if (std::holds_alternative<std::shared_ptr<ObservableString>>(mLabel)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(mLabel);
        if (obs) {
            auto subId =
                obs->subscribe([updateString, prefix](std::string const& val) { updateString(prefix + "label", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (mValue) {
        auto subId = mValue->subscribe([updateDouble, prefix](double val) { updateDouble(prefix + "value", val); });
        addSub(mValue, subId, [obs = mValue](uint64_t id) { obs->unsubscribe(id); });
    }
    if (std::holds_alternative<std::shared_ptr<ObservableNumber>>(mMin)) {
        auto obs = std::get<std::shared_ptr<ObservableNumber>>(mMin);
        if (obs) {
            auto subId = obs->subscribe([updateDouble, prefix](double val) { updateDouble(prefix + "minValue", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (std::holds_alternative<std::shared_ptr<ObservableNumber>>(mMax)) {
        auto obs = std::get<std::shared_ptr<ObservableNumber>>(mMax);
        if (obs) {
            auto subId = obs->subscribe([updateDouble, prefix](double val) { updateDouble(prefix + "maxValue", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (std::holds_alternative<std::shared_ptr<ObservableNumber>>(mOptions.step)) {
        auto obs = std::get<std::shared_ptr<ObservableNumber>>(mOptions.step);
        if (obs) {
            auto subId = obs->subscribe([updateDouble, prefix](double val) { updateDouble(prefix + "step", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
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

void Slider::handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) {
    if (subpath == "value") {
        if (mValue && std::holds_alternative<double>(value)) {
            double val    = std::get<double>(value);
            double minVal = resolveOption(mMin);
            double maxVal = resolveOption(mMax);
            if (minVal > maxVal) {
                std::swap(minVal, maxVal);
            }
            if (val < minVal) {
                val = minVal;
            } else if (val > maxVal) {
                val = maxVal;
            }

            mValue->setData(val);
        }
    }
}

bool Slider::validate() const {
    if (mValue) {
        double val    = mValue->getData();
        double minVal = resolveOption(mMin);
        double maxVal = resolveOption(mMax);
        if (minVal > maxVal) {
            std::swap(minVal, maxVal);
        }

        return val >= minVal && val <= maxVal;
    }

    return true;
}

} // namespace ll::ddui
