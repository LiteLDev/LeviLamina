#include "ll/core/ddui/elements/Divider.h"
#include "ll/api/ddui/Observable.h"
#include <utility>

namespace ll::ddui {

Divider::Divider(DividerOptions options) : mOptions(std::move(options)) {}

nlohmann::ordered_json Divider::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]         = resolveOption(mOptions.visible);
    j["divider_visible"] = true;

    return j;
}

void Divider::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const& updateBool,
    std::function<void(std::string const&, std::string const&)> const& /*updateString*/,
    std::function<void(std::string const&, std::string const&)> const& /*updateObject*/
) {
    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.visible)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.visible);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "visible", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

bool Divider::handleUpdate(
    std::string const& /*subpath*/,
    std::variant<double, bool, std::string> const& /*value*/
) {
    return false;
}

bool Divider::validate() const { return true; }

} // namespace ll::ddui
